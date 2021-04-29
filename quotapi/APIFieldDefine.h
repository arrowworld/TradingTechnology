#ifndef __API_FIELD_DEFINE_H__
#define __API_FIELD_DEFINE_H__

#include "BCESFieldTypeDefine.h"

/* API����ͷ */
struct stBCESApiHead
{
	BCESFieldTypeServiceNo ServiceNo;	/* ָ���� */
	BCESFieldTypeRequestID RequestID;	/* ������ */
	BCESFieldTypeEndFlag EndFlag;	/* ������� */
};

/* Ӧ����Ϣ�� */
struct stBCESRspInfo
{
	BCESFieldTypeRspNo RspNo;	/* Ӧ����� */
	BCESFieldTypeRspDesc RspDesc;	/* Ӧ������ */
};

/* ���������� */
struct stBCESFlowSubscribeReq
{
	BCESFieldTypeFlowID FlowID;	/* ����� */
	BCESFieldTypePkgNo PkgNo;	/* ������� */
};

/* ������Ӧ�� */
struct stBCESFlowSubscribeRsp
{
	BCESFieldTypeFlowID FlowID;	/* ����� */
	BCESFieldTypePkgNo PkgNo;	/* ������� */
};

/* ����ͷ */
struct stBCESHead
{
	BCESFieldTypeRequestID RequestID;	/* ������ */
	BCESFieldTypeEndFlag EndFlag;	/* ������� */
};

/* ���鶩������ */
struct stBCESQuotSubscribeReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* ���鶩��Ӧ�� */
struct stBCESQuotSubscribeRsp
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* �����˶����� */
struct stBCESQuotUnSubscribeReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* �����˶�Ӧ�� */
struct stBCESQuotUnSubscribeRsp
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* ���ݲ�����Ҫ */
struct stBCESDBOperateSummary
{
	BCESFieldTypeTableName TableName;	/* ���� */
	BCESFieldTypeTableOperation TableOperation;	/* ����� */
};

/* ��¼���� */
struct stBCESLoginReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypePassword InvestorPassword;	/* Ͷ�������� */
	BCESFieldTypeIP IP;	/* IP��ַ */
	BCESFieldTypeFlag ProductType;	/* ��Ʒ��� */
	BCESFieldTypeVersionNo ProductVersion;	/* ��Ʒ�汾�� */
};

/* ��¼Ӧ�� */
struct stBCESLoginRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
	BCESFieldTypeName SysName;	/* ϵͳ���� */
	BCESFieldTypeFlag SysMode;	/* ϵͳģʽ */
	BCESFieldTypeFlag PayServerType;	/* ֧���������� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
	BCESFieldTypeFlag InvestorAdviserFlag;	/* Ͷ���߹��ʱ�־ */
	BCESFieldTypeSessionID SessionID;	/* �Ự��� */
};

/* �ǳ����� */
struct stBCESLogoutReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �ǳ�Ӧ�� */
struct stBCESLogoutRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �޸��������� */
struct stBCESChangePasswordReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypePassword InvestorOldPassword;	/* Ͷ���߾����� */
	BCESFieldTypePassword InvestorNewPassword;	/* Ͷ���������� */
};

/* �޸�����Ӧ�� */
struct stBCESChangePasswordRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �����˻� */
struct stBCESAccount
{
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
};

/* ������ */
struct stBCESExchange
{
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ����¼�� */
struct stBCESInputOrder
{
	BCESFieldTypeOrderID OrderID;	/* ������ */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeFlag OCFlag;	/* ��ƽ��־ */
	BCESFieldTypeFlag PriceType;	/* �۸����� */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
	BCESFieldTypePoints FilledPoints;	/* �ɽ����� */
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
	BCESFieldTypeFlag ConditionType;	/* �������� */
	BCESFieldTypeFlag ConditionMethod;	/* �������� */
	BCESFieldTypePrice ConditionPrice;	/* �����۸� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeSessionID SessionID;	/* �Ự��� */
	BCESFieldTypeOrderRef OrderRef;	/* �������� */
	BCESFieldTypeDate ClosedTradeDate;	/* ƽ�ֽ������� */
	BCESFieldTypeOrderID ClosedOrderID;	/* ƽ�ֶ����� */
	BCESFieldTypeMatchID ClosedMatchID;	/* ƽ�ֳɽ��� */
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
};

/* ���� */
struct stBCESOrder
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeOrderID OrderID;	/* ������ */
	BCESFieldTypeDate OrderDate;	/* �������� */
	BCESFieldTypeTime OrderTime;	/* ����ʱ�� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeFlag OCFlag;	/* ��ƽ��־ */
	BCESFieldTypeFlag PriceType;	/* �۸����� */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypeQty QtyLeft;	/* ʣ������ */
	BCESFieldTypePrice AvgPrice;	/* �ɽ����� */
	BCESFieldTypeDate ModifyDate;	/* �޸����� */
	BCESFieldTypeTime ModifyTime;	/* �޸�ʱ�� */
	BCESFieldTypeFlag OrderStatus;	/* ����״̬ */
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
	BCESFieldTypePoints FilledPoints;	/* �ɽ����� */
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
	BCESFieldTypeAmount Margin;	/* ռ�ñ�֤�� */
	BCESFieldTypeAmount FrozenMargin;	/* ���ᱣ֤�� */
	BCESFieldTypeFlag ConditionType;	/* �������� */
	BCESFieldTypeFlag ConditionMethod;	/* �������� */
	BCESFieldTypePrice ConditionPrice;	/* �����۸� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeSessionID SessionID;	/* �Ự��� */
	BCESFieldTypeOrderRef OrderRef;	/* �������� */
	BCESFieldTypeDate ClosedTradeDate;	/* ƽ�ֽ������� */
	BCESFieldTypeOrderID ClosedOrderID;	/* ƽ�ֶ����� */
	BCESFieldTypeMatchID ClosedMatchID;	/* ƽ�ֳɽ��� */
	BCESFieldTypeOrderStatusDesc OrderStatusDesc;	/* ����״̬���� */
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
	BCESFieldTypeCTPFrontID CTPFrontID;	/* CTPǰ�ñ�� */
	BCESFieldTypeCTPSessionID CTPSessionID;	/* CTP�Ự��� */
	BCESFieldTypeCTPOrderRef CTPOrderRef;	/* CTP�������� */
	BCESFieldTypeOrderSysID OrderSysID;	/* ������������� */
};

