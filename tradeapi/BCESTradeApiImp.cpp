#include "BCESTradeApiImp.h"
#include <string>
#include <boost/program_options.hpp>
#include <iostream>
#include <fstream>
#include <stdarg.h>
#include <boost/asio.hpp>
#include "ServerConnector.h"
#include <fcntl.h>
#include <boost/thread/thread.hpp>

//LOGFP* lp=NULL;

#define TCP_SND_SIZ		1024*1024*10		// Tcp Send Buffer Size 10MB
#define TCP_RCV_SIZ		1024*1024*1			// Tcp Recv Buffer Size 1MB
#define APP_TIMEOUT		120					// Seconds

unsigned int nTcpSndSiz=TCP_SND_SIZ;
unsigned int nTcpRcvSiz=TCP_RCV_SIZ;

using namespace std;

// ������
typedef struct {
	int ErrorNo;
	char ErrorMessage[256];
} stAPIErrorInfo;

stAPIErrorInfo APIErrorInfoArray[]={
#define BCESAPIErrorMessageSucceeded			0
	{BCESAPIErrorMessageSucceeded,"�����ɹ���"},
#define BCESAPIErrorMessageFailed			-1
	{BCESAPIErrorMessageFailed,"����ʧ�ܣ�"}
};
const char APIErrorMessageUnKnownErrorCode[]="δ֪�������";

CBCESTradeApiImp::CBCESTradeApiImp()
{
	m_pConnector=NULL;
}

CBCESTradeApiImp::~CBCESTradeApiImp()
{
	if(m_pConnector)
		Stop();
}

void CBCESTradeApiImp::RegisterSpi(CBCESTradeSpi* pSpi)
{
	m_pSpi=pSpi;
}

void CBCESTradeApiImp::Release()
{
	delete this;
}

int CBCESTradeApiImp::SetServerAddress(const char* szServerAddress)
{
	strcpy(m_servaddr,szServerAddress);
	return 0;
}

int CBCESTradeApiImp::Run()
{
	m_pConnector=new CServerConnector(m_io,m_servaddr,nTcpSndSiz,nTcpRcvSiz,APP_TIMEOUT,this);
	m_pConnector->AsyncConnect();
	boost::thread t(boost::bind(&boost::asio::io_service::run, &m_io));

	return 0;
}
int CBCESTradeApiImp::Stop()
{
	if(!m_pConnector)
		return 0;
	m_io.stop();
	delete m_pConnector;
	m_pConnector=NULL;

	return 0;
}

const char* CBCESTradeApiImp::GetErrorMessage(int ErrorNo)
{
	const char* p=NULL;
	int i,count;

	count=sizeof(APIErrorInfoArray)/sizeof(stAPIErrorInfo);
	for(i=0;i<count;i++){
		if(ErrorNo==APIErrorInfoArray[i].ErrorNo){
			p=APIErrorInfoArray[i].ErrorMessage;
			break;
		}
	}

	if(!p)
		return APIErrorMessageUnKnownErrorCode;

	return p;
}

/*��¼����*/
int CBCESTradeApiImp::LoginReq(stBCESLoginReq *pLoginReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::LoginReq,m_pConnector->m_pConnection,*pLoginReq,nRequestID));

	return 0;
}


/*�ǳ�����*/
int CBCESTradeApiImp::LogoutReq(stBCESLogoutReq *pLogoutReq,UINT nRequestID)
{
	m_io.post(boost::bind(&CServerConnection::LogoutReq,m_pConnector->m_pConnection,*pLogoutReq,nRequestID));

	return 0;
}

int CBCESTradeApiImp::FlowSubscribeReq(UINT nPrivateResumeMethod,UINT nPublicResumeMethod)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::FlowSubscribeReq,m_pConnector->m_pConnection,nPrivateResumeMethod,nPublicResumeMethod));

	return 0;
}


/*�޸���������*/
int CBCESTradeApiImp::ChangePasswordReq(stBCESChangePasswordReq *pChangePasswordReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::ChangePasswordReq,m_pConnector->m_pConnection,*pChangePasswordReq,nRequestID));

	return 0;
}

/*����¼������*/
int CBCESTradeApiImp::OrderInsertReq(stBCESInputOrder *pInputOrder,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::OrderInsertReq,m_pConnector->m_pConnection,*pInputOrder,nRequestID));

	return 0;
}

/*��������*/
int CBCESTradeApiImp::OrderCancelReq(stBCESOrderCancelReq *pOrderCancelReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::OrderCancelReq,m_pConnector->m_pConnection,*pOrderCancelReq,nRequestID));

	return 0;
}

/*�����ѯ����*/
int CBCESTradeApiImp::QuotQueryReq(stBCESQuotQueryReq *pQuotQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::QuotQueryReq,m_pConnector->m_pConnection,*pQuotQueryReq,nRequestID));

	return 0;
}

/*������ѯ����*/
int CBCESTradeApiImp::OrderQueryReq(stBCESOrderQueryReq *pOrderQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::OrderQueryReq,m_pConnector->m_pConnection,*pOrderQueryReq,nRequestID));

	return 0;
}

/*�ɽ���ѯ����*/
int CBCESTradeApiImp::TradeQueryReq(stBCESTradeQueryReq *pTradeQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::TradeQueryReq,m_pConnector->m_pConnection,*pTradeQueryReq,nRequestID));

	return 0;
}

