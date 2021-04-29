#ifndef __BCESTRADEAPI_H__
#define __BCESTRADEAPI_H__

#include "APIFieldDefine.h"

#ifdef TRADEAPI_EXPORTS
#define TRADEAPI_LIB __declspec(dllexport)
#else
#ifdef WIN32
#define TRADEAPI_LIB __declspec(dllimport)
#else
#define TRADEAPI_LIB 
#endif
#endif

class CBCESTradeSpi	//�ص��ӿ�
{
 public:
	//���ӽ���֪ͨ
	/* ˵����
		1. ������Ϊϵͳ���ӣ�����û���κ��û���¼����������Ȼ��ά������״̬
	*/
	virtual void OnConnected(){};

	//���ӶϿ�֪ͨ���û����账��API���Զ�����
	/* ˵����
		1. ���ӶϿ��������ڴ������ϵ�¼���û�����������״̬���������Ӻ����Ҫ���·��͵�¼����
	*/
	virtual void OnDisconnected(){};

	/*��¼Ӧ��*/
	virtual void OnLoginRsp(stBCESLoginRsp *pLoginRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ǳ�Ӧ��*/
	virtual void OnLogoutRsp(stBCESLogoutRsp *pLogoutRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�޸�����Ӧ��*/
	virtual void OnChangePasswordRsp(stBCESChangePasswordRsp *pChangePasswordRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*����¼��Ӧ��*/
	virtual void OnOrderInsertRsp(stBCESInputOrder *pInputOrder,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*����֪ͨ*/
	virtual void OnOrderNty(stBCESOrder *pOrder){};

	/*����Ӧ��*/
	virtual void OnOrderCancelRsp(stBCESOrderCancelRsp *pOrderCancelRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�г�״̬֪ͨ*/
	virtual void OnMarketStatusNty(stBCESMarketStatusNty *pMarketStatusNty){};

	/*�ɽ�֪ͨ*/
	virtual void OnTradeNty(stBCESTrade *pTrade){};

	/*�����ѯӦ��*/
	virtual void OnQuotQueryRsp(stBCESQuot *pQuot,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*������ѯӦ��*/
	virtual void OnOrderQueryRsp(stBCESOrder *pOrder,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ɽ���ѯӦ��*/
	virtual void OnTradeQueryRsp(stBCESTrade *pTrade,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ֲֲ�ѯӦ��*/
	virtual void OnPosiQueryRsp(stBCESPosi *pPosi,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ʽ��ѯӦ��*/
	virtual void OnFundQueryRsp(stBCESFund *pFund,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*��Լ��ѯӦ��*/
	virtual void OnInstrumentQueryRsp(stBCESInstrument *pInstrument,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ֲ���ϸ��ѯӦ��*/
	virtual void OnPosiDetailQueryRsp(stBCESPosiDetail *pPosiDetail,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*ֹӮֹ������Ӧ��*/
	virtual void OnProfitLossStopSetRsp(stBCESProfitLossStopSetRsp *pProfitLossStopSetRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ֲ���ϸ֪ͨ*/
	virtual void OnPosiDetailNty(stBCESPosiDetail *pPosiDetail){};

	/*�ʽ�֪ͨ*/
	virtual void OnFundNty(stBCESFund *pFund){};

	/*�ֲ�֪ͨ*/
	virtual void OnPosiNty(stBCESPosi *pPosi){};

	/*�����޸�Ӧ��*/
	virtual void OnOrderModifyRsp(stBCESInputOrder *pInputOrder,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�����ѯӦ��*/
	virtual void OnBulletinQueryRsp(stBCESBulletin *pBulletin,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*֪ͨ��ѯӦ��*/
	virtual void OnNoticeQueryRsp(stBCESNotice *pNotice,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*����֪ͨ*/
	virtual void OnBulletinNty(stBCESBulletin *pBulletin){};

	/*��Ϣ֪ͨ*/
	virtual void OnNoticeNty(stBCESNotice *pNotice){};

	/*���ӳ��������Ӧ��*/
	virtual void OnElectronicFundIORsp(stBCESElectronicFundIORsp *pElectronicFundIORsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*���ӳ����֪ͨ*/
	virtual void OnElectronicFundIONty(stBCESElectronicFundIONty *pElectronicFundIONty){};

	/*�������ϸ��ѯӦ��*/
	virtual void OnFundIODetailQueryRsp(stBCESFundIODetail *pFundIODetail,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�����ѯӦ��*/
	virtual void OnReportQueryRsp(stBCESReport *pReport,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*��ʷ������ѯӦ��*/
	virtual void OnHisOrderQueryRsp(stBCESOrder *pOrder,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*��ʷ�ɽ���ѯӦ��*/
	virtual void OnHisTradeQueryRsp(stBCESTrade *pTrade,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*��ʷ�����ѯӦ��*/
	virtual void OnHisBulletinQueryRsp(stBCESBulletin *pBulletin,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*֪ͨ��ѯӦ��*/
	virtual void OnHisNoticeQueryRsp(stBCESNotice *pNotice,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*ǩԼӦ��*/
	virtual void OnAccountBindRsp(stBCESAccountBindRsp *pAccountBindRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*ǩԼ��Ϣ��ѯӦ��*/
	virtual void OnAccountBindQueryRsp(stBCESAccountBind *pAccountBind,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ʽ��ѯӦ��*/
	virtual void OnHisFundQueryRsp(stBCESFund *pFund,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ֲ���ϸ��ѯӦ��*/
	virtual void OnHisPosiDetailQueryRsp(stBCESPosiDetail *pPosiDetail,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*ǩԼ֪ͨ*/
	virtual void OnAccountBindNty(stBCESAccountBind *pAccountBind){};
};

class TRADEAPI_LIB CBCESTradeApi
{
public:
	static CBCESTradeApi *CreateBCESTradeApi();	//����APIʵ��ʵ��
	virtual void Release()=0;	//�ͷ�APIʵ��ʵ��
	virtual void RegisterSpi(CBCESTradeSpi* pSpi)=0;	//ע��ص��ӿ�
	virtual int Run()=0;// ����ʵ��
	virtual int Stop()=0;// ֹͣʵ��
	virtual int SetServerAddress(const char* szServerAddress)=0;	// ע��ǰ�õ�ַ����ʽ��127.0.0.1:20002�����Զ�ε�����ע����ǰ�õ�ַ
	virtual const char* GetErrorMessage(int ErrorNo)=0;	// ��ȡ�����Ŷ�Ӧ��������Ϣ

public:
	/*��¼����*/
	virtual int LoginReq(stBCESLoginReq *pLoginReq,UINT nRequestID)=0;

	/*�ǳ�����*/
	virtual int LogoutReq(stBCESLogoutReq *pLogoutReq,UINT nRequestID)=0;

	/* ����������Ϣ */
	/* ˵����
		1. ��¼�ɹ�����Ե��ô˺�������˽�����������ر����ɽ��ر��ȸ�����Ϣ������������Ϣ���г�״̬������ȹ�����Ϣ��
		2. nPrivateResumeMethodΪ˽�������ķ�ʽ�������ֶ��ķ�ʽ������ʼ�㶩�ģ��Ӷϵ㶩�ģ������µ㶩�ģ��������Ҫ����˽����������0���ɡ�
		3. nPublicResumeMethodΪ���������ķ�ʽ�������ֶ��ķ�ʽ������ʼ�㶩�ģ��Ӷϵ㶩�ģ������µ㶩�ģ��������Ҫ���Ĺ�����������0���ɡ�
		4. ����Ƕ�����������ٴζ��ģ������ָ��nMethodΪBCESMacroFlowResumeMethodResume��
		5. ���ķ�ʽ��
			����ʼ�㶩�ģ�BCESMacroFlowResumeMethodRestart
			�Ӷϵ㶩�ģ�BCESMacroFlowResumeMethodResume
			�����µ㶩�ģ�BCESMacroFlowResumeMethodQuick
	*/
	virtual int FlowSubscribeReq(UINT nPrivateResumeMethod,UINT nPublicResumeMethod)=0;

	/*�޸���������*/
	virtual int ChangePasswordReq(stBCESChangePasswordReq *pChangePasswordReq,UINT nRequestID)=0;

	/*����¼������*/
	virtual int OrderInsertReq(stBCESInputOrder *pInputOrder,UINT nRequestID)=0;

	/*��������*/
	virtual int OrderCancelReq(stBCESOrderCancelReq *pOrderCancelReq,UINT nRequestID)=0;

	/*�����ѯ����*/
	virtual int QuotQueryReq(stBCESQuotQueryReq *pQuotQueryReq,UINT nRequestID)=0;

	/*������ѯ����*/
	virtual int OrderQueryReq(stBCESOrderQueryReq *pOrderQueryReq,UINT nRequestID)=0;

	/*�ɽ���ѯ����*/
	virtual int TradeQueryReq(stBCESTradeQueryReq *pTradeQueryReq,UINT nRequestID)=0;

	/*�ֲֲ�ѯ����*/
	virtual int PosiQueryReq(stBCESPosiQueryReq *pPosiQueryReq,UINT nRequestID)=0;

	/*�ʽ��ѯ����*/
	virtual int FundQueryReq(stBCESFundQueryReq *pFundQueryReq,UINT nRequestID)=0;

	/*��Լ��ѯ����*/
	virtual int InstrumentQueryReq(stBCESInstrumentQueryReq *pInstrumentQueryReq,UINT nRequestID)=0;

	/*�ֲ���ϸ��ѯ����*/
	virtual int PosiDetailQueryReq(stBCESPosiDetailQueryReq *pPosiDetailQueryReq,UINT nRequestID)=0;

	/*ֹӮֹ����������*/
	virtual int ProfitLossStopSetReq(stBCESProfitLossStopSetReq *pProfitLossStopSetReq,UINT nRequestID)=0;

	/*�����޸�����*/
	virtual int OrderModifyReq(stBCESInputOrder *pInputOrder,UINT nRequestID)=0;

	/*�����ѯ����*/
	virtual int BulletinQueryReq(stBCESBulletinQueryReq *pBulletinQueryReq,UINT nRequestID)=0;

	/*֪ͨ��ѯ����*/
	virtual int NoticeQueryReq(stBCESNoticeQueryReq *pNoticeQueryReq,UINT nRequestID)=0;

	/*���ӳ��������*/
	virtual int ElectronicFundIOReq(stBCESElectronicFundIOReq *pElectronicFundIOReq,UINT nRequestID)=0;

	/*�������ϸ��ѯ����*/
	virtual int FundIODetailQueryReq(stBCESFundIODetailQueryReq *pFundIODetailQueryReq,UINT nRequestID)=0;

	/*�����ѯ����*/
	virtual int ReportQueryReq(stBCESReportQueryReq *pReportQueryReq,UINT nRequestID)=0;

	/*��ʷ������ѯ����*/
	virtual int HisOrderQueryReq(stBCESHisOrderQueryReq *pHisOrderQueryReq,UINT nRequestID)=0;

	/*��ʷ�ɽ���ѯ����*/
	virtual int HisTradeQueryReq(stBCESHisTradeQueryReq *pHisTradeQueryReq,UINT nRequestID)=0;

	/*��ʷ�����ѯ����*/
	virtual int HisBulletinQueryReq(stBCESHisBulletinQueryReq *pHisBulletinQueryReq,UINT nRequestID)=0;

	/*��ʷ֪ͨ��ѯ����*/
	virtual int HisNoticeQueryReq(stBCESHisNoticeQueryReq *pHisNoticeQueryReq,UINT nRequestID)=0;

	/*ǩԼ����*/
	virtual int AccountBindReq(stBCESAccountBindReq *pAccountBindReq,UINT nRequestID)=0;

	/*ǩԼ��Ϣ��ѯ����*/
	virtual int AccountBindQueryReq(stBCESAccountBindQueryReq *pAccountBindQueryReq,UINT nRequestID)=0;

	/*�ʽ��ѯ����*/
	virtual int HisFundQueryReq(stBCESHisFundQueryReq *pHisFundQueryReq,UINT nRequestID)=0;

	/*�ֲ���ϸ��ѯ����*/
	virtual int HisPosiDetailQueryReq(stBCESHisPosiDetailQueryReq *pHisPosiDetailQueryReq,UINT nRequestID)=0;

protected:
	virtual ~CBCESTradeApi();	//��������
};

#endif /* __BCESTRADEAPI_H__ */