/* �������� */
struct stBCESOrderCancelReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeOrderID OrderID;	/* ������ */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeSessionID SessionID;	/* �Ự��� */
	BCESFieldTypeOrderRef OrderRef;	/* �������� */
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
	BCESFieldTypeOrderSysID OrderSysID;	/* ������������� */
};

/* ����Ӧ�� */
struct stBCESOrderCancelRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeOrderID OrderID;	/* ������ */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeSessionID SessionID;	/* �Ự��� */
	BCESFieldTypeOrderRef OrderRef;	/* �������� */
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
	BCESFieldTypeOrderSysID OrderSysID;	/* ������������� */
};

/* �ɽ��� */
struct stBCESTrade
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeMatchID MatchID;	/* �ɽ��� */
	BCESFieldTypeOrderID OrderID;	/* ������ */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeFlag OCFlag;	/* ��ƽ��־ */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypeDate MatchDate;	/* �ɽ����� */
	BCESFieldTypeTime MatchTime;	/* �ɽ�ʱ�� */
	BCESFieldTypeRate FeeRate;	/* ������ */
	BCESFieldTypeAmount Margin;	/* ռ�ñ�֤�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeDate ClosedTradeDate;	/* ƽ�ֽ������� */
	BCESFieldTypeOrderID ClosedOrderID;	/* ƽ�ֶ����� */
	BCESFieldTypeMatchID ClosedMatchID;	/* ƽ�ֳɽ��� */
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
	BCESFieldTypeOrderSysID OrderSysID;	/* ������������� */
};

