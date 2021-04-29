#ifndef __BCESTRADEAPIIMP_H__
#define __BCESTRADEAPIIMP_H__

#include "os.h"
#include <string>
#include <vector>
#include <map>
#include "BCESPackage.h"
#include "ServerConnector.h"
#include "BCESQuotApi.h"
//#include "applog.h"

//extern LOGFP* lp;

#pragma warning(disable : 4996)
#pragma warning(disable : 4267)

class CServerConnector;
class CServerConnection;
class CBCESQuotApiImp:public CBCESQuotApi
{
public:
	CBCESQuotApiImp();	//����APIʵ��ʵ��
	~CBCESQuotApiImp();	//��������

public:
	void Release();	//�ͷ�APIʵ��ʵ��
	void RegisterSpi(CBCESQuotSpi* pSpi);
	int SetServerAddress(const char* szServerAddress);
	int Run();
	int Stop();
	const char* GetErrorMessage(int ErrorNo);

	/*��¼����*/
	int LoginReq(stBCESLoginReq *pLoginReq,UINT nRequestID);

	/*�ǳ�����*/
	int LogoutReq(stBCESLogoutReq *pLogoutReq,UINT nRequestID);


	/*���鶩������*/
	int QuotSubscribeReq(stBCESQuotSubscribeReq *pQuotSubscribeReq,UINT nRequestID);

	/*�����˶�����*/
	int QuotUnSubscribeReq(stBCESQuotUnSubscribeReq *pQuotUnSubscribeReq,UINT nRequestID);

	/*���߲�ѯ����*/
	int MinDataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID);

	/*���߲�ѯ����*/
	int DayDataQueryReq(stBCESDayDataQueryReq *pDayDataQueryReq,UINT nRequestID);

	/*5���߲�ѯ����*/
	int Min5DataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID);

	/*15���߲�ѯ����*/
	int Min15DataQueryReq(stBCESMinDataQueryReq *pMinDataQueryReq,UINT nRequestID);

	/*�ɽ���ϸ��ѯ����*/
	int TradeDetailDataQueryReq(stBCESTradeDetailDataQueryReq *pTradeDetailDataQueryReq,UINT nRequestID);
public:
	boost::asio::io_service m_io;
	CServerConnector* m_pConnector;
	char m_servaddr[100];
	CBCESQuotSpi* m_pSpi;
	BCESFieldTypeDate m_TradeDate;
};


#endif /* __BCESTRADEAPIIMP_H__ */
