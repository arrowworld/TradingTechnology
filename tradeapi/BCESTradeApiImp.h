#ifndef __BCESTRADEAPIIMP_H__
#define __BCESTRADEAPIIMP_H__

#include "os.h"
#include <string>
#include <vector>
#include <map>
#include "BCESPackage.h"
#include "ServerConnector.h"
#include "BCESTradeApi.h"
//#include "applog.h"

//extern LOGFP* lp;

#pragma warning(disable : 4996)
#pragma warning(disable : 4267)

class CServerConnector;
class CServerConnection;
class CBCESTradeApiImp:public CBCESTradeApi
{
public:
	CBCESTradeApiImp();	//����APIʵ��ʵ��
	~CBCESTradeApiImp();	//��������

public:
	void Release();	//�ͷ�APIʵ��ʵ��
	void RegisterSpi(CBCESTradeSpi* pSpi);
	int SetServerAddress(const char* szServerAddress);
	int Run();
	int Stop();
	const char* GetErrorMessage(int ErrorNo);

	/*��¼����*/
	int LoginReq(stBCESLoginReq *pLoginReq,UINT nRequestID);

	/*�ǳ�����*/
	int LogoutReq(stBCESLogoutReq *pLogoutReq,UINT nRequestID);

	/* ����������Ϣ */
	int FlowSubscribeReq(UINT nPrivateResumeMethod,UINT nPublicResumeMethod);

	/*�޸���������*/
	int ChangePasswordReq(stBCESChangePasswordReq *pChangePasswordReq,UINT nRequestID);

	/*����¼������*/
	int OrderInsertReq(stBCESInputOrder *pInputOrder,UINT nRequestID);

	/*��������*/
	int OrderCancelReq(stBCESOrderCancelReq *pOrderCancelReq,UINT nRequestID);

	/*�����ѯ����*/
	int QuotQueryReq(stBCESQuotQueryReq *pQuotQueryReq,UINT nRequestID);

	/*������ѯ����*/
	int OrderQueryReq(stBCESOrderQueryReq *pOrderQueryReq,UINT nRequestID);

	/*�ɽ���ѯ����*/
	int TradeQueryReq(stBCESTradeQueryReq *pTradeQueryReq,UINT nRequestID);

	/*�ֲֲ�ѯ����*/
	int PosiQueryReq(stBCESPosiQueryReq *pPosiQueryReq,UINT nRequestID);

	/*�ʽ��ѯ����*/
	int FundQueryReq(stBCESFundQueryReq *pFundQueryReq,UINT nRequestID);

	/*��Լ��ѯ����*/
	int InstrumentQueryReq(stBCESInstrumentQueryReq *pInstrumentQueryReq,UINT nRequestID);

	/*�ֲ���ϸ��ѯ����*/
	int PosiDetailQueryReq(stBCESPosiDetailQueryReq *pPosiDetailQueryReq,UINT nRequestID);

	/*ֹӮֹ����������*/
	int ProfitLossStopSetReq(stBCESProfitLossStopSetReq *pProfitLossStopSetReq,UINT nRequestID);

	/*�����޸�����*/
	int OrderModifyReq(stBCESInputOrder *pInputOrder,UINT nRequestID);

	/*�����ѯ����*/
	int BulletinQueryReq(stBCESBulletinQueryReq *pBulletinQueryReq,UINT nRequestID);

	/*֪ͨ��ѯ����*/
	int NoticeQueryReq(stBCESNoticeQueryReq *pNoticeQueryReq,UINT nRequestID);

	/*���ӳ��������*/
	int ElectronicFundIOReq(stBCESElectronicFundIOReq *pElectronicFundIOReq,UINT nRequestID);

	/*�������ϸ��ѯ����*/
	int FundIODetailQueryReq(stBCESFundIODetailQueryReq *pFundIODetailQueryReq,UINT nRequestID);

	/*�����ѯ����*/
	int ReportQueryReq(stBCESReportQueryReq *pReportQueryReq,UINT nRequestID);

	/*��ʷ������ѯ����*/
	int HisOrderQueryReq(stBCESHisOrderQueryReq *pHisOrderQueryReq,UINT nRequestID);

	/*��ʷ�ɽ���ѯ����*/
	int HisTradeQueryReq(stBCESHisTradeQueryReq *pHisTradeQueryReq,UINT nRequestID);

	/*��ʷ�����ѯ����*/
	int HisBulletinQueryReq(stBCESHisBulletinQueryReq *pHisBulletinQueryReq,UINT nRequestID);

	/*��ʷ֪ͨ��ѯ����*/
	int HisNoticeQueryReq(stBCESHisNoticeQueryReq *pHisNoticeQueryReq,UINT nRequestID);

	/*ǩԼ����*/
	int AccountBindReq(stBCESAccountBindReq *pAccountBindReq,UINT nRequestID);

	/*ǩԼ��Ϣ��ѯ����*/
	int AccountBindQueryReq(stBCESAccountBindQueryReq *pAccountBindQueryReq,UINT nRequestID);

	/*�ʽ��ѯ����*/
	int HisFundQueryReq(stBCESHisFundQueryReq *pHisFundQueryReq,UINT nRequestID);

	/*�ֲ���ϸ��ѯ����*/
	int HisPosiDetailQueryReq(stBCESHisPosiDetailQueryReq *pHisPosiDetailQueryReq,UINT nRequestID);
public:
	boost::asio::io_service m_io;
	CServerConnector* m_pConnector;
	char m_servaddr[100];
	CBCESTradeSpi* m_pSpi;
	BCESFieldTypeDate m_TradeDate;
	UINT m_nPrivatePkgNo;
	UINT m_nPublicPkgNo;
};


#endif /* __BCESTRADEAPIIMP_H__ */