/* ���� */
struct stBCESQuot
{
	BCESFieldTypeMatchID MatchID;	/* �ɽ��� */
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ */
	BCESFieldTypePrice Price;	/* �ּ� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypePrice BidPrice;	/* ����� */
	BCESFieldTypeQty BidQty;	/* ������ */
	BCESFieldTypePrice AskPrice;	/* ������ */
	BCESFieldTypeQty AskQty;	/* ������ */
	BCESFieldTypePrice OpenPrice;	/* ���̼� */
	BCESFieldTypePrice HighestPrice;	/* ��߼� */
	BCESFieldTypePrice LowestPrice;	/* ��ͼ� */
	BCESFieldTypePrice HighLimit;	/* ��ͣ��� */
	BCESFieldTypePrice LowLimit;	/* ��ͣ��� */
	BCESFieldTypeQtyTotal OI;	/* �ֲ��� */
	BCESFieldTypePrice SettlePrice;	/* ����� */
	BCESFieldTypePrice PreClose;	/* �����̼� */
	BCESFieldTypePrice PreSettle;	/* ������ */
	BCESFieldTypeQtyTotal PreOI;	/* ��ֲ��� */
	BCESFieldTypeQtyTotal QtyTotal;	/* �ɽ��� */
	BCESFieldTypeAmount Amount;	/* �ɽ��� */
	BCESFieldTypeDate ModifyDate;	/* �������� */
	BCESFieldTypeTime ModifyTime;	/* ����ʱ�� */
	BCESFieldTypePrice BidPrice2;	/* �����2 */
	BCESFieldTypeQty BidQty2;	/* ������2 */
	BCESFieldTypePrice AskPrice2;	/* ������2 */
	BCESFieldTypeQty AskQty2;	/* ������2 */
	BCESFieldTypePrice BidPrice3;	/* �����3 */
	BCESFieldTypeQty BidQty3;	/* ������3 */
	BCESFieldTypePrice AskPrice3;	/* ������3 */
	BCESFieldTypeQty AskQty3;	/* ������3 */
	BCESFieldTypePrice BidPrice4;	/* �����4 */
	BCESFieldTypeQty BidQty4;	/* ������4 */
	BCESFieldTypePrice AskPrice4;	/* ������4 */
	BCESFieldTypeQty AskQty4;	/* ������4 */
	BCESFieldTypePrice BidPrice5;	/* �����5 */
	BCESFieldTypeQty BidQty5;	/* ������5 */
	BCESFieldTypePrice AskPrice5;	/* ������5 */
	BCESFieldTypeQty AskQty5;	/* ������5 */
	BCESFieldTypePrice BidPrice6;	/* �����6 */
	BCESFieldTypeQty BidQty6;	/* ������6 */
	BCESFieldTypePrice AskPrice6;	/* ������6 */
	BCESFieldTypeQty AskQty6;	/* ������6 */
	BCESFieldTypePrice BidPrice7;	/* �����7 */
	BCESFieldTypeQty BidQty7;	/* ������7 */
	BCESFieldTypePrice AskPrice7;	/* ������7 */
	BCESFieldTypeQty AskQty7;	/* ������7 */
	BCESFieldTypePrice BidPrice8;	/* �����8 */
	BCESFieldTypeQty BidQty8;	/* ������8 */
	BCESFieldTypePrice AskPrice8;	/* ������8 */
	BCESFieldTypeQty AskQty8;	/* ������8 */
	BCESFieldTypePrice BidPrice9;	/* �����9 */
	BCESFieldTypeQty BidQty9;	/* ������9 */
	BCESFieldTypePrice AskPrice9;	/* ������9 */
	BCESFieldTypeQty AskQty9;	/* ������9 */
	BCESFieldTypePrice BidPrice10;	/* �����10 */
	BCESFieldTypeQty BidQty10;	/* ������10 */
	BCESFieldTypePrice AskPrice10;	/* ������10 */
	BCESFieldTypeQty AskQty10;	/* ������10 */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ���� */
struct stBCESInternationalQuot
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ */
	BCESFieldTypePrice Price;	/* �ּ� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypePrice BidPrice;	/* ����� */
	BCESFieldTypeQty BidQty;	/* ������ */
	BCESFieldTypePrice AskPrice;	/* ������ */
	BCESFieldTypeQty AskQty;	/* ������ */
	BCESFieldTypePrice OpenPrice;	/* ���̼� */
	BCESFieldTypePrice HighestPrice;	/* ��߼� */
	BCESFieldTypePrice LowestPrice;	/* ��ͼ� */
	BCESFieldTypePrice HighLimit;	/* ��ͣ��� */
	BCESFieldTypePrice LowLimit;	/* ��ͣ��� */
	BCESFieldTypeQtyTotal OI;	/* �ֲ��� */
	BCESFieldTypePrice SettlePrice;	/* ����� */
	BCESFieldTypePrice PreClose;	/* �����̼� */
	BCESFieldTypePrice PreSettle;	/* ������ */
	BCESFieldTypeQtyTotal PreOI;	/* ��ֲ��� */
	BCESFieldTypeQtyTotal QtyTotal;	/* �ɽ��� */
	BCESFieldTypeAmount Amount;	/* �ɽ��� */
	BCESFieldTypeDate ModifyDate;	/* �������� */
	BCESFieldTypeTime ModifyTime;	/* ����ʱ�� */
	BCESFieldTypePrice BidPrice2;	/* �����2 */
	BCESFieldTypeQty BidQty2;	/* ������2 */
	BCESFieldTypePrice AskPrice2;	/* ������2 */
	BCESFieldTypeQty AskQty2;	/* ������2 */
	BCESFieldTypePrice BidPrice3;	/* �����3 */
	BCESFieldTypeQty BidQty3;	/* ������3 */
	BCESFieldTypePrice AskPrice3;	/* ������3 */
	BCESFieldTypeQty AskQty3;	/* ������3 */
	BCESFieldTypePrice BidPrice4;	/* �����4 */
	BCESFieldTypeQty BidQty4;	/* ������4 */
	BCESFieldTypePrice AskPrice4;	/* ������4 */
	BCESFieldTypeQty AskQty4;	/* ������4 */
	BCESFieldTypePrice BidPrice5;	/* �����5 */
	BCESFieldTypeQty BidQty5;	/* ������5 */
	BCESFieldTypePrice AskPrice5;	/* ������5 */
	BCESFieldTypeQty AskQty5;	/* ������5 */
	BCESFieldTypePrice BidPrice6;	/* �����6 */
	BCESFieldTypeQty BidQty6;	/* ������6 */
	BCESFieldTypePrice AskPrice6;	/* ������6 */
	BCESFieldTypeQty AskQty6;	/* ������6 */
	BCESFieldTypePrice BidPrice7;	/* �����7 */
	BCESFieldTypeQty BidQty7;	/* ������7 */
	BCESFieldTypePrice AskPrice7;	/* ������7 */
	BCESFieldTypeQty AskQty7;	/* ������7 */
	BCESFieldTypePrice BidPrice8;	/* �����8 */
	BCESFieldTypeQty BidQty8;	/* ������8 */
	BCESFieldTypePrice AskPrice8;	/* ������8 */
	BCESFieldTypeQty AskQty8;	/* ������8 */
	BCESFieldTypePrice BidPrice9;	/* �����9 */
	BCESFieldTypeQty BidQty9;	/* ������9 */
	BCESFieldTypePrice AskPrice9;	/* ������9 */
	BCESFieldTypeQty AskQty9;	/* ������9 */
	BCESFieldTypePrice BidPrice10;	/* �����10 */
	BCESFieldTypeQty BidQty10;	/* ������10 */
	BCESFieldTypePrice AskPrice10;	/* ������10 */
	BCESFieldTypeQty AskQty10;	/* ������10 */
	BCESFieldTypeGoodsName GoodsName;	/* Ʒ�ִ��� */
};

