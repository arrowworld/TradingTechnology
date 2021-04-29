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
#include "BCESQuotApiImp.h"
#include <vector>

using boost::asio::ip::tcp;

class CBCESQuotApiImp;
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


	/*���鶩������*/
	int QuotSubscribeReq(stBCESQuotSubscribeReq& stQuotSubscribeReq,UINT nRequestID);

	/*�����˶�����*/
	int QuotUnSubscribeReq(stBCESQuotUnSubscribeReq& stQuotUnSubscribeReq,UINT nRequestID);

	/*���߲�ѯ����*/
	int MinDataQueryReq(stBCESMinDataQueryReq& stMinDataQueryReq,UINT nRequestID);

	/*���߲�ѯ����*/
	int DayDataQueryReq(stBCESDayDataQueryReq& stDayDataQueryReq,UINT nRequestID);

	/*5���߲�ѯ����*/
	int Min5DataQueryReq(stBCESMinDataQueryReq& stMinDataQueryReq,UINT nRequestID);

	/*15���߲�ѯ����*/
	int Min15DataQueryReq(stBCESMinDataQueryReq& stMinDataQueryReq,UINT nRequestID);

	/*�ɽ���ϸ��ѯ����*/
	int TradeDetailDataQueryReq(stBCESTradeDetailDataQueryReq& stTradeDetailDataQueryReq,UINT nRequestID);

	/* Ӧ�� */

	/*��¼Ӧ��*/
	int HandleLoginRsp(CAPIPackage& Package);

	/*�ǳ�Ӧ��*/
	int HandleLogoutRsp(CAPIPackage& Package);


	/*���鶩��Ӧ��*/
	int HandleQuotSubscribeRsp(CAPIPackage& Package);

	/*�����˶�Ӧ��*/
	int HandleQuotUnSubscribeRsp(CAPIPackage& Package);

	/*���߲�ѯӦ��*/
	int HandleMinDataQueryRsp(CAPIPackage& Package);

	/*���߲�ѯӦ��*/
	int HandleDayDataQueryRsp(CAPIPackage& Package);

	/*5���߲�ѯӦ��*/
	int HandleMin5DataQueryRsp(CAPIPackage& Package);

	/*15���߲�ѯӦ��*/
	int HandleMin15DataQueryRsp(CAPIPackage& Package);

	/*�ɽ���ϸ��ѯӦ��*/
	int HandleTradeDetailDataQueryRsp(CAPIPackage& Package);

	/* ֪ͨ */

	/*����֪ͨ*/
	int HandleQuotNty(CAPIPackage& Package);

	boost::asio::io_service& m_io;
	boost::asio::deadline_timer m_recvtimer;
	boost::asio::deadline_timer m_sendtimer;
	unsigned int m_nTcpSndSiz;
	unsigned int m_nTcpRcvSiz;
	CServerConnector* m_pServerConnector;
	unsigned short m_nTimeout;

	CBCESQuotApiImp* m_pApi;
	boost::shared_ptr<CServerConnection> m_pConnection;
};

#endif /* __SERVER_CONNECTION__ */
