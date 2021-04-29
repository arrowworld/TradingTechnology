#ifndef __SERVER_CONNECTION__
#define __SERVER_CONNECTION__

#include "os.h"
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/function.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "TcpConnection.h"
#include "ServerConnector.h"
#include "BCESPackage.h"
#include "APIPackage.h"
#include "APIFieldDefine.h"
#include "BCESTradeApiImp.h"
#include <vector>

using boost::asio::ip::tcp;

class CBCESTradeApiImp;
class CServerConnector;
class CServerConnection:public CTcpConnection
{
public:
	CServerConnection(boost::asio::io_service& io_service,unsigned int nTcpSndSiz,unsigned int nTcpRcvSiz,unsigned short nTimeout,CServerConnector* pServerConnector);
	~CServerConnection();


	char* m_recvbuf;
	unsigned int m_recvlen;
	char* m_sendbuf;

	// inherite from CTcpConnection
	void HandleDisconnected(const char* e);
	int HandleInput(const char* buf,unsigned int len);
	void HandleConnected(boost::shared_ptr<CServerConnection> pConnection);

	// Handle Server Messages
	void HandleHeartbeatRecvTimeout(const boost::system::error_code& error,boost::shared_ptr<CServerConnection> pConnection); // Heartbeat Check
	void HandleHeartbeatSendTimeout(const boost::system::error_code& error,boost::shared_ptr<CServerConnection> pConnection); // Heartbeat Check
	int HandleMessage(const char* msgbuf,unsigned int msglen);
	int SendMessage(const char* msgbuf,unsigned int msglen);
	void Disconnect(const char* e);
	int SendHeartbeatMessage();

	// Handle Package
	int HandlePackage(CAPIPackage& Package);
	int SendPackage(CAPIPackage& Package);

	/* ���� */

	/*��¼����*/
	int LoginReq(stBCESLoginReq& stLoginReq,UINT nRequestID);

	/*�ǳ�����*/
	int LogoutReq(stBCESLogoutReq& stLogoutReq,UINT nRequestID);

	/* ����������Ϣ */
	int FlowSubscribeReq(UINT nPrivateResumeMethod,UINT nPublicResumeMethod);

	/*�޸���������*/
	int ChangePasswordReq(stBCESChangePasswordReq& stChangePasswordReq,UINT nRequestID);

	/*����¼������*/
	int OrderInsertReq(stBCESInputOrder& stInputOrder,UINT nRequestID);

	/*��������*/
	int OrderCancelReq(stBCESOrderCancelReq& stOrderCancelReq,UINT nRequestID);

	/*�����ѯ����*/
	int QuotQueryReq(stBCESQuotQueryReq& stQuotQueryReq,UINT nRequestID);

	/*������ѯ����*/
	int OrderQueryReq(stBCESOrderQueryReq& stOrderQueryReq,UINT nRequestID);

	/*�ɽ���ѯ����*/
	int TradeQueryReq(stBCESTradeQueryReq& stTradeQueryReq,UINT nRequestID);

	/*�ֲֲ�ѯ����*/
	int PosiQueryReq(stBCESPosiQueryReq& stPosiQueryReq,UINT nRequestID);

	/*�ʽ��ѯ����*/
	int FundQueryReq(stBCESFundQueryReq& stFundQueryReq,UINT nRequestID);

	/*��Լ��ѯ����*/
	int InstrumentQueryReq(stBCESInstrumentQueryReq& stInstrumentQueryReq,UINT nRequestID);

	/*�ֲ���ϸ��ѯ����*/
	int PosiDetailQueryReq(stBCESPosiDetailQueryReq& stPosiDetailQueryReq,UINT nRequestID);

	/*ֹӮֹ����������*/
	int ProfitLossStopSetReq(stBCESProfitLossStopSetReq& stProfitLossStopSetReq,UINT nRequestID);

	/*�����޸�����*/
	int OrderModifyReq(stBCESInputOrder& stInputOrder,UINT nRequestID);

	/*�����ѯ����*/
	int BulletinQueryReq(stBCESBulletinQueryReq& stBulletinQueryReq,UINT nRequestID);

	/*֪ͨ��ѯ����*/
	int NoticeQueryReq(stBCESNoticeQueryReq& stNoticeQueryReq,UINT nRequestID);

	/*���ӳ��������*/
	int ElectronicFundIOReq(stBCESElectronicFundIOReq& stElectronicFundIOReq,UINT nRequestID);

	/*�������ϸ��ѯ����*/
	int FundIODetailQueryReq(stBCESFundIODetailQueryReq& stFundIODetailQueryReq,UINT nRequestID);

	/*�����ѯ����*/
	int ReportQueryReq(stBCESReportQueryReq& stReportQueryReq,UINT nRequestID);

	/*��ʷ������ѯ����*/
	int HisOrderQueryReq(stBCESHisOrderQueryReq& stHisOrderQueryReq,UINT nRequestID);

	/*��ʷ�ɽ���ѯ����*/
	int HisTradeQueryReq(stBCESHisTradeQueryReq& stHisTradeQueryReq,UINT nRequestID);

	/*��ʷ�����ѯ����*/
	int HisBulletinQueryReq(stBCESHisBulletinQueryReq& stHisBulletinQueryReq,UINT nRequestID);

	/*��ʷ֪ͨ��ѯ����*/
	int HisNoticeQueryReq(stBCESHisNoticeQueryReq& stHisNoticeQueryReq,UINT nRequestID);

	/*ǩԼ����*/
	int AccountBindReq(stBCESAccountBindReq& stAccountBindReq,UINT nRequestID);