/* �����ѯ���� */
struct stBCESQuotQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ������ѯ���� */
struct stBCESOrderQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ɽ���ѯ���� */
struct stBCESTradeQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ֲֲ�ѯ */
struct stBCESPosiQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ֲ���ϸ��ѯ */
struct stBCESPosiDetailQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ��ʷ�ֲ���ϸ��ѯ */
struct stBCESHisPosiDetailQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ֲ� */
struct stBCESPosi
{
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeQty BuyQty;	/* ��ֲ��� */
	BCESFieldTypePrice BuyPrice;	/* ��ֲ־��� */
	BCESFieldTypeQty SellQty;	/* ���ֲ��� */
	BCESFieldTypePrice SellPrice;	/* ���ֲ־��� */
	BCESFieldTypeQty BuyQtyFrozen;	/* �򶳽�ֲ��� */
	BCESFieldTypeQty SellQtyFrozen;	/* ������ֲ��� */
	BCESFieldTypeQty PreBuyQty;	/* ����ֲ��� */
	BCESFieldTypeQty PreSellQty;	/* �����ֲ��� */
	BCESFieldTypeQty TodayBuyQty;	/* ����ֲ��� */
	BCESFieldTypeQty TodaySellQty;	/* �����ֲ��� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeQty TodayBuyQtyFrozen;	/* ���򶳽�ֲ��� */
	BCESFieldTypeQty TodaySellQtyFrozen;	/* ��������ֲ��� */
	BCESFieldTypeAmount ClosedPL;	/* ƽ��ӯ�� */
	BCESFieldTypeAmount FloatingPL;	/* ����ӯ�� */
	BCESFieldTypeAmount Margin;	/* ռ�ñ�֤�� */
	BCESFieldTypeAmount Fee;	/* ������ */
	BCESFieldTypeAmount FrozenMargin;	/* ���ᱣ֤�� */
	BCESFieldTypeAmount FeeFrozen;	/* ���������� */
};

/* �ֲ���ϸ */
struct stBCESPosiDetail
{
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
	BCESFieldTypeMatchID MatchID;	/* �ɽ��� */
	BCESFieldTypeOrderID OrderID;	/* ������ */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypeQty QtyLeft;	/* ʣ������ */
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
	BCESFieldTypeName AgentName;	/* ���������� */
	BCESFieldTypeAmount FloatingPL;	/* ����ӯ�� */
	BCESFieldTypeAmount ClosedPL;	/* ƽ��ӯ�� */
	BCESFieldTypeAmount Fee;	/* ������ */
	BCESFieldTypeAmount Margin;	/* ��֤�� */
	BCESFieldTypeDate CreateDate;	/* �������� */
	BCESFieldTypeTime CreateTime;	/* ����ʱ�� */
	BCESFieldTypeDate CloseDate;	/* ƽ������ */
	BCESFieldTypeTime CloseTime;	/* ƽ��ʱ�� */
	BCESFieldTypePrice ClosePrice;	/* ƽ�ּ۸� */
	BCESFieldTypePrice OverNightFee;	/* ��ҹ�� */
	BCESFieldTypeQty QtyFrozen;	/* ����ֲ��� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypePrice CreatePrice;	/* ���ּ� */
	BCESFieldTypeAmount HistoryClosedPL;	/* ��ʷƽ��ӯ�� */
	BCESFieldTypeDate CreateTradeDate;	/* ���ֽ������� */
	BCESFieldTypeQty PreQtyLeft;	/* ����ʣ������ */
};

/* �ʽ��ѯ���� */
struct stBCESFundQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ��ʷ�ʽ��ѯ���� */
struct stBCESHisFundQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* �ʽ� */
struct stBCESFund
{
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAmount LastBalance;	/* ����Ȩ�� */
	BCESFieldTypeAmount FloatBalance;	/* ����Ȩ�� */
	BCESFieldTypeAmount FreeBalance;	/* �����ʽ� */
	BCESFieldTypeAmount Margin;	/* ռ�ñ�֤�� */
	BCESFieldTypeAmount FrozenMargin;	/* ���ᱣ֤�� */
	BCESFieldTypeAmount Fee;	/* ������ */
	BCESFieldTypeAmount FeeFrozen;	/* ���������� */
	BCESFieldTypeAmount ClosedPL;	/* ƽ��ӯ�� */
	BCESFieldTypeAmount FloatingPL;	/* ����ӯ�� */
	BCESFieldTypeAmount ProfitLoss;	/* ӯ�� */
	BCESFieldTypeAmount TotalPL;	/* �ۼ�ӯ�� */
	BCESFieldTypeAmount FrozenBalance;	/* �����ʽ� */
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
	BCESFieldTypeName AgentName;	/* ���������� */
	BCESFieldTypeAmount InAmount;	/* ����� */
	BCESFieldTypeAmount OutAmount;	/* ������ */
	BCESFieldTypePrice OverNightFee;	/* ��ҹ�� */
};

/* �г�״̬֪ͨ */
struct stBCESMarketStatusNty
{
	BCESFieldTypeFlag MarketStatus;	/* �г�״̬ */
	BCESFieldTypeMarketStatusDesc MarketStatusDesc;	/* �г�״̬���� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ��Լ��ѯ���� */
struct stBCESInstrumentQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ��Լ */
struct stBCESInstrument
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeInstrumentName InstrumentName;	/* ��Լ���� */
	BCESFieldTypeFlag FeeType;	/* ���������� */
	BCESFieldTypeRate FeeRate;	/* �������� */
	BCESFieldTypePrice MarginRate;	/* ��֤�� */
	BCESFieldTypeRate DailyPriceLimit;	/* ÿ���ǵ����� */
	BCESFieldTypeFlag PriceUnit;	/* ���۵�λ */
	BCESFieldTypeQty TradeUnit;	/* ���׵�λ */
	BCESFieldTypePrice MinMovement;	/* ��С�䶯��λ */
	BCESFieldTypePrice PriceScale;	/* ���۾��� */
	BCESFieldTypeRate PriceCoefficient;	/* �۸�ϵ�� */
	BCESFieldTypeFlag InstrumentStatus;	/* ��Լ״̬ */
	BCESFieldTypePoints LimitedFilledPoints;	/* ��С�ɽ����� */
	BCESFieldTypePoints LimitedOrderPoints;	/* ��С���۵�� */
	BCESFieldTypePoints LimitedStopPoints;	/* ��СֹӮֹ���� */
	BCESFieldTypeAddress Address;	/* ���� */
	BCESFieldTypeAddress WareHouse;	/* �ֿ� */
	BCESFieldTypeFlag Currency;	/* ���� */
	BCESFieldTypeFlag MarginRateType;	/* ��֤�������� */
	BCESFieldTypePrice OverNightFee;	/* ��ҹ�� */
	BCESFieldTypeFlag OverNightFeeType;	/* ��ҹ������ */
	BCESFieldTypeRate PriceMultiply;	/* ���۳��� */
	BCESFieldTypeFlag FeeFlag;	/* �շ����� */
	BCESFieldTypeQty EachQtyLimt;	/* ÿ�ʳֲ����� */
	BCESFieldTypeQty TotalQtyLimt;	/* �ֲܳ����� */
	BCESFieldTypeGoodsName GoodsName;	/* Ʒ�ִ��� */
	BCESFieldTypePlateName PlateName;	/* ��� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeFlag InstrumentType;	/* ��Ʒ���� */
};