/*�ֲֲ�ѯ����*/
int CBCESTradeApiImp::PosiQueryReq(stBCESPosiQueryReq *pPosiQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::PosiQueryReq,m_pConnector->m_pConnection,*pPosiQueryReq,nRequestID));

	return 0;
}

/*�ʽ��ѯ����*/
int CBCESTradeApiImp::FundQueryReq(stBCESFundQueryReq *pFundQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::FundQueryReq,m_pConnector->m_pConnection,*pFundQueryReq,nRequestID));

	return 0;
}

/*��Լ��ѯ����*/
int CBCESTradeApiImp::InstrumentQueryReq(stBCESInstrumentQueryReq *pInstrumentQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::InstrumentQueryReq,m_pConnector->m_pConnection,*pInstrumentQueryReq,nRequestID));

	return 0;
}

/*�ֲ���ϸ��ѯ����*/
int CBCESTradeApiImp::PosiDetailQueryReq(stBCESPosiDetailQueryReq *pPosiDetailQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::PosiDetailQueryReq,m_pConnector->m_pConnection,*pPosiDetailQueryReq,nRequestID));

	return 0;
}

/*ֹӮֹ����������*/
int CBCESTradeApiImp::ProfitLossStopSetReq(stBCESProfitLossStopSetReq *pProfitLossStopSetReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::ProfitLossStopSetReq,m_pConnector->m_pConnection,*pProfitLossStopSetReq,nRequestID));

	return 0;
}

/*�����޸�����*/
int CBCESTradeApiImp::OrderModifyReq(stBCESInputOrder *pInputOrder,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::OrderModifyReq,m_pConnector->m_pConnection,*pInputOrder,nRequestID));

	return 0;
}

/*�����ѯ����*/
int CBCESTradeApiImp::BulletinQueryReq(stBCESBulletinQueryReq *pBulletinQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::BulletinQueryReq,m_pConnector->m_pConnection,*pBulletinQueryReq,nRequestID));

	return 0;
}

/*֪ͨ��ѯ����*/
int CBCESTradeApiImp::NoticeQueryReq(stBCESNoticeQueryReq *pNoticeQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::NoticeQueryReq,m_pConnector->m_pConnection,*pNoticeQueryReq,nRequestID));

	return 0;
}

/*���ӳ��������*/
int CBCESTradeApiImp::ElectronicFundIOReq(stBCESElectronicFundIOReq *pElectronicFundIOReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::ElectronicFundIOReq,m_pConnector->m_pConnection,*pElectronicFundIOReq,nRequestID));

	return 0;
}

/*�������ϸ��ѯ����*/
int CBCESTradeApiImp::FundIODetailQueryReq(stBCESFundIODetailQueryReq *pFundIODetailQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::FundIODetailQueryReq,m_pConnector->m_pConnection,*pFundIODetailQueryReq,nRequestID));

	return 0;
}

/*�����ѯ����*/
int CBCESTradeApiImp::ReportQueryReq(stBCESReportQueryReq *pReportQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::ReportQueryReq,m_pConnector->m_pConnection,*pReportQueryReq,nRequestID));

	return 0;
}

/*��ʷ������ѯ����*/
int CBCESTradeApiImp::HisOrderQueryReq(stBCESHisOrderQueryReq *pHisOrderQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::HisOrderQueryReq,m_pConnector->m_pConnection,*pHisOrderQueryReq,nRequestID));

	return 0;
}

/*��ʷ�ɽ���ѯ����*/
int CBCESTradeApiImp::HisTradeQueryReq(stBCESHisTradeQueryReq *pHisTradeQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::HisTradeQueryReq,m_pConnector->m_pConnection,*pHisTradeQueryReq,nRequestID));

	return 0;
}

/*��ʷ�����ѯ����*/
int CBCESTradeApiImp::HisBulletinQueryReq(stBCESHisBulletinQueryReq *pHisBulletinQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::HisBulletinQueryReq,m_pConnector->m_pConnection,*pHisBulletinQueryReq,nRequestID));

	return 0;
}

/*��ʷ֪ͨ��ѯ����*/
int CBCESTradeApiImp::HisNoticeQueryReq(stBCESHisNoticeQueryReq *pHisNoticeQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::HisNoticeQueryReq,m_pConnector->m_pConnection,*pHisNoticeQueryReq,nRequestID));

	return 0;
}

/*ǩԼ����*/
int CBCESTradeApiImp::AccountBindReq(stBCESAccountBindReq *pAccountBindReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::AccountBindReq,m_pConnector->m_pConnection,*pAccountBindReq,nRequestID));

	return 0;
}

/*ǩԼ��Ϣ��ѯ����*/
int CBCESTradeApiImp::AccountBindQueryReq(stBCESAccountBindQueryReq *pAccountBindQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::AccountBindQueryReq,m_pConnector->m_pConnection,*pAccountBindQueryReq,nRequestID));

	return 0;
}

/*�ʽ��ѯ����*/
int CBCESTradeApiImp::HisFundQueryReq(stBCESHisFundQueryReq *pHisFundQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::HisFundQueryReq,m_pConnector->m_pConnection,*pHisFundQueryReq,nRequestID));

	return 0;
}

/*�ֲ���ϸ��ѯ����*/
int CBCESTradeApiImp::HisPosiDetailQueryReq(stBCESHisPosiDetailQueryReq *pHisPosiDetailQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::HisPosiDetailQueryReq,m_pConnector->m_pConnection,*pHisPosiDetailQueryReq,nRequestID));

	return 0;
}