	/*ǩԼ��Ϣ��ѯ����*/
	int AccountBindQueryReq(stBCESAccountBindQueryReq& stAccountBindQueryReq,UINT nRequestID);

	/*�ʽ��ѯ����*/
	int HisFundQueryReq(stBCESHisFundQueryReq& stHisFundQueryReq,UINT nRequestID);

	/*�ֲ���ϸ��ѯ����*/
	int HisPosiDetailQueryReq(stBCESHisPosiDetailQueryReq& stHisPosiDetailQueryReq,UINT nRequestID);

	/* Ӧ�� */

	/*��¼Ӧ��*/
	int HandleLoginRsp(CAPIPackage& Package);

	/*�ǳ�Ӧ��*/
	int HandleLogoutRsp(CAPIPackage& Package);

	/*������Ӧ��*/
	int HandleFlowSubscribeRsp(CAPIPackage& Package);

	/*�޸�����Ӧ��*/
	int HandleChangePasswordRsp(CAPIPackage& Package);

	/*����¼��Ӧ��*/
	int HandleOrderInsertRsp(CAPIPackage& Package);

	/*����Ӧ��*/
	int HandleOrderCancelRsp(CAPIPackage& Package);

	/*�����ѯӦ��*/
	int HandleQuotQueryRsp(CAPIPackage& Package);

	/*������ѯӦ��*/
	int HandleOrderQueryRsp(CAPIPackage& Package);

	/*�ɽ���ѯӦ��*/
	int HandleTradeQueryRsp(CAPIPackage& Package);

	/*�ֲֲ�ѯӦ��*/
	int HandlePosiQueryRsp(CAPIPackage& Package);

	/*�ʽ��ѯӦ��*/
	int HandleFundQueryRsp(CAPIPackage& Package);

	/*��Լ��ѯӦ��*/
	int HandleInstrumentQueryRsp(CAPIPackage& Package);

	/*�ֲ���ϸ��ѯӦ��*/
	int HandlePosiDetailQueryRsp(CAPIPackage& Package);

	/*ֹӮֹ������Ӧ��*/
	int HandleProfitLossStopSetRsp(CAPIPackage& Package);

	/*�����޸�Ӧ��*/
	int HandleOrderModifyRsp(CAPIPackage& Package);

	/*�����ѯӦ��*/
	int HandleBulletinQueryRsp(CAPIPackage& Package);

	/*֪ͨ��ѯӦ��*/
	int HandleNoticeQueryRsp(CAPIPackage& Package);

	/*���ӳ��������Ӧ��*/
	int HandleElectronicFundIORsp(CAPIPackage& Package);

	/*�������ϸ��ѯӦ��*/
	int HandleFundIODetailQueryRsp(CAPIPackage& Package);

	/*�����ѯӦ��*/
	int HandleReportQueryRsp(CAPIPackage& Package);

	/*��ʷ������ѯӦ��*/
	int HandleHisOrderQueryRsp(CAPIPackage& Package);

	/*��ʷ�ɽ���ѯӦ��*/
	int HandleHisTradeQueryRsp(CAPIPackage& Package);

	/*��ʷ�����ѯӦ��*/
	int HandleHisBulletinQueryRsp(CAPIPackage& Package);

	/*֪ͨ��ѯӦ��*/
	int HandleHisNoticeQueryRsp(CAPIPackage& Package);

	/*ǩԼӦ��*/
	int HandleAccountBindRsp(CAPIPackage& Package);

	/*ǩԼ��Ϣ��ѯӦ��*/
	int HandleAccountBindQueryRsp(CAPIPackage& Package);

	/*�ʽ��ѯӦ��*/
	int HandleHisFundQueryRsp(CAPIPackage& Package);

	/*�ֲ���ϸ��ѯӦ��*/
	int HandleHisPosiDetailQueryRsp(CAPIPackage& Package);

	/* ֪ͨ */
	int HandlePrivateNty(CAPIPackage& Package);
	int HandlePublicNty(CAPIPackage& Package);

	/*����֪ͨ*/
	int HandleOrderNty(CAPIPackage& Package);

	/*�г�״̬֪ͨ*/
	int HandleMarketStatusNty(CAPIPackage& Package);

	/*�ɽ�֪ͨ*/
	int HandleTradeNty(CAPIPackage& Package);

	/*�ֲ���ϸ֪ͨ*/
	int HandlePosiDetailNty(CAPIPackage& Package);

	/*�ʽ�֪ͨ*/
	int HandleFundNty(CAPIPackage& Package);

	/*�ֲ�֪ͨ*/
	int HandlePosiNty(CAPIPackage& Package);

	/*����֪ͨ*/
	int HandleBulletinNty(CAPIPackage& Package);

	/*��Ϣ֪ͨ*/
	int HandleNoticeNty(CAPIPackage& Package);

	/*���ӳ����֪ͨ*/
	int HandleElectronicFundIONty(CAPIPackage& Package);

	/*ǩԼ֪ͨ*/
	int HandleAccountBindNty(CAPIPackage& Package);

	boost::asio::io_service& m_io;
	boost::asio::deadline_timer m_recvtimer;
	boost::asio::deadline_timer m_sendtimer;
	unsigned int m_sessionid;
	unsigned int m_nTcpSndSiz;
	unsigned int m_nTcpRcvSiz;
	CServerConnector* m_pServerConnector;
	unsigned short m_nTimeout;

	CBCESTradeApiImp* m_pApi;
	boost::shared_ptr<CServerConnection> m_pConnection;
};

#endif /* __SERVER_CONNECTION__ */