/* ���߲�ѯ���� */
struct stBCESMinDataQueryReq
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTimeFrom;	/* ��ʼ����ʱ�� */
	BCESFieldTypeDateTime DateTimeTo;	/* ��������ʱ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ���� */
struct stBCESMinData
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTime;	/* ����ʱ�� */
	BCESFieldTypePrice OpenPrice;	/* ���̼� */
	BCESFieldTypePrice HighestPrice;	/* ��߼� */
	BCESFieldTypePrice LowestPrice;	/* ��ͼ� */
	BCESFieldTypePrice ClosePrice;	/* ���̼� */
	BCESFieldTypeQtyTotal QtyTotal;	/* �ɽ��� */
	BCESFieldTypeQtyTotal OI;	/* ������ */
	BCESFieldTypeAmount Amount;	/* �ɽ��� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ���߲�ѯ���� */
struct stBCESDayDataQueryReq
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ���� */
struct stBCESDayData
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate Date;	/* ���� */
	BCESFieldTypePrice OpenPrice;	/* ���̼� */
	BCESFieldTypePrice HighestPrice;	/* ��߼� */
	BCESFieldTypePrice LowestPrice;	/* ��ͼ� */
	BCESFieldTypePrice ClosePrice;	/* ���̼� */
	BCESFieldTypeQtyTotal QtyTotal;	/* �ɽ��� */
	BCESFieldTypeQtyTotal OI;	/* ������ */
	BCESFieldTypeAmount Amount;	/* �ɽ��� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ɽ���ϸ��ѯ���� */
struct stBCESTradeDetailDataQueryReq
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ɽ���ϸ */
struct stBCESTradeDetailData
{
	BCESFieldTypeMatchID MatchID;	/* �ɽ��� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate Date;	/* ���� */
	BCESFieldTypeTime Time;	/* ʱ�� */
	BCESFieldTypeQty Qty;	/* �ɽ��� */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* ֹӮֹ���������� */
struct stBCESProfitLossStopSetReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
};

/* ֹӮֹ������Ӧ�� */
struct stBCESProfitLossStopSetRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
};

/* ���� */
struct stBCESBulletin
{
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeBulletinID BulletinID;	/* ������ */
	BCESFieldTypeTitle Title;	/* ������� */
	BCESFieldTypeContent Content;	/* �������� */
	BCESFieldTypeDate PublishDate;	/* �������� */
	BCESFieldTypeTime PublishTime;	/* ����ʱ�� */
	BCESFieldTypeDate CreateDate;	/* �������� */
	BCESFieldTypeTime CreateTime;	/* ����ʱ�� */
	BCESFieldTypeFlag PublishMethod;	/* ������ʽ */
	BCESFieldTypeUserID PublishUserID;	/* ������ */
};

/* �����ѯ���� */
struct stBCESBulletinQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ֪ͨ��ѯ���� */
struct stBCESNoticeQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ֪ͨ */
struct stBCESNotice
{
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeNoticeID NoticeID;	/* ֪ͨ��� */
	BCESFieldTypeTitle Title;	/* ֪ͨ���� */
	BCESFieldTypeContent Content;	/* ֪ͨ���� */
	BCESFieldTypeDate PublishDate;	/* �������� */
	BCESFieldTypeTime PublishTime;	/* ����ʱ�� */
	BCESFieldTypeDate CreateDate;	/* �������� */
	BCESFieldTypeTime CreateTime;	/* ����ʱ�� */
	BCESFieldTypeFlag PublishMethod;	/* ������ʽ */
	BCESFieldTypeUserID PublishUserID;	/* ������ */
};

/* ���ӳ�������� */
struct stBCESElectronicFundIOReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag FundIODirection;	/* ������� */
	BCESFieldTypeAmount Amount;	/* ��� */
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
};

/* ���ӳ������Ӧ */
struct stBCESElectronicFundIORsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFundIOSeqno FundIOSeqno;	/* �������ˮ�� */
	BCESFieldTypeFlag FundIODirection;	/* ������� */
	BCESFieldTypeAmount Amount;	/* ��� */
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
	BCESFieldTypeDate CreateDate;	/* �������� */
	BCESFieldTypeTime CreateTime;	/* ����ʱ�� */
	BCESFieldTypeFlag FundIOStatus;	/* �����״̬ */
	BCESFieldTypeFundIOStatusDesc FundIOStatusDesc;	/* �����״̬���� */
	BCESFieldTypeDate CompleteDate;	/* ������� */
	BCESFieldTypeTime CompleteTime;	/* ���ʱ�� */
	BCESFieldTypeURL PayURL;	/* ֧������ */
};

