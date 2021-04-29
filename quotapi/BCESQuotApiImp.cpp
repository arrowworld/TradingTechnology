#include "BCESQuotApiImp.h"
#include <string>
#include <boost/program_options.hpp>
#include <iostream>
#include <fstream>
#include <stdarg.h>
#include <boost/asio.hpp>
#include "ServerConnector.h"
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

CBCESQuotApiImp::CBCESQuotApiImp()
{
	m_pConnector=NULL;
}

CBCESQuotApiImp::~CBCESQuotApiImp()
{
	if(m_pConnector)
		Stop();
}

void CBCESQuotApiImp::RegisterSpi(CBCESQuotSpi* pSpi)
{
	m_pSpi=pSpi;
}

void CBCESQuotApiImp::Release()
{
	delete this;
}

int CBCESQuotApiImp::SetServerAddress(const char* szServerAddress)
{
	strcpy(m_servaddr,szServerAddress);
	return 0;
}

int CBCESQuotApiImp::Run()
{
	m_pConnector=new CServerConnector(m_io,m_servaddr,nTcpSndSiz,nTcpRcvSiz,APP_TIMEOUT,this);
	m_pConnector->AsyncConnect();
	boost::thread t(boost::bind(&boost::asio::io_service::run, &m_io));

	return 0;
}
int CBCESQuotApiImp::Stop()
{
	if(!m_pConnector)
		return 0;
	m_io.stop();
	delete m_pConnector;
	m_pConnector=NULL;

	return 0;
}

const char* CBCESQuotApiImp::GetErrorMessage(int ErrorNo)
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
int CBCESQuotApiImp::LoginReq(stBCESLoginReq *pLoginReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::LoginReq,m_pConnector->m_pConnection,*pLoginReq,nRequestID));

	return 0;
}

/*�ǳ�����*/
int CBCESQuotApiImp::LogoutReq(stBCESLogoutReq *pLogoutReq,UINT nRequestID)
{
	m_io.post(boost::bind(&CServerConnection::LogoutReq,m_pConnector->m_pConnection,*pLogoutReq,nRequestID));

	return 0;
}


/*���鶩������*/
int CBCESQuotApiImp::QuotSubscribeReq(stBCESQuotSubscribeReq *pQuotSubscribeReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::QuotSubscribeReq,m_pConnector->m_pConnection,*pQuotSubscribeReq,nRequestID));

	return 0;
}

/*�����˶�����*/
int CBCESQuotApiImp::QuotUnSubscribeReq(stBCESQuotUnSubscribeReq *pQuotUnSubscribeReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::QuotUnSubscribeReq,m_pConnector->m_pConnection,*pQuotUnSubscribeReq,nRequestID));

	return 0;
}

/*���߲�ѯ����*/
int CBCESQuotApiImp::MinDataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::MinDataQueryReq,m_pConnector->m_pConnection,*pMinDataQueryReq,nRequestID));

	return 0;
}

/*���߲�ѯ����*/
int CBCESQuotApiImp::DayDataQueryReq(stBCESDayDataQueryReq *pDayDataQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::DayDataQueryReq,m_pConnector->m_pConnection,*pDayDataQueryReq,nRequestID));

	return 0;
}

/*5���߲�ѯ����*/
int CBCESQuotApiImp::Min5DataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::Min5DataQueryReq,m_pConnector->m_pConnection,*pMinDataQueryReq,nRequestID));

	return 0;
}

/*15���߲�ѯ����*/
int CBCESQuotApiImp::Min15DataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::Min15DataQueryReq,m_pConnector->m_pConnection,*pMinDataQueryReq,nRequestID));

	return 0;
}

/*�ɽ���ϸ��ѯ����*/
int CBCESQuotApiImp::TradeDetailDataQueryReq(stBCESTradeDetailDataQueryReq *pTradeDetailDataQueryReq,UINT nRequestID)
{
	if(!m_pConnector || !m_pConnector->m_pConnection)
		return -1;

	m_io.post(boost::bind(&CServerConnection::TradeDetailDataQueryReq,m_pConnector->m_pConnection,*pTradeDetailDataQueryReq,nRequestID));

	return 0;
}
