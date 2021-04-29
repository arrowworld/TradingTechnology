#ifndef __BCESQUOTAPI_H__
#define __BCESQUOTAPI_H__

#include "APIFieldDefine.h"

#ifdef QUOTAPI_EXPORTS
#define QUOTAPI_LIB __declspec(dllexport)
#else
#ifdef WIN32
#define QUOTAPI_LIB __declspec(dllimport)
#else
#define QUOTAPI_LIB 
#endif
#endif

class CBCESQuotSpi	//�ص��ӿ�
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

	/*���鶩��Ӧ��*/
	virtual void OnQuotSubscribeRsp(stBCESQuotSubscribeRsp *pQuotSubscribeRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�����˶�Ӧ��*/
	virtual void OnQuotUnSubscribeRsp(stBCESQuotUnSubscribeRsp *pQuotUnSubscribeRsp,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*����֪ͨ*/
	virtual void OnQuotNty(stBCESQuot *pQuot){};

	/*���߲�ѯӦ��*/
	virtual void OnMinDataQueryRsp(stBCESMinData *pMinData,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*���߲�ѯӦ��*/
	virtual void OnDayDataQueryRsp(stBCESDayData *pDayData,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*5���߲�ѯӦ��*/
	virtual void OnMin5DataQueryRsp(stBCESMinData *pMinData,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*15���߲�ѯӦ��*/
	virtual void OnMin15DataQueryRsp(stBCESMinData *pMinData,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};

	/*�ɽ���ϸ��ѯӦ��*/
	virtual void OnTradeDetailDataQueryRsp(stBCESTradeDetailData *pTradeDetailData,stBCESRspInfo *pRspInfo,UINT nRequestID,UINT EndFlag){};
};

class QUOTAPI_LIB CBCESQuotApi
{
public:
	static CBCESQuotApi *CreateBCESQuotApi();	//����APIʵ��ʵ��
	virtual void Release()=0;	//�ͷ�APIʵ��ʵ��
	virtual void RegisterSpi(CBCESQuotSpi* pSpi)=0;	//ע��ص��ӿ�
	virtual int Run()=0;// ����ʵ��
	virtual int Stop()=0;// ֹͣʵ��
	virtual int SetServerAddress(const char* szServerAddress)=0;	// ע��ǰ�õ�ַ����ʽ��127.0.0.1:20004�����Զ�ε�����ע����ǰ�õ�ַ
	virtual const char* GetErrorMessage(int ErrorNo)=0;	// ��ȡ�����Ŷ�Ӧ��������Ϣ

public:
	/*��¼����*/
	virtual int LoginReq(stBCESLoginReq *pLoginReq,UINT nRequestID)=0;

	/*�ǳ�����*/
	virtual int LogoutReq(stBCESLogoutReq *pLogoutReq,UINT nRequestID)=0;

	/*���鶩������*/
	virtual int QuotSubscribeReq(stBCESQuotSubscribeReq *pQuotSubscribeReq,UINT nRequestID)=0;

	/*�����˶�����*/
	virtual int QuotUnSubscribeReq(stBCESQuotUnSubscribeReq *pQuotUnSubscribeReq,UINT nRequestID)=0;

	/*���߲�ѯ����*/
	virtual int MinDataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID)=0;

	/*���߲�ѯ����*/
	virtual int DayDataQueryReq(stBCESDayDataQueryReq *pDayDataQueryReq,UINT nRequestID)=0;

	/*5���߲�ѯ����*/
	virtual int Min5DataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID)=0;

	/*15���߲�ѯ����*/
	virtual int Min15DataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID)=0;

	/*�ɽ���ϸ��ѯ����*/
	virtual int TradeDetailDataQueryReq(stBCESTradeDetailDataQueryReq *pTradeDetailDataQueryReq,UINT nRequestID)=0;

protected:
	virtual ~CBCESQuotApi();	//��������
};

#endif /* __BCESQUOTAPI_H__ */