/* ���ӳ����֪ͨ */
struct stBCESElectronicFundIONty
{
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFundIOSeqno FundIOSeqno;	/* �������ˮ�� */
	BCESFieldTypeFlag FundIODirection;	/* ������� */
	BCESFieldTypeAmount Amount;	/* ��� */
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
	BCESFieldTypeFlag FundIOStatus;	/* �����״̬ */
	BCESFieldTypeFundIOStatusDesc FundIOStatusDesc;	/* �����״̬���� */
	BCESFieldTypeDate CreateDate;	/* �������� */
	BCESFieldTypeTime CreateTime;	/* ����ʱ�� */
	BCESFieldTypeDate CompleteDate;	/* ������� */
	BCESFieldTypeTime CompleteTime;	/* ���ʱ�� */
	BCESFieldTypeURL PayURL;	/* ֧������ */
};

/* �������ϸ */
struct stBCESFundIODetail
{
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeFundIOSeqno FundIOSeqno;	/* �������ˮ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag FundIODirection;	/* ������� */
	BCESFieldTypeAmount Amount;	/* ��� */
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
	BCESFieldTypeFlag FundIOStatus;	/* �����״̬ */
	BCESFieldTypeDate CreateDate;	/* �������� */
	BCESFieldTypeTime CreateTime;	/* ����ʱ�� */
	BCESFieldTypeDate CompleteDate;	/* ������� */
	BCESFieldTypeTime CompleteTime;	/* ���ʱ�� */
	BCESFieldTypeFlag FundIOMethod;	/* �����ʽ */
	BCESFieldTypeFundIOStatusDesc FundIOStatusDesc;	/* �����״̬���� */
	BCESFieldTypeAddress ReceiveBranchName;	/* ֧������ */
	BCESFieldTypePaySeqno PaySeqno;	/* ֧����ˮ�� */
};

/* �������ϸ��ѯ���� */
struct stBCESFundIODetailQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* ��ʼ���� */
};

/* �����ѯ���� */
struct stBCESReportQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ���� */
struct stBCESReport
{
	BCESFieldTypeReportData ReportData;	/* �������� */
};

/* ��ʷ������ѯ���� */
struct stBCESHisOrderQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ��ʷ�ɽ���ѯ���� */
struct stBCESHisTradeQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ��ʷ�����ѯ���� */
struct stBCESHisBulletinQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* ��ʼ���� */
};

/* ��ʷ֪ͨ��ѯ���� */
struct stBCESHisNoticeQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* ��ʼ���� */
};

/* Ͷ�������� */
struct stBCESInvestorRanking
{
	BCESFieldTypeInstrumentName InstrumentName;	/* ��Լ�� */
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeRankingNum RankingNum;	/* ���� */
};

/* ��ѯͶ������������ */
struct stBCESInvestorRankingQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* �������� */
struct stBCESTradeSettings
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag TradeAction;	/* ������Ϊ */
};

/* ���������������� */
struct stBCESTradeSettingsAddReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag TradeAction;	/* ������Ϊ */
};

/* ������������Ӧ�� */
struct stBCESTradeSettingsAddRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ���������޸����� */
struct stBCESTradeSettingsModifyReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag TradeAction;	/* ������Ϊ */
};

/* ���������޸�Ӧ�� */
struct stBCESTradeSettingsModifyRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ��������ɾ������ */
struct stBCESTradeSettingsDeleteReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ��������ɾ��Ӧ�� */
struct stBCESTradeSettingsDeleteRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �������ò�ѯ���� */
struct stBCESTradeSettingsQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ǩԼ��Ϣ */
struct stBCESAccountBind
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
	BCESFieldTypeAddress ReceiveBranchName;	/* ֧������ */
	BCESFieldTypeName ReceiveProvice;	/* ����ʡ�� */
	BCESFieldTypeName ReceiveCity;	/* ������ */
	BCESFieldTypeFlag AccountBindStatus;	/* ǩԼ״̬ */
	BCESFieldTypeFundIOStatusDesc AccountBindStatusDesc;	/* ǩԼ״̬���� */
	BCESFieldTypeFlag CredentialType;	/* ֤������ */
	BCESFieldTypeCredentialNo CredentialNo;	/* ֤���� */
};

/* ǩԼ���� */
struct stBCESAccountBindReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
	BCESFieldTypeAddress ReceiveBranchName;	/* ֧������ */
	BCESFieldTypeName ReceiveProvice;	/* ����ʡ�� */
	BCESFieldTypeName ReceiveCity;	/* ������ */
	BCESFieldTypeFlag CredentialType;	/* ֤������ */
	BCESFieldTypeCredentialNo CredentialNo;	/* ֤���� */
};

/* ǩԼ��Ϣ��ѯ���� */
struct stBCESAccountBindQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ǩԼӦ�� */
struct stBCESAccountBindRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeURL AccountBindURL;	/* ��ַ */
	BCESFieldTypeFlag AccountBindStatus;	/* ǩԼ״̬ */
};

/* ���������޸����� */
struct stBCESTestSettingsModifyReq
{
	BCESFieldTypeUserID UserID;	/* �û��� */
	BCESFieldTypePoints ErrNetTradeSec;	/* ������ϳɽ��ӳ� */
	BCESFieldTypePoints ErrNetRemindSec;	/* ������������ӳ� */
	BCESFieldTypeRspDesc ErrNetRemindTxt;	/* �������������Ϣ */
	BCESFieldTypePoints ErrSeverTradePort;	/* ���������ϳɽ���� */
	BCESFieldTypePoints ErrSeverRemindPort;	/* �������������ѵ�� */
	BCESFieldTypeRspDesc ErrSeverRemindTxt;	/* ����������������Ϣ */
};

/* ���������޸�Ӧ�� */
struct stBCESTestSettingsModifyRsp
{
	BCESFieldTypeUserID UserID;	/* �û��� */
};

/* �ҵ���������ѯ���� */
struct stBCESTopInvestorQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* �ҵ������� */
struct stBCESTopInvestor
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeQty Qty;	/* �ҵ��� */
	BCESFieldTypeRankingNum RankingNum;	/* ���� */
};

/* Ͷ���߹ҵ���ѯ���� */
struct stBCESInvestorQuotQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeInvestorID RankingInvestorID;	/* ����Ͷ���ߺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* Ͷ���߹ҵ� */
struct stBCESInvestorQuot
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeQty Qty;	/* �ҵ��� */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeRankingNum RankingNum;	/* ���� */
};

/* ����ʱ�� */
struct stBCESTradeTime
{
	BCESFieldTypeTime TimeBegin;	/* ��ʼʱ�� */
	BCESFieldTypeTime TimeEnd;	/* ����ʱ�� */
	BCESFieldTypeFlag MarketStatus;	/* �г�״̬ */
};

/* ���ս������� */
struct stBCESDeliveryApply
{
	BCESFieldTypeDeliveryID DeliveryApplyID;	/* ���ս��������� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDeliveryID DeliveryAddress;	/* ���ս����ַ */
	BCESFieldTypeName LiaisonName;	/* ��ϵ������ */
	BCESFieldTypePhoneNo LiaisonNumber;	/* ��ϵ�绰 */
	BCESFieldTypeFlag CredentialType;	/* ֤������ */
	BCESFieldTypeCredentialNo CredentialNo;	/* ֤���� */
	BCESFieldTypeAddress LiaisonAddress;	/* ��ϵ��ַ */
	BCESFieldTypePostCode PostCode;	/* �ʱ� */
	BCESFieldTypeName CompanyName;	/* ��ҵ���� */
	BCESFieldTypeAddress CompanyAddress;	/* ��˾��ַ */
	BCESFieldTypePhoneNo CompanyNumber;	/* ��˾�绰 */
	BCESFieldTypeBankNameAccountID BankNameAccountID;	/* �������Ƽ��˺� */
	BCESFieldTypeTaxNo TaxNo;	/* ˰��ǼǺ� */
	BCESFieldTypeFlag InvoiceFlag;	/* ��Ʊ��ʶ */
	BCESFieldTypeFlag InvoiceType;	/* ��Ʊ���� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypeFlag DeliveryStatus;	/* ���ս���״̬ */
	BCESFieldTypeDate ApplyDate;	/* �������� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ���ս�������鿴���� */
struct stBCESDeliveryApplyQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
	BCESFieldTypeFlag DeliveryStatus;	/* ���ս���״̬ */
};

/* ���ս��������������� */
struct stBCESDeliveryApplyAddReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDeliveryID DeliveryAddress;	/* ���ս����ַ */
	BCESFieldTypeName LiaisonName;	/* ��ϵ������ */
	BCESFieldTypePhoneNo LiaisonNumber;	/* ��ϵ�绰 */
	BCESFieldTypeFlag CredentialType;	/* ֤������ */
	BCESFieldTypeCredentialNo CredentialNo;	/* ֤���� */
	BCESFieldTypeAddress LiaisonAddress;	/* ��ϵ��ַ */
	BCESFieldTypePostCode PostCode;	/* �ʱ� */
	BCESFieldTypeName CompanyName;	/* ��ҵ���� */
	BCESFieldTypeAddress CompanyAddress;	/* ��˾��ַ */
	BCESFieldTypePhoneNo CompanyNumber;	/* ��˾�绰 */
	BCESFieldTypeBankNameAccountID BankNameAccountID;	/* �������Ƽ��˺� */
	BCESFieldTypeTaxNo TaxNo;	/* ˰��ǼǺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeFlag DeliveryStatus;	/* ���ս���״̬ */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypeDate ApplyDate;	/* �������� */
	BCESFieldTypeFlag InvoiceFlag;	/* ��Ʊ��ʶ */
	BCESFieldTypeFlag InvoiceType;	/* ��Ʊ���� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ���ս�����������Ӧ�� */
struct stBCESDeliveryApplyAddRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDeliveryID DeliveryApplyID;	/* ���ս��������� */
};

/* ���ս��������޸����� */
struct stBCESDeliveryApplyModifyReq
{
	BCESFieldTypeDeliveryID DeliveryApplyID;	/* ���ս��������� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDeliveryID DeliveryAddress;	/* ���ս����ַ */
	BCESFieldTypeName LiaisonName;	/* ��ϵ������ */
	BCESFieldTypePhoneNo LiaisonNumber;	/* ��ϵ�绰 */
	BCESFieldTypeFlag CredentialType;	/* ֤������ */
	BCESFieldTypeCredentialNo CredentialNo;	/* ֤���� */
	BCESFieldTypeAddress LiaisonAddress;	/* ��ϵ��ַ */
	BCESFieldTypePostCode PostCode;	/* �ʱ� */
	BCESFieldTypeName CompanyName;	/* ��ҵ���� */
	BCESFieldTypeAddress CompanyAddress;	/* ��˾��ַ */
	BCESFieldTypePhoneNo CompanyNumber;	/* ��˾�绰 */
	BCESFieldTypeBankNameAccountID BankNameAccountID;	/* �������Ƽ��˺� */
	BCESFieldTypeTaxNo TaxNo;	/* ˰��ǼǺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeFlag DeliveryStatus;	/* ���ս���״̬ */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeQty Qty;	/* ���� */
	BCESFieldTypeDate ApplyDate;	/* �������� */
	BCESFieldTypeFlag InvoiceFlag;	/* ��Ʊ��ʶ */
	BCESFieldTypeFlag InvoiceType;	/* ��Ʊ���� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ���ս��������޸�Ӧ�� */
struct stBCESDeliveryApplyModifyRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* ���ս�������ɾ������ */
struct stBCESDeliveryApplyDeleteReq
{
	BCESFieldTypeDeliveryID DeliveryApplyID;	/* ���ս��������� */
};

/* ���ս�������ɾ��Ӧ�� */
struct stBCESDeliveryApplyDeleteRsp
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* �����������/�ش����� */
struct stBCESQuotAdviserQuesAnswReq
{
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
	BCESFieldTypeFlag QuesAnswFlag;	/* ���ʻش��־ */
	BCESFieldTypeQuesAnswContent QuesAnswContent;	/* ����/�ش����� */
	BCESFieldTypeDate QuesAnswDate;	/* ����/�ش����� */
	BCESFieldTypeTime QuesAnswTime;	/* ����/�ش�ʱ�� */
};

/* �����������/�ش�Ӧ�� */
struct stBCESQuotAdviserQuesAnswRsp
{
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
};

/* ����������ʲ�ѯ���� */
struct stBCESQuotAdviserQuesQueryReq
{
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
	BCESFieldTypeFlag InvestorAdviserFlag;	/* Ͷ���߹��ʱ�־ */
};

/* ����������ʲ�ѯӦ�� */
struct stBCESQuotAdviserQuesQuery
{
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
	BCESFieldTypeQuesAnswContent QuestionContent;	/* �������� */
	BCESFieldTypeDate QuestionDate;	/* �������� */
	BCESFieldTypeTime QuestionTime;	/* ����ʱ�� */
	BCESFieldTypeQuesAnswContent AnswerContent;	/* �ش����� */
	BCESFieldTypeDate AnswerDate;	/* �ش����� */
	BCESFieldTypeTime AnswerTime;	/* �ش�ʱ�� */
};

/* �������������ʷ��ѯ���� */
struct stBCESQuotAdviserQuesHisQueryReq
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* �������������ʷ��ѯӦ�� */
struct stBCESQuotAdviserQuesHis
{
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
	BCESFieldTypeQuesAnswContent QuestionContent;	/* �������� */
	BCESFieldTypeDate QuestionDate;	/* �������� */
	BCESFieldTypeTime QuestionTime;	/* ����ʱ�� */
	BCESFieldTypeQuesAnswContent AnswerContent;	/* �ش����� */
	BCESFieldTypeDate AnswerDate;	/* �ش����� */
	BCESFieldTypeTime AnswerTime;	/* �ش�ʱ�� */
};

/* Ͷ���� */
struct stBCESInvestor
{
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypePassword InvestorPassword;	/* �տ�� */
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
	BCESFieldTypeFlag InvestorFlag;	/* Ͷ���߱�־ */
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
};

/* K�߲�ѯ���� */
struct stBCESKLineQueryReq
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTimeFrom;	/* ��ʼ����ʱ�� */
	BCESFieldTypeDateTime DateTimeTo;	/* ��������ʱ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeFlag KLineType;	/* K������ */
	BCESFieldTypeRequestID BarFrom;	/* ��ʼBar */
	BCESFieldTypeRequestID BarCount;	/* Bar���� */
};

/* K�� */
struct stBCESKLineData
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTime;	/* ����ʱ�� */
	BCESFieldTypePrice OpenPrice;	/* ���̼� */
	BCESFieldTypePrice HighestPrice;	/* ��߼� */
	BCESFieldTypePrice LowestPrice;	/* ��ͼ� */
	BCESFieldTypePrice ClosePrice;	/* ���̼� */
	BCESFieldTypeQtyTotal QtyTotal;	/* �ɽ��� */
	BCESFieldTypeQtyTotal OI;	/* ������ */
	BCESFieldTypeAmount Amount;	/* �ɽ��� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeFlag KLineType;	/* K������ */
};

/* Tick�߲�ѯ���� */
struct stBCESTickLineQueryReq
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTimeFrom;	/* ��ʼ����ʱ�� */
	BCESFieldTypeDateTime DateTimeTo;	/* ��������ʱ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* Tick�� */
struct stBCESTickLineData
{
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTime;	/* ����ʱ�� */
	BCESFieldTypePrice Price;	/* ���̼� */
	BCESFieldTypeQtyTotal QtyTotal;	/* �ɽ��� */
	BCESFieldTypeQtyTotal OI;	/* ������ */
	BCESFieldTypeAmount Amount;	/* �ɽ��� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypePrice BidPrice;	/* ����� */
	BCESFieldTypeQty BidQty;	/* ������ */
	BCESFieldTypePrice AskPrice;	/* ������ */
	BCESFieldTypeQty AskQty;	/* ������ */
	BCESFieldTypePrice HighLimit;	/* ��ͣ��� */
	BCESFieldTypePrice LowLimit;	/* ��ͣ��� */
};


#endif /* __API_FIELD_DEFINE_H__ */
