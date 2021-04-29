#ifndef __BCES_FIELD_DEFINE_H__
#define __BCES_FIELD_DEFINE_H__

#include "os.h"
#include "BCESFieldTypeDefine.h"
#include "BML.h"
#include "BMLField.h"
#include "BMLFields.h"

/* Field Rule List */
extern BML_FIELD_RULE bces_rulearray[];
extern int bces_rulecount;

/* MsgType */
#define BCESMsgTypePrivatePkgNty                  1	/* ˽�б���֪ͨ */
#define BCESMsgTypePublicPkgNty                   2	/* ��������֪ͨ */
#define BCESMsgTypeFlowSubscribeReq               3	/* ���������� */
#define BCESMsgTypeFlowSubscribeRsp               4	/* ������Ӧ�� */
#define BCESMsgTypeQuotSubscribeReq               7	/* ���鶩������ */
#define BCESMsgTypeQuotSubscribeRsp               8	/* ���鶩��Ӧ�� */
#define BCESMsgTypeQuotUnSubscribeReq             9	/* �����˶����� */
#define BCESMsgTypeQuotUnSubscribeRsp             10	/* �����˶�Ӧ�� */
#define BCESMsgTypeDBSyncNty                      11	/* ����ͬ��֪ͨ */
#define BCESMsgTypeLoginReq                       116	/* ��¼���� */
#define BCESMsgTypeLoginRsp                       117	/* ��¼Ӧ�� */
#define BCESMsgTypeLogoutReq                      118	/* �ǳ����� */
#define BCESMsgTypeLogoutRsp                      119	/* �ǳ�Ӧ�� */
#define BCESMsgTypeChangePasswordReq              120	/* �޸��������� */
#define BCESMsgTypeChangePasswordRsp              121	/* �޸�����Ӧ�� */
#define BCESMsgTypeOrderInsertReq                 122	/* ����¼������ */
#define BCESMsgTypeOrderInsertRsp                 123	/* ����¼��Ӧ�� */
#define BCESMsgTypeOrderNty                       124	/* ����֪ͨ */
#define BCESMsgTypeQuotNty                        125	/* ����֪ͨ */
#define BCESMsgTypeOrderCancelReq                 127	/* �������� */
#define BCESMsgTypeOrderCancelRsp                 128	/* ����Ӧ�� */
#define BCESMsgTypeMarketStatusNty                129	/* �г�״̬֪ͨ */
#define BCESMsgTypeTradeNty                       130	/* �ɽ�֪ͨ */
#define BCESMsgTypeQuotQueryReq                   131	/* �����ѯ���� */
#define BCESMsgTypeQuotQueryRsp                   132	/* �����ѯӦ�� */
#define BCESMsgTypeOrderQueryReq                  137	/* ������ѯ���� */
#define BCESMsgTypeOrderQueryRsp                  138	/* ������ѯӦ�� */
#define BCESMsgTypeTradeQueryReq                  139	/* �ɽ���ѯ���� */
#define BCESMsgTypeTradeQueryRsp                  140	/* �ɽ���ѯӦ�� */
#define BCESMsgTypePosiQueryReq                   141	/* �ֲֲ�ѯ���� */
#define BCESMsgTypePosiQueryRsp                   142	/* �ֲֲ�ѯӦ�� */
#define BCESMsgTypeFundQueryReq                   143	/* �ʽ��ѯ���� */
#define BCESMsgTypeFundQueryRsp                   144	/* �ʽ��ѯӦ�� */
#define BCESMsgTypeInstrumentQueryReq             145	/* ��Լ��ѯ���� */
#define BCESMsgTypeInstrumentQueryRsp             146	/* ��Լ��ѯӦ�� */
#define BCESMsgTypePosiDetailQueryReq             147	/* �ֲ���ϸ��ѯ���� */
#define BCESMsgTypePosiDetailQueryRsp             148	/* �ֲ���ϸ��ѯӦ�� */
#define BCESMsgTypeInternationalQuotNty           149	/* ��������֪ͨ */
#define BCESMsgTypeMinDataQueryReq                150	/* ���߲�ѯ���� */
#define BCESMsgTypeMinDataQueryRsp                151	/* ���߲�ѯӦ�� */
#define BCESMsgTypeDayDataQueryReq                152	/* ���߲�ѯ���� */
#define BCESMsgTypeDayDataQueryRsp                153	/* ���߲�ѯӦ�� */
#define BCESMsgTypeProfitLossStopSetReq           154	/* ֹӮֹ���������� */
#define BCESMsgTypeProfitLossStopSetRsp           155	/* ֹӮֹ������Ӧ�� */
#define BCESMsgTypePosiDetailNty                  156	/* �ֲ���ϸ֪ͨ */
#define BCESMsgTypeFundNty                        157	/* �ʽ�֪ͨ */
#define BCESMsgTypePosiNty                        158	/* �ֲ�֪ͨ */
#define BCESMsgTypeOrderModifyReq                 159	/* �����޸����� */
#define BCESMsgTypeOrderModifyRsp                 160	/* �����޸�Ӧ�� */
#define BCESMsgTypeBulletinQueryReq               161	/* �����ѯ���� */
#define BCESMsgTypeBulletinQueryRsp               162	/* �����ѯӦ�� */
#define BCESMsgTypeNoticeQueryReq                 163	/* ֪ͨ��ѯ���� */
#define BCESMsgTypeNoticeQueryRsp                 164	/* ֪ͨ��ѯӦ�� */
#define BCESMsgTypeBulletinNty                    165	/* ����֪ͨ */
#define BCESMsgTypeNoticeNty                      166	/* ��Ϣ֪ͨ */
#define BCESMsgTypeElectronicFundIOReq            167	/* ���ӳ�������� */
#define BCESMsgTypeElectronicFundIORsp            168	/* ���ӳ��������Ӧ�� */
#define BCESMsgTypeElectronicFundIONty            169	/* ���ӳ����֪ͨ */
#define BCESMsgTypeFundIODetailQueryReq           170	/* �������ϸ��ѯ���� */
#define BCESMsgTypeFundIODetailQueryRsp           171	/* �������ϸ��ѯӦ�� */
#define BCESMsgTypeReportQueryReq                 172	/* �����ѯ���� */
#define BCESMsgTypeReportQueryRsp                 173	/* �����ѯӦ�� */
#define BCESMsgTypeHisOrderQueryReq               174	/* ��ʷ������ѯ���� */
#define BCESMsgTypeHisOrderQueryRsp               175	/* ��ʷ������ѯӦ�� */
#define BCESMsgTypeHisTradeQueryReq               176	/* ��ʷ�ɽ���ѯ���� */
#define BCESMsgTypeHisTradeQueryRsp               177	/* ��ʷ�ɽ���ѯӦ�� */
#define BCESMsgTypeHisBulletinQueryReq            178	/* ��ʷ�����ѯ���� */
#define BCESMsgTypeHisBulletinQueryRsp            179	/* ��ʷ�����ѯӦ�� */
#define BCESMsgTypeHisNoticeQueryReq              180	/* ��ʷ֪ͨ��ѯ���� */
#define BCESMsgTypeHisNoticeQueryRsp              181	/* ֪ͨ��ѯӦ�� */
#define BCESMsgTypeMin5DataQueryReq               192	/* 5���߲�ѯ���� */
#define BCESMsgTypeMin5DataQueryRsp               193	/* 5���߲�ѯӦ�� */
#define BCESMsgTypeMin15DataQueryReq              194	/* 15���߲�ѯ���� */
#define BCESMsgTypeMin15DataQueryRsp              195	/* 15���߲�ѯӦ�� */
#define BCESMsgTypeAccountBindReq                 196	/* ǩԼ���� */
#define BCESMsgTypeAccountBindRsp                 197	/* ǩԼӦ�� */
#define BCESMsgTypeAccountBindQueryReq            198	/* ǩԼ��Ϣ��ѯ���� */
#define BCESMsgTypeAccountBindQueryRsp            199	/* ǩԼ��Ϣ��ѯӦ�� */
#define BCESMsgTypeHisFundQueryReq                200	/* �ʽ��ѯ���� */
#define BCESMsgTypeHisFundQueryRsp                201	/* �ʽ��ѯӦ�� */
#define BCESMsgTypeHisPosiDetailQueryReq          202	/* �ֲ���ϸ��ѯ���� */
#define BCESMsgTypeHisPosiDetailQueryRsp          203	/* �ֲ���ϸ��ѯӦ�� */
#define BCESMsgTypeAccountBindNty                 210	/* ǩԼ֪ͨ */
#define BCESMsgTypeTradeDetailDataQueryReq        211	/* �ɽ���ϸ��ѯ���� */
#define BCESMsgTypeTradeDetailDataQueryRsp        212	/* �ɽ���ϸ��ѯӦ�� */
#define BCESMsgTypeExtOrderInsertReq              213	/* ���̶���¼������ */
#define BCESMsgTypeExtOrderInsertRsp              214	/* ���̶���¼��Ӧ�� */
#define BCESMsgTypeExtOrderNty                    215	/* ���̶���֪ͨ */
#define BCESMsgTypeExtQuotNty                     216	/* ��������֪ͨ */
#define BCESMsgTypeExtOrderCancelReq              218	/* ���̳������� */
#define BCESMsgTypeExtOrderCancelRsp              219	/* ���̳���Ӧ�� */
#define BCESMsgTypeExtMarketStatusNty             220	/* �����г�״̬֪ͨ */
#define BCESMsgTypeExtTradeNty                    221	/* ���̳ɽ�֪ͨ */
#define BCESMsgTypeKLineQueryReq                  243	/* K�߲�ѯ���� */
#define BCESMsgTypeKLineQueryRsp                  244	/* K�߲�ѯӦ�� */
#define BCESMsgTypeTickLineQueryReq               245	/* Tick�߲�ѯ���� */
#define BCESMsgTypeTickLineQueryRsp               246	/* Tick�߲�ѯӦ�� */
#define BCESMsgTypeMatchLoginNty                  300	/* ���̵�¼֪ͨ */

/* FieldNo */
#define BCESFieldNoHead                           1000	/* ����ͷ */
#define BCESFieldNoBody                           1001	/* ������ */
#define BCESFieldNoFlowID                         1002	/* ����� */
#define BCESFieldNoRequestID                      1003	/* ������ */
#define BCESFieldNoEndFlag                        1004	/* ������� */
#define BCESFieldNoPkgNo                          1005	/* ���ı�� */
#define BCESFieldNoServiceNo                      1008	/* ָ����� */
#define BCESFieldNoApiHead                        1009	/* API����ͷ */
#define BCESFieldNoApiBody                        1010	/* API������ */
#define BCESFieldNoFlowSubscribeReq               1013	/* ���������� */
#define BCESFieldNoFlowSubscribeReqList           1014	/* �����������б� */
#define BCESFieldNoFlowSubscribeRsp               1015	/* ������Ӧ�� */
#define BCESFieldNoFlowSubscribeRspList           1016	/* ������Ӧ���б� */
#define BCESFieldNoQuotSubscribeReq               1017	/* ���鶩������ */
#define BCESFieldNoQuotSubscribeRsp               1018	/* ���鶩��Ӧ�� */
#define BCESFieldNoQuotUnSubscribeReq             1019	/* �����˶����� */
#define BCESFieldNoQuotUnSubscribeRsp             1020	/* �����˶�Ӧ�� */
#define BCESFieldNoDBOperateSummary               1021	/* ���ݲ�����Ҫ */
#define BCESFieldNoDBOperateList                  1022	/* ���ݲ����б� */
#define BCESFieldNoTableName                      1023	/* ���� */
#define BCESFieldNoTableOperation                 1024	/* ����� */
#define BCESFieldNoRspInfo                        1025	/* Ӧ����Ϣ�� */
#define BCESFieldNoRspNo                          1026	/* Ӧ����� */
#define BCESFieldNoRspDesc                        1027	/* Ӧ������ */
#define BCESFieldNoLoginReq                       1032	/* ��¼���� */
#define BCESFieldNoLoginRsp                       1033	/* ��¼Ӧ�� */
#define BCESFieldNoInvestorID                     1034	/* Ͷ���ߺ� */
#define BCESFieldNoInvestorPassword               1035	/* Ͷ�������� */
#define BCESFieldNoLogoutReq                      1037	/* �ǳ����� */
#define BCESFieldNoLogoutRsp                      1038	/* �ǳ�Ӧ�� */
#define BCESFieldNoChangePasswordReq              1039	/* �޸��������� */
#define BCESFieldNoChangePasswordRsp              1040	/* �޸�����Ӧ�� */
#define BCESFieldNoInvestorOldPassword            1041	/* Ͷ���߾����� */
#define BCESFieldNoInvestorNewPassword            1042	/* Ͷ���������� */
#define BCESFieldNoInputOrder                     1043	/* ����¼�� */
#define BCESFieldNoBSFlag                         1045	/* ������־ */
#define BCESFieldNoInstrumentID                   1046	/* ��Լ�� */
#define BCESFieldNoPrice                          1047	/* �۸� */
#define BCESFieldNoQty                            1048	/* ���� */
#define BCESFieldNoOCFlag                         1049	/* ��ƽ��־ */
#define BCESFieldNoOrderDate                      1055	/* �������� */
#define BCESFieldNoOrderID                        1056	/* ������ */
#define BCESFieldNoPriceType                      1059	/* �۸����� */
#define BCESFieldNoOrderTime                      1060	/* ����ʱ�� */
#define BCESFieldNoQtyLeft                        1061	/* ʣ������ */
#define BCESFieldNoModifyDate                     1062	/* �޸����� */
#define BCESFieldNoModifyTime                     1063	/* �޸�ʱ�� */
#define BCESFieldNoOrderStatus                    1064	/* ����״̬ */
#define BCESFieldNoOrderCancelReq                 1065	/* �������� */
#define BCESFieldNoOrderCancelRsp                 1066	/* ����Ӧ�� */
#define BCESFieldNoInstrumentType                 1068	/* ��Լ���� */
#define BCESFieldNoMatchDate                      1070	/* �ɽ����� */
#define BCESFieldNoMatchTime                      1071	/* �ɽ�ʱ�� */
#define BCESFieldNoMatchID                        1072	/* �ɽ��� */
#define BCESFieldNoPosiID                         1073	/* �ֲֺ� */
#define BCESFieldNoTradeDate                      1081	/* �������� */
#define BCESFieldNoBidPrice                       1083	/* ����� */
#define BCESFieldNoAskPrice                       1084	/* ������ */
#define BCESFieldNoPreSettle                      1085	/* ������ */
#define BCESFieldNoPreOI                          1086	/* ��ֲ��� */
#define BCESFieldNoQtyTotal                       1087	/* �ɽ��� */
#define BCESFieldNoOI                             1088	/* �ֲ��� */
#define BCESFieldNoAmount                         1089	/* �ɽ���� */
#define BCESFieldNoAvgPrice                       1090	/* ���� */
#define BCESFieldNoSettlePrice                    1091	/* ����� */
#define BCESFieldNoPreClose                       1092	/* �����̼� */
#define BCESFieldNoOpenPrice                      1093	/* ���̼� */
#define BCESFieldNoHighestPrice                   1094	/* ��߼� */
#define BCESFieldNoLowestPrice                    1095	/* ��ͼ� */
#define BCESFieldNoClosePrice                     1096	/* ���̼� */
#define BCESFieldNoAmountTotal                    1097	/* �ɽ��� */
#define BCESFieldNoBidQty                         1099	/* ������ */
#define BCESFieldNoAskQty                         1100	/* ������ */
#define BCESFieldNoQuotList                       1139	/* �����б� */
#define BCESFieldNoQuotQueryReq                   1140	/* �����ѯ���� */
#define BCESFieldNoQuot                           1141	/* ���� */
#define BCESFieldNoInternationalQuot              1142	/* �������� */
#define BCESFieldNoOrderQueryReq                  1147	/* ������ѯ���� */
#define BCESFieldNoOrder                          1148	/* ���� */
#define BCESFieldNoTradeQueryReq                  1149	/* �ɽ���ѯ���� */
#define BCESFieldNoTrade                          1150	/* �ɽ��� */
#define BCESFieldNoPosiQueryReq                   1151	/* �ֲֲ�ѯ���� */
#define BCESFieldNoPosi                           1152	/* �ֲ� */
#define BCESFieldNoOrderList                      1154	/* �����б� */
#define BCESFieldNoTradeList                      1155	/* �ɽ����б� */
#define BCESFieldNoPosiList                       1156	/* �ֲ��б� */
#define BCESFieldNoMarketStatus                   1158	/* �г�״̬ */
#define BCESFieldNoMarketStatusNty                1159	/* �г�״̬֪ͨ */
#define BCESFieldNoHisFundQueryReq                1160	/* �ʽ��ѯ���� */
#define BCESFieldNoHisPosiDetailQueryReq          1261	/* �ֲ���ϸ��ѯ���� */
#define BCESFieldNoFreeBalance                    1163	/* �����ʽ� */
#define BCESFieldNoFundQueryReq                   1164	/* �ʽ��ѯ���� */
#define BCESFieldNoFund                           1165	/* �ʽ� */
#define BCESFieldNoFrozenBalance                  1169	/* �����ʽ� */
#define BCESFieldNoLastBalance                    1170	/* �����ʽ� */
#define BCESFieldNoFloatBalance                   1171	/* ���ճ���� */
#define BCESFieldNoMargin                         1172	/* ���ձ�֤�� */
#define BCESFieldNoFrozenMargin                   1173	/* ����׷�ӱ�֤�� */
#define BCESFieldNoFee                            1174	/* ������ */
#define BCESFieldNoFeeFrozen                      1175	/* ���������� */
#define BCESFieldNoClosedPL                       1176	/* ����ƽ��ӯ�� */
#define BCESFieldNoFloatingPL                     1177	/* ������ӯ�� */
#define BCESFieldNoProfitLoss                     1178	/* ���ս��������� */
#define BCESFieldNoTotalPL                        1179	/* ���շ��������� */
#define BCESFieldNoInstrumentList                 1185	/* ��Լ�б� */
#define BCESFieldNoInstrumentQueryReq             1186	/* ��Լ��ѯ���� */
#define BCESFieldNoInstrument                     1187	/* ��Լ */
#define BCESFieldNoMarketStatusDesc               1189	/* �г�״̬���� */
#define BCESFieldNoVarietyID                      1201	/* Ʒ�ִ��� */
#define BCESFieldNoInstrumentStatus               1202	/* ��Լ״̬ */
#define BCESFieldNoTradeUnit                      1204	/* ���׵�λ */
#define BCESFieldNoPriceUnit                      1205	/* ���۵�λ */
#define BCESFieldNoDailyPriceLimit                1207	/* �ǵ�ͣ���� */
#define BCESFieldNoFeeType                        1208	/* ���������� */
#define BCESFieldNoFeeRate                        1209	/* �������� */
#define BCESFieldNoPriceScale                     1211	/* ���۾��� */
#define BCESFieldNoMarginRate                     1213	/* ��֤���� */
#define BCESFieldNoHighLimit                      1214	/* ��ͣ��� */
#define BCESFieldNoLowLimit                       1215	/* ��ͣ��� */
#define BCESFieldNoBuyQtyFrozen                   1216	/* �򶳽�ֲ��� */
#define BCESFieldNoSellQtyFrozen                  1217	/* ������ֲ��� */
#define BCESFieldNoPosiDetailQueryReq             1267	/* �ֲ���ϸ��ѯ���� */
#define BCESFieldNoPosiDetail                     1268	/* �ֲ���ϸ */
#define BCESFieldNoPosiDetailList                 1269	/* �ֲ���ϸ�б� */
#define BCESFieldNoInstrumentName                 1270	/* ��Լ���� */
#define BCESFieldNoMinMovement                    1271	/* �۸�䶯���� */
#define BCESFieldNoPriceCoefficient               1272	/* �۸�䶯���� */
#define BCESFieldNoBuyQty                         1273	/* ��ֲ��� */
#define BCESFieldNoBuyPrice                       1274	/* ��ֲ־��� */
#define BCESFieldNoSellQty                        1275	/* ���ֲ��� */
#define BCESFieldNoSellPrice                      1276	/* ���ֲ־��� */
#define BCESFieldNoMinDataQueryReq                1277	/* ���߲�ѯ���� */
#define BCESFieldNoMinData                        1278	/* ���� */
#define BCESFieldNoDayDataQueryReq                1279	/* ���߲�ѯ���� */
#define BCESFieldNoDayData                        1280	/* ���� */
#define BCESFieldNoMinDataList                    1281	/* �����б� */
#define BCESFieldNoDayDataList                    1282	/* �����б� */
#define BCESFieldNoDateTimeFrom                   1283	/* ��ʼ����ʱ�� */
#define BCESFieldNoDateTimeTo                     1284	/* ��������ʱ�� */
#define BCESFieldNoDateFrom                       1285	/* ��ʼ���� */
#define BCESFieldNoDateTo                         1286	/* �������� */
#define BCESFieldNoDate                           1287	/* ���� */
#define BCESFieldNoTime                           1288	/* ʱ�� */
#define BCESFieldNoTimeFrom                       1289	/* ��ʼʱ�� */
#define BCESFieldNoTimeTo                         1290	/* ����ʱ�� */
#define BCESFieldNoDateTime                       1291	/* ����ʱ�� */
#define BCESFieldNoLimitedFilledPoints            1292	/* ��С�ɽ����� */
#define BCESFieldNoLimitedOrderPoints             1293	/* ��С���۵�� */
#define BCESFieldNoLimitedStopPoints              1294	/* ��СֹӮֹ���� */
#define BCESFieldNoProfitStopPrice                1295	/* ֹӮ�� */
#define BCESFieldNoLossStopPrice                  1296	/* ֹ��� */
#define BCESFieldNoProfitLossStopSetReq           1297	/* ֹӮֹ���������� */
#define BCESFieldNoProfitLossStopSetRsp           1298	/* ֹӮֹ������Ӧ�� */
#define BCESFieldNoFilledPoints                   1299	/* �ɽ����� */
#define BCESFieldNoCreateDate                     1365	/* �������� */
#define BCESFieldNoCreateTime                     1366	/* ����ʱ�� */
#define BCESFieldNoPublishDate                    1374	/* �������� */
#define BCESFieldNoPublishTime                    1375	/* ����ʱ�� */
#define BCESFieldNoBulletinQueryReq               1378	/* ��ѯ�������� */
#define BCESFieldNoBulletinList                   1383	/* �����б� */
#define BCESFieldNoBulletin                       1384	/* ���� */
#define BCESFieldNoPublishUserID                  1385	/* ������ */
#define BCESFieldNoBulletinID                     1386	/* ������ */
#define BCESFieldNoTitle                          1387	/* ���� */
#define BCESFieldNoContent                        1388	/* ���� */
#define BCESFieldNoNoticeID                       1389	/* ֪ͨ��� */
#define BCESFieldNoPublishMethod                  1390	/* ������ʽ */
#define BCESFieldNoNoticeList                     1398	/* ֪ͨ�б� */
#define BCESFieldNoNotice                         1399	/* ֪ͨ */
#define BCESFieldNoNoticeQueryReq                 1393	/* ��ѯ֪ͨ���� */
#define BCESFieldNoFundIODirection                1394	/* ������� */
#define BCESFieldNoFundIOStatus                   1395	/* �����״̬ */
#define BCESFieldNoCompleteDate                   1396	/* ������� */
#define BCESFieldNoCompleteTime                   1397	/* ���ʱ�� */
#define BCESFieldNoFundIOSeqno                    1398	/* �������ˮ�� */
#define BCESFieldNoFundIOStatusDesc               1399	/* �����״̬���� */
#define BCESFieldNoElectronicFundIOReq            1411	/* ���ӳ�������� */
#define BCESFieldNoElectronicFundIORsp            1412	/* ���ӳ������Ӧ */
#define BCESFieldNoPayURL                         1413	/* ��ַ */
#define BCESFieldNoPayDirection                   1414	/* ֧������ */
#define BCESFieldNoElectronicFundIONty            1415	/* ���ӳ����֪ͨ */
#define BCESFieldNoFundIOMethod                   1416	/* �����ʽ */
#define BCESFieldNoFundIODetail                   1417	/* �������ϸ */
#define BCESFieldNoFundIODetailList               1418	/* �������ϸ�б� */
#define BCESFieldNoFundIODetailQueryReq           1419	/* �������ϸ��ѯ���� */
#define BCESFieldNoReceiveBankID                  1420	/* �տ��к� */
#define BCESFieldNoReceiveAccountID               1421	/* �տ��ʺ� */
#define BCESFieldNoReceiveAccountName             1422	/* �տ�� */
#define BCESFieldNoReport                         1423	/* ���� */
#define BCESFieldNoReportList                     1424	/* �����б� */
#define BCESFieldNoReportQueryReq                 1425	/* �����ѯ���� */
#define BCESFieldNoReportData                     1426	/* �������� */
#define BCESFieldNoHisOrderQueryReq               1427	/* ��ʷ������ѯ���� */
#define BCESFieldNoHisTradeQueryReq               1428	/* ��ʷ�ɽ���ѯ���� */
#define BCESFieldNoHisBulletinQueryReq            1429	/* ��ѯ��ʷ�������� */
#define BCESFieldNoHisNoticeQueryReq              1430	/* ��ѯ��ʷ֪ͨ���� */
#define BCESFieldNoInvestorRanking                1459	/* Ͷ�������� */
#define BCESFieldNoInvestorRankingList            1460	/* Ͷ���������б� */
#define BCESFieldNoInvestorRankingQueryReq        1467	/* Ͷ����������ѯ���� */
#define BCESFieldNoInvestorRankingQueryRsp        1468	/* Ͷ����������ѯӦ�� */
#define BCESFieldNoRankingNum                     1469	/* ���� */
#define BCESFieldNoInvestorName                   1470	/* Ͷ�������� */
#define BCESFieldNoTradeSettings                  1471	/* �������� */
#define BCESFieldNoTradeSettingsList              1472	/* ���������б� */
#define BCESFieldNoTradeSettingsAddReq            1473	/* ���������������� */
#define BCESFieldNoTradeSettingsAddRsp            1474	/* ������������Ӧ�� */
#define BCESFieldNoTradeSettingsModifyReq         1475	/* ���������޸����� */
#define BCESFieldNoTradeSettingsModifyRsp         1476	/* ���������޸�Ӧ�� */
#define BCESFieldNoTradeSettingsDeleteReq         1477	/* ��������ɾ������ */
#define BCESFieldNoTradeSettingsDeleteRsp         1478	/* ��������ɾ��Ӧ�� */
#define BCESFieldNoTradeSettingsQueryReq          1479	/* �������ò�ѯ���� */
#define BCESFieldNoTradeAction                    1480	/* ������Ϊ */
#define BCESFieldNoAddress                        1481	/* ���� */
#define BCESFieldNoWareHouse                      1482	/* �ֿ� */
#define BCESFieldNoCurrency                       1483	/* ���� */
#define BCESFieldNoAccountBind                    1484	/* ǩԼ��Ϣ */
#define BCESFieldNoAccountBindList                1485	/* ǩԼ��Ϣ�б� */
#define BCESFieldNoAccountBindQueryReq            1486	/* ǩԼ��Ϣ��ѯ���� */
#define BCESFieldNoAccountBindReq                 1488	/* ǩԼ���� */
#define BCESFieldNoAccountBindRsp                 1489	/* ǩԼӦ�� */
#define BCESFieldNoCloseDate                      1511	/* ƽ������ */
#define BCESFieldNoCloseTime                      1512	/* ƽ��ʱ�� */
#define BCESFieldNoOverNightFee                   1513	/* ��ҹ�� */
#define BCESFieldNoAgentName                      1514	/* ���������� */
#define BCESFieldNoInAmount                       1515	/* ����� */
#define BCESFieldNoOutAmount                      1516	/* ������ */
#define BCESFieldNoFundList                       1517	/* �ʽ��б� */
#define BCESFieldNoSysName                        1518	/* ϵͳ���� */
#define BCESFieldNoErrNetTradeSec                 1521	/* ������ϳɽ��ӳ� */
#define BCESFieldNoErrNetRemindSec                1522	/* ������������ӳ� */
#define BCESFieldNoErrNetRemindTxt                1523	/* �������������Ϣ */
#define BCESFieldNoErrSeverTradePort              1524	/* ���������ϳɽ���� */
#define BCESFieldNoErrSeverRemindPort             1525	/* �������������ѵ�� */
#define BCESFieldNoErrSeverRemindTxt              1526	/* ����������������Ϣ */
#define BCESFieldNoTestSettingsModifyReq          1528	/* ���������޸����� */
#define BCESFieldNoTestSettingsModifyRsp          1529	/* ���������޸�Ӧ�� */
#define BCESFieldNoMarginRateType                 1615	/* ��֤�������� */
#define BCESFieldNoOverNightFeeType               1616	/* ��ҹ������ */
#define BCESFieldNoFeeFlag                        1616	/* �շ����� */
#define BCESFieldNoPriceMultiply                  1617	/* ���۳��� */
#define BCESFieldNoEachQtyLimt                    1619	/* ÿ�ʳֲ����� */
#define BCESFieldNoTotalQtyLimt                   1620	/* �ֲܳ����� */
#define BCESFieldNoUserID                         1621	/* ����Ա�� */
#define BCESFieldNoBidPrice2                      1622	/* �����2 */
#define BCESFieldNoAskPrice2                      1623	/* ������2 */
#define BCESFieldNoBidQty2                        1624	/* ������2 */
#define BCESFieldNoAskQty2                        1625	/* ������2 */
#define BCESFieldNoBidPrice3                      1626	/* �����3 */
#define BCESFieldNoAskPrice3                      1627	/* ������3 */
#define BCESFieldNoBidQty3                        1628	/* ������3 */
#define BCESFieldNoAskQty3                        1629	/* ������3 */
#define BCESFieldNoBidPrice4                      1630	/* �����4 */
#define BCESFieldNoAskPrice4                      1631	/* ������4 */
#define BCESFieldNoBidQty4                        1632	/* ������4 */
#define BCESFieldNoAskQty4                        1633	/* ������4 */
#define BCESFieldNoBidPrice5                      1634	/* �����5 */
#define BCESFieldNoAskPrice5                      1635	/* ������5 */
#define BCESFieldNoBidQty5                        1636	/* ������5 */
#define BCESFieldNoAskQty5                        1637	/* ������5 */
#define BCESFieldNoSysMode                        1638	/* ϵͳģʽ */
#define BCESFieldNoQtyFrozen                      1639	/* ����ֲ��� */
#define BCESFieldNoBidPrice6                      1640	/* �����6 */
#define BCESFieldNoAskPrice6                      1641	/* ������6 */
#define BCESFieldNoBidQty6                        1642	/* ������6 */
#define BCESFieldNoAskQty6                        1643	/* ������6 */
#define BCESFieldNoBidPrice7                      1644	/* �����7 */
#define BCESFieldNoAskPrice7                      1645	/* ������7 */
#define BCESFieldNoBidQty7                        1646	/* ������7 */
#define BCESFieldNoAskQty7                        1647	/* ������7 */
#define BCESFieldNoBidPrice8                      1648	/* �����8 */
#define BCESFieldNoAskPrice8                      1649	/* ������8 */
#define BCESFieldNoBidQty8                        1650	/* ������8 */
#define BCESFieldNoAskQty8                        1651	/* ������8 */
#define BCESFieldNoBidPrice9                      1652	/* �����9 */
#define BCESFieldNoAskPrice9                      1653	/* ������9 */
#define BCESFieldNoBidQty9                        1654	/* ������9 */
#define BCESFieldNoAskQty9                        1655	/* ������9 */
#define BCESFieldNoBidPrice10                     1656	/* �����10 */
#define BCESFieldNoAskPrice10                     1657	/* ������10 */
#define BCESFieldNoBidQty10                       1658	/* ������10 */
#define BCESFieldNoAskQty10                       1659	/* ������10 */
#define BCESFieldNoIP                             1660	/* IP��ַ */
#define BCESFieldNoTopInvestorQueryReq            1661	/* �ҵ���������ѯ���� */
#define BCESFieldNoTopInvestor                    1662	/* �ҵ������� */
#define BCESFieldNoTopInvestorList                1663	/* �ҵ��������б� */
#define BCESFieldNoInvestorQuotQueryReq           1664	/* Ͷ���߹ҵ���ѯ���� */
#define BCESFieldNoInvestorQuot                   1665	/* �ҵ������� */
#define BCESFieldNoInvestorQuotList               1666	/* �ҵ��������б� */
#define BCESFieldNoRankingInvestorID              1667	/* ����Ͷ���ߺ� */
#define BCESFieldNoConditionType                  1668	/* �������� */
#define BCESFieldNoConditionMethod                1669	/* �������� */
#define BCESFieldNoConditionPrice                 1670	/* �����۸� */
#define BCESFieldNoGoodsName                      1671	/* Ʒ�ִ��� */
#define BCESFieldNoTradeTime                      1672	/* ����ʱ�� */
#define BCESFieldNoTimeBegin                      1673	/* ��ʼʱ�� */
#define BCESFieldNoTimeEnd                        1674	/* ����ʱ�� */
#define BCESFieldNoReceiveBranchName              1675	/* ֧������ */
#define BCESFieldNoReceiveProvice                 1676	/* ����ʡ�� */
#define BCESFieldNoReceiveCity                    1677	/* ������ */
#define BCESFieldNoAccountBindStatus              1678	/* ǩԼ״̬ */
#define BCESFieldNoAccountBindURL                 1679	/* ��ַ */
#define BCESFieldNoAccountBindStatusDesc          1680	/* ǩԼ״̬���� */
#define BCESFieldNoProductType                    1681	/* ��Ʒ��� */
#define BCESFieldNoProductVersion                 1682	/* ��Ʒ�汾�� */
#define BCESFieldNoDeliveryDemand                 1578	/* ���ս������� */
#define BCESFieldNoCompanyName                    1579	/* ��ҵ���� */
#define BCESFieldNoLiaisonName                    1560	/* ��ϵ������ */
#define BCESFieldNoLiaisonNumber                  1561	/* ��ϵ�绰 */
#define BCESFieldNoLiaisonAddress                 1562	/* ��ϵ��ַ */
#define BCESFieldNoGuaranteedQty                  1563	/* �������� */
#define BCESFieldNoGeneralQty                     1564	/* һ������ */
#define BCESFieldNoRiskQty                        1565	/* �������� */
#define BCESFieldNoBankName                       1566	/* �������� */
#define BCESFieldNoInvoiceTitle                   1567	/* ��Ʊ̧ͷ */
#define BCESFieldNoDeliveryDemandID               1568	/* ���ս����� */
#define BCESFieldNoDeliveryStatus                 1569	/* ���ս���״̬ */
#define BCESFieldNoDeliveryDemandQueryReq         1570	/* ���ս����������� */
#define BCESFieldNoDeliveryDemandQueryRsp         1571	/* ���ս�������Ӧ�� */
#define BCESFieldNoInvoiceFlag                    1572	/* ��Ʊ��ʶ */
#define BCESFieldNoInvoiceType                    1573	/* ��Ʊ���� */
#define BCESFieldNoCredentialType                 1304	/* ֤������ */
#define BCESFieldNoCredentialNo                   1305	/* ֤���� */
#define BCESFieldNoEmail                          1306	/* �������� */
#define BCESFieldNoPostCode                       1310	/* �ʱ� */
#define BCESFieldNoBankAccountID                  1405	/* �����ʺ� */
#define BCESFieldNoBankNameAccountID              1406	/* ���л������˺� */
#define BCESFieldNoDeliveryApplyID                1574	/* ���ս��������� */
#define BCESFieldNoDeliveryAddress                1575	/* ���ս����ַ */
#define BCESFieldNoApplyDate                      1576	/* �������� */
#define BCESFieldNoVerifedDate                    1577	/* ȷ������ */
#define BCESFieldNoCompletedDate                  1578	/* �ɽ����� */
#define BCESFieldNoCompanyAddress                 1579	/* ��˾��ַ */
#define BCESFieldNoTaxNo                          1580	/* ˰��ǼǺ� */
#define BCESFieldNoInvoice                        1581	/* ��Ʊ */
#define BCESFieldNoDeliveryApplyAddReq            1595	/* ���ս��������������� */
#define BCESFieldNoDeliveryApplyAddRsp            1596	/* ���ս�����������Ӧ�� */
#define BCESFieldNoDeliveryApplyModifyReq         1597	/* ���ս��������޸����� */
#define BCESFieldNoDeliveryApplyModifyRsp         1598	/* ���ս��������޸�Ӧ�� */
#define BCESFieldNoDeliveryApply                  1599	/* ���ս������� */
#define BCESFieldNoDeliveryApplyQueryReq          1600	/* ���ս��������ѯ���� */
#define BCESFieldNoDeliveryApplyQueryRsp          1601	/* ���ս��������ѯӦ�� */
#define BCESFieldNoDeliveryApplyList              1602	/* ���ս��������б� */
#define BCESFieldNoDeliveryApplyDeleteReq         1603	/* ���ս�������ɾ������ */
#define BCESFieldNoDeliveryApplyDeleteRsp         1604	/* ���ս�������ɾ��Ӧ�� */
#define BCESFieldNoPayServerType                  1605	/* ֧���������� */
#define BCESFieldNoTradeDetailDataQueryReq        1606	/* �ɽ���ϸ��ѯ���� */
#define BCESFieldNoCompanyNumber                  1607	/* ��˾�绰 */
#define BCESFieldNoTradeDetailDataList            1608	/* �ɽ���ϸ�б� */
#define BCESFieldNoAdviserID                      1609	/* ���ʺ� */
#define BCESFieldNoQuestionContent                1610	/* �������� */
#define BCESFieldNoQuestionDate                   1611	/* �������� */
#define BCESFieldNoQuestionTime                   1612	/* ����ʱ�� */
#define BCESFieldNoAnswerContent                  1613	/* �ش����� */
#define BCESFieldNoAnswerDate                     1614	/* �ش����� */
#define BCESFieldNoAnswerTime                     1615	/* �ش�ʱ�� */
#define BCESFieldNoQuestionID                     1616	/* ���ʱ�� */
#define BCESFieldNoQuesAnswFlag                   1617	/* ����/�ش��־ */
#define BCESFieldNoQuesAnswContent                1618	/* ����/�ش����� */
#define BCESFieldNoQuesAnswDate                   1619	/* ����/�ش����� */
#define BCESFieldNoQuesAnswTime                   1620	/* ����/�ش�ʱ�� */
#define BCESFieldNoInvestorAdviserFlag            1621	/* Ͷ���߹��ʱ�־ */
#define BCESFieldNoQuotAdviserQuesAnswReq         1622	/* �����������/�ش����� */
#define BCESFieldNoQuotAdviserQuesAnswRsp         1623	/* �����������/�ش�Ӧ�� */
#define BCESFieldNoQuotAdviserQuesHisQueryReq     1624	/* �������������ʷ��ѯ���� */
#define BCESFieldNoQuotAdviserQuesHisQueryRsp     1625	/* �������������ʷ��ѯӦ�� */
#define BCESFieldNoQuotAdviserQuesHisList         1626	/* �������������ʷ��ѯ�б� */
#define BCESFieldNoQuotAdviserQuesQueryReq        1627	/* ����������ʲ�ѯ���� */
#define BCESFieldNoQuotAdviserQuesQueryRsp        1628	/* ����������ʲ�ѯӦ�� */
#define BCESFieldNoQuotAdviserQuesQuerylist       1629	/* ����������ʲ�ѯ�б� */
#define BCESFieldNoPlateName                      1630	/* ��� */
#define BCESFieldNoPreBuyQty                      1631	/* ����ֲ��� */
#define BCESFieldNoPreSellQty                     1632	/* �����ֲ��� */
#define BCESFieldNoTodayBuyQty                    1633	/* ����ֲ��� */
#define BCESFieldNoTodaySellQty                   1634	/* �����ֲ��� */
#define BCESFieldNoTodayBuyQtyFrozen              1635	/* ���򶳽�ֲ��� */
#define BCESFieldNoTodaySellQtyFrozen             1636	/* ��������ֲ��� */
#define BCESFieldNoExchangeID                     1637	/* �������� */
#define BCESFieldNoSessionID                      1638	/* �Ự��� */
#define BCESFieldNoOrderRef                       1639	/* �������� */
#define BCESFieldNoCreatePrice                    1640	/* ���ּ� */
#define BCESFieldNoHistoryClosedPL                1641	/* ��ʷƽ��ӯ�� */
#define BCESFieldNoInvestorRole                   1642	/* Ͷ���߽�ɫ */
#define BCESFieldNoInvestorFlag                   1643	/* Ͷ���߱�־ */
#define BCESFieldNoPaySeqno                       1644	/* ֧����ˮ�� */
#define BCESFieldNoPreQtyLeft                     1645	/* ����ʣ������ */
#define BCESFieldNoCreateTradeDate                1646	/* ���ֽ������� */
#define BCESFieldNoClosedTradeDate                1647	/* ƽ�ֽ������� */
#define BCESFieldNoClosedOrderID                  1648	/* ƽ�ֶ����� */
#define BCESFieldNoClosedMatchID                  1649	/* ƽ�ֳɽ��� */
#define BCESFieldNoAccountID                      1686	/* �����˺� */
#define BCESFieldNoOrderStatusDesc                1707	/* ״̬˵�� */
#define BCESFieldNoOrderSysID                     1701	/* ������������� */
#define BCESFieldNoCTPSessionID                   1697	/* �Ự��� */
#define BCESFieldNoCTPFrontID                     1698	/* ǰ�ñ�� */
#define BCESFieldNoCTPOrderRef                    1699	/* �������� */
#define BCESFieldNoCloseFeeRate                   1703	/* ƽ���������� */
#define BCESFieldNoCloseTodayFeeRate              1704	/* ƽ����������� */
#define BCESFieldNoStampRate                      1705	/* ӡ��˰���� */
#define BCESFieldNoKLineType                      1716	/* K������ */
#define BCESFieldNoKLineQueryReq                  1717	/* K�߲�ѯ���� */
#define BCESFieldNoKLineList                      1718	/* K���б� */
#define BCESFieldNoTickLineQueryReq               1719	/* Tick�߲�ѯ���� */
#define BCESFieldNoTickLineList                   1720	/* Tick���б� */
#define BCESFieldNoBarFrom                        1721	/* ��ʼBar */
#define BCESFieldNoBarCount                       1722	/* Bar���� */
#define BCESFieldNoAccountList                    1800	/* �����˻��б� */
#define BCESFieldNoAccount                        1801	/* �����˻� */
#define BCESFieldNoExchangeList                   1802	/* �������б� */
#define BCESFieldNoExchange                       1803	/* ������ */
#define BCESFieldNoPreClosedPL                    1804	/* ����ƽ��ӯ�� */
#define BCESFieldNoPreClosePrice                  1805	/* ����ƽ�ּ� */

/* FieldIndex */
#define BCESFieldIndexHead                           0	/* ����ͷ */
#define BCESFieldIndexBody                           1	/* ������ */
#define BCESFieldIndexFlowID                         2	/* ����� */
#define BCESFieldIndexRequestID                      3	/* ������ */
#define BCESFieldIndexEndFlag                        4	/* ������� */
#define BCESFieldIndexPkgNo                          5	/* ���ı�� */
#define BCESFieldIndexServiceNo                      6	/* ָ����� */
#define BCESFieldIndexApiHead                        7	/* API����ͷ */
#define BCESFieldIndexApiBody                        8	/* API������ */
#define BCESFieldIndexFlowSubscribeReq               9	/* ���������� */
#define BCESFieldIndexFlowSubscribeReqList           10	/* �����������б� */
#define BCESFieldIndexFlowSubscribeRsp               11	/* ������Ӧ�� */
#define BCESFieldIndexFlowSubscribeRspList           12	/* ������Ӧ���б� */
#define BCESFieldIndexQuotSubscribeReq               13	/* ���鶩������ */
#define BCESFieldIndexQuotSubscribeRsp               14	/* ���鶩��Ӧ�� */
#define BCESFieldIndexQuotUnSubscribeReq             15	/* �����˶����� */
#define BCESFieldIndexQuotUnSubscribeRsp             16	/* �����˶�Ӧ�� */
#define BCESFieldIndexDBOperateSummary               17	/* ���ݲ�����Ҫ */
#define BCESFieldIndexDBOperateList                  18	/* ���ݲ����б� */
#define BCESFieldIndexTableName                      19	/* ���� */
#define BCESFieldIndexTableOperation                 20	/* ����� */
#define BCESFieldIndexRspInfo                        21	/* Ӧ����Ϣ�� */
#define BCESFieldIndexRspNo                          22	/* Ӧ����� */
#define BCESFieldIndexRspDesc                        23	/* Ӧ������ */
#define BCESFieldIndexLoginReq                       24	/* ��¼���� */
#define BCESFieldIndexLoginRsp                       25	/* ��¼Ӧ�� */
#define BCESFieldIndexInvestorID                     26	/* Ͷ���ߺ� */
#define BCESFieldIndexInvestorPassword               27	/* Ͷ�������� */
#define BCESFieldIndexLogoutReq                      28	/* �ǳ����� */
#define BCESFieldIndexLogoutRsp                      29	/* �ǳ�Ӧ�� */
#define BCESFieldIndexChangePasswordReq              30	/* �޸��������� */
#define BCESFieldIndexChangePasswordRsp              31	/* �޸�����Ӧ�� */
#define BCESFieldIndexInvestorOldPassword            32	/* Ͷ���߾����� */
#define BCESFieldIndexInvestorNewPassword            33	/* Ͷ���������� */
#define BCESFieldIndexInputOrder                     34	/* ����¼�� */
#define BCESFieldIndexBSFlag                         35	/* ������־ */
#define BCESFieldIndexInstrumentID                   36	/* ��Լ�� */
#define BCESFieldIndexPrice                          37	/* �۸� */
#define BCESFieldIndexQty                            38	/* ���� */
#define BCESFieldIndexOCFlag                         39	/* ��ƽ��־ */
#define BCESFieldIndexOrderDate                      40	/* �������� */
#define BCESFieldIndexOrderID                        41	/* ������ */
#define BCESFieldIndexPriceType                      42	/* �۸����� */
#define BCESFieldIndexOrderTime                      43	/* ����ʱ�� */
#define BCESFieldIndexQtyLeft                        44	/* ʣ������ */
#define BCESFieldIndexModifyDate                     45	/* �޸����� */
#define BCESFieldIndexModifyTime                     46	/* �޸�ʱ�� */
#define BCESFieldIndexOrderStatus                    47	/* ����״̬ */
#define BCESFieldIndexOrderCancelReq                 48	/* �������� */
#define BCESFieldIndexOrderCancelRsp                 49	/* ����Ӧ�� */
#define BCESFieldIndexInstrumentType                 50	/* ��Լ���� */
#define BCESFieldIndexMatchDate                      51	/* �ɽ����� */
#define BCESFieldIndexMatchTime                      52	/* �ɽ�ʱ�� */
#define BCESFieldIndexMatchID                        53	/* �ɽ��� */
#define BCESFieldIndexPosiID                         54	/* �ֲֺ� */
#define BCESFieldIndexTradeDate                      55	/* �������� */
#define BCESFieldIndexBidPrice                       56	/* ����� */
#define BCESFieldIndexAskPrice                       57	/* ������ */
#define BCESFieldIndexPreSettle                      58	/* ������ */
#define BCESFieldIndexPreOI                          59	/* ��ֲ��� */
#define BCESFieldIndexQtyTotal                       60	/* �ɽ��� */
#define BCESFieldIndexOI                             61	/* �ֲ��� */
#define BCESFieldIndexAmount                         62	/* �ɽ���� */
#define BCESFieldIndexAvgPrice                       63	/* ���� */
#define BCESFieldIndexSettlePrice                    64	/* ����� */
#define BCESFieldIndexPreClose                       65	/* �����̼� */
#define BCESFieldIndexOpenPrice                      66	/* ���̼� */
#define BCESFieldIndexHighestPrice                   67	/* ��߼� */
#define BCESFieldIndexLowestPrice                    68	/* ��ͼ� */
#define BCESFieldIndexClosePrice                     69	/* ���̼� */
#define BCESFieldIndexAmountTotal                    70	/* �ɽ��� */
#define BCESFieldIndexBidQty                         71	/* ������ */
#define BCESFieldIndexAskQty                         72	/* ������ */
#define BCESFieldIndexQuotList                       73	/* �����б� */
#define BCESFieldIndexQuotQueryReq                   74	/* �����ѯ���� */
#define BCESFieldIndexQuot                           75	/* ���� */
#define BCESFieldIndexInternationalQuot              76	/* �������� */
#define BCESFieldIndexOrderQueryReq                  77	/* ������ѯ���� */
#define BCESFieldIndexOrder                          78	/* ���� */
#define BCESFieldIndexTradeQueryReq                  79	/* �ɽ���ѯ���� */
#define BCESFieldIndexTrade                          80	/* �ɽ��� */
#define BCESFieldIndexPosiQueryReq                   81	/* �ֲֲ�ѯ���� */
#define BCESFieldIndexPosi                           82	/* �ֲ� */
#define BCESFieldIndexOrderList                      83	/* �����б� */
#define BCESFieldIndexTradeList                      84	/* �ɽ����б� */
#define BCESFieldIndexPosiList                       85	/* �ֲ��б� */
#define BCESFieldIndexMarketStatus                   86	/* �г�״̬ */
#define BCESFieldIndexMarketStatusNty                87	/* �г�״̬֪ͨ */
#define BCESFieldIndexHisFundQueryReq                88	/* �ʽ��ѯ���� */
#define BCESFieldIndexHisPosiDetailQueryReq          89	/* �ֲ���ϸ��ѯ���� */
#define BCESFieldIndexFreeBalance                    90	/* �����ʽ� */
#define BCESFieldIndexFundQueryReq                   91	/* �ʽ��ѯ���� */
#define BCESFieldIndexFund                           92	/* �ʽ� */
#define BCESFieldIndexFrozenBalance                  93	/* �����ʽ� */
#define BCESFieldIndexLastBalance                    94	/* �����ʽ� */
#define BCESFieldIndexFloatBalance                   95	/* ���ճ���� */
#define BCESFieldIndexMargin                         96	/* ���ձ�֤�� */
#define BCESFieldIndexFrozenMargin                   97	/* ����׷�ӱ�֤�� */
#define BCESFieldIndexFee                            98	/* ������ */
#define BCESFieldIndexFeeFrozen                      99	/* ���������� */
#define BCESFieldIndexClosedPL                       100	/* ����ƽ��ӯ�� */
#define BCESFieldIndexFloatingPL                     101	/* ������ӯ�� */
#define BCESFieldIndexProfitLoss                     102	/* ���ս��������� */
#define BCESFieldIndexTotalPL                        103	/* ���շ��������� */
#define BCESFieldIndexInstrumentList                 104	/* ��Լ�б� */
#define BCESFieldIndexInstrumentQueryReq             105	/* ��Լ��ѯ���� */
#define BCESFieldIndexInstrument                     106	/* ��Լ */
#define BCESFieldIndexMarketStatusDesc               107	/* �г�״̬���� */
#define BCESFieldIndexVarietyID                      108	/* Ʒ�ִ��� */
#define BCESFieldIndexInstrumentStatus               109	/* ��Լ״̬ */
#define BCESFieldIndexTradeUnit                      110	/* ���׵�λ */
#define BCESFieldIndexPriceUnit                      111	/* ���۵�λ */
#define BCESFieldIndexDailyPriceLimit                112	/* �ǵ�ͣ���� */
#define BCESFieldIndexFeeType                        113	/* ���������� */
#define BCESFieldIndexFeeRate                        114	/* �������� */
#define BCESFieldIndexPriceScale                     115	/* ���۾��� */
#define BCESFieldIndexMarginRate                     116	/* ��֤���� */
#define BCESFieldIndexHighLimit                      117	/* ��ͣ��� */
#define BCESFieldIndexLowLimit                       118	/* ��ͣ��� */
#define BCESFieldIndexBuyQtyFrozen                   119	/* �򶳽�ֲ��� */
#define BCESFieldIndexSellQtyFrozen                  120	/* ������ֲ��� */
#define BCESFieldIndexPosiDetailQueryReq             121	/* �ֲ���ϸ��ѯ���� */
#define BCESFieldIndexPosiDetail                     122	/* �ֲ���ϸ */
#define BCESFieldIndexPosiDetailList                 123	/* �ֲ���ϸ�б� */
#define BCESFieldIndexInstrumentName                 124	/* ��Լ���� */
#define BCESFieldIndexMinMovement                    125	/* �۸�䶯���� */
#define BCESFieldIndexPriceCoefficient               126	/* �۸�䶯���� */
#define BCESFieldIndexBuyQty                         127	/* ��ֲ��� */
#define BCESFieldIndexBuyPrice                       128	/* ��ֲ־��� */
#define BCESFieldIndexSellQty                        129	/* ���ֲ��� */
#define BCESFieldIndexSellPrice                      130	/* ���ֲ־��� */
#define BCESFieldIndexMinDataQueryReq                131	/* ���߲�ѯ���� */
#define BCESFieldIndexMinData                        132	/* ���� */
#define BCESFieldIndexDayDataQueryReq                133	/* ���߲�ѯ���� */
#define BCESFieldIndexDayData                        134	/* ���� */
#define BCESFieldIndexMinDataList                    135	/* �����б� */
#define BCESFieldIndexDayDataList                    136	/* �����б� */
#define BCESFieldIndexDateTimeFrom                   137	/* ��ʼ����ʱ�� */
#define BCESFieldIndexDateTimeTo                     138	/* ��������ʱ�� */
#define BCESFieldIndexDateFrom                       139	/* ��ʼ���� */
#define BCESFieldIndexDateTo                         140	/* �������� */
#define BCESFieldIndexDate                           141	/* ���� */
#define BCESFieldIndexTime                           142	/* ʱ�� */
#define BCESFieldIndexTimeFrom                       143	/* ��ʼʱ�� */
#define BCESFieldIndexTimeTo                         144	/* ����ʱ�� */
#define BCESFieldIndexDateTime                       145	/* ����ʱ�� */
#define BCESFieldIndexLimitedFilledPoints            146	/* ��С�ɽ����� */
#define BCESFieldIndexLimitedOrderPoints             147	/* ��С���۵�� */
#define BCESFieldIndexLimitedStopPoints              148	/* ��СֹӮֹ���� */
#define BCESFieldIndexProfitStopPrice                149	/* ֹӮ�� */
#define BCESFieldIndexLossStopPrice                  150	/* ֹ��� */
#define BCESFieldIndexProfitLossStopSetReq           151	/* ֹӮֹ���������� */
#define BCESFieldIndexProfitLossStopSetRsp           152	/* ֹӮֹ������Ӧ�� */
#define BCESFieldIndexFilledPoints                   153	/* �ɽ����� */
#define BCESFieldIndexCreateDate                     154	/* �������� */
#define BCESFieldIndexCreateTime                     155	/* ����ʱ�� */
#define BCESFieldIndexPublishDate                    156	/* �������� */
#define BCESFieldIndexPublishTime                    157	/* ����ʱ�� */
#define BCESFieldIndexBulletinQueryReq               158	/* ��ѯ�������� */
#define BCESFieldIndexBulletinList                   159	/* �����б� */
#define BCESFieldIndexBulletin                       160	/* ���� */
#define BCESFieldIndexPublishUserID                  161	/* ������ */
#define BCESFieldIndexBulletinID                     162	/* ������ */
#define BCESFieldIndexTitle                          163	/* ���� */
#define BCESFieldIndexContent                        164	/* ���� */
#define BCESFieldIndexNoticeID                       165	/* ֪ͨ��� */
#define BCESFieldIndexPublishMethod                  166	/* ������ʽ */
#define BCESFieldIndexNoticeList                     167	/* ֪ͨ�б� */
#define BCESFieldIndexNotice                         168	/* ֪ͨ */
#define BCESFieldIndexNoticeQueryReq                 169	/* ��ѯ֪ͨ���� */
#define BCESFieldIndexFundIODirection                170	/* ������� */
#define BCESFieldIndexFundIOStatus                   171	/* �����״̬ */
#define BCESFieldIndexCompleteDate                   172	/* ������� */
#define BCESFieldIndexCompleteTime                   173	/* ���ʱ�� */
#define BCESFieldIndexFundIOSeqno                    174	/* �������ˮ�� */
#define BCESFieldIndexFundIOStatusDesc               175	/* �����״̬���� */
#define BCESFieldIndexElectronicFundIOReq            176	/* ���ӳ�������� */
#define BCESFieldIndexElectronicFundIORsp            177	/* ���ӳ������Ӧ */
#define BCESFieldIndexPayURL                         178	/* ��ַ */
#define BCESFieldIndexPayDirection                   179	/* ֧������ */
#define BCESFieldIndexElectronicFundIONty            180	/* ���ӳ����֪ͨ */
#define BCESFieldIndexFundIOMethod                   181	/* �����ʽ */
#define BCESFieldIndexFundIODetail                   182	/* �������ϸ */
#define BCESFieldIndexFundIODetailList               183	/* �������ϸ�б� */
#define BCESFieldIndexFundIODetailQueryReq           184	/* �������ϸ��ѯ���� */
#define BCESFieldIndexReceiveBankID                  185	/* �տ��к� */
#define BCESFieldIndexReceiveAccountID               186	/* �տ��ʺ� */
#define BCESFieldIndexReceiveAccountName             187	/* �տ�� */
#define BCESFieldIndexReport                         188	/* ���� */
#define BCESFieldIndexReportList                     189	/* �����б� */
#define BCESFieldIndexReportQueryReq                 190	/* �����ѯ���� */
#define BCESFieldIndexReportData                     191	/* �������� */
#define BCESFieldIndexHisOrderQueryReq               192	/* ��ʷ������ѯ���� */
#define BCESFieldIndexHisTradeQueryReq               193	/* ��ʷ�ɽ���ѯ���� */
#define BCESFieldIndexHisBulletinQueryReq            194	/* ��ѯ��ʷ�������� */
#define BCESFieldIndexHisNoticeQueryReq              195	/* ��ѯ��ʷ֪ͨ���� */
#define BCESFieldIndexInvestorRanking                196	/* Ͷ�������� */
#define BCESFieldIndexInvestorRankingList            197	/* Ͷ���������б� */
#define BCESFieldIndexInvestorRankingQueryReq        198	/* Ͷ����������ѯ���� */
#define BCESFieldIndexInvestorRankingQueryRsp        199	/* Ͷ����������ѯӦ�� */
#define BCESFieldIndexRankingNum                     200	/* ���� */
#define BCESFieldIndexInvestorName                   201	/* Ͷ�������� */
#define BCESFieldIndexTradeSettings                  202	/* �������� */
#define BCESFieldIndexTradeSettingsList              203	/* ���������б� */
#define BCESFieldIndexTradeSettingsAddReq            204	/* ���������������� */
#define BCESFieldIndexTradeSettingsAddRsp            205	/* ������������Ӧ�� */
#define BCESFieldIndexTradeSettingsModifyReq         206	/* ���������޸����� */
#define BCESFieldIndexTradeSettingsModifyRsp         207	/* ���������޸�Ӧ�� */
#define BCESFieldIndexTradeSettingsDeleteReq         208	/* ��������ɾ������ */
#define BCESFieldIndexTradeSettingsDeleteRsp         209	/* ��������ɾ��Ӧ�� */
#define BCESFieldIndexTradeSettingsQueryReq          210	/* �������ò�ѯ���� */
#define BCESFieldIndexTradeAction                    211	/* ������Ϊ */
#define BCESFieldIndexAddress                        212	/* ���� */
#define BCESFieldIndexWareHouse                      213	/* �ֿ� */
#define BCESFieldIndexCurrency                       214	/* ���� */
#define BCESFieldIndexAccountBind                    215	/* ǩԼ��Ϣ */
#define BCESFieldIndexAccountBindList                216	/* ǩԼ��Ϣ�б� */
#define BCESFieldIndexAccountBindQueryReq            217	/* ǩԼ��Ϣ��ѯ���� */
#define BCESFieldIndexAccountBindReq                 218	/* ǩԼ���� */
#define BCESFieldIndexAccountBindRsp                 219	/* ǩԼӦ�� */
#define BCESFieldIndexCloseDate                      220	/* ƽ������ */
#define BCESFieldIndexCloseTime                      221	/* ƽ��ʱ�� */
#define BCESFieldIndexOverNightFee                   222	/* ��ҹ�� */
#define BCESFieldIndexAgentName                      223	/* ���������� */
#define BCESFieldIndexInAmount                       224	/* ����� */
#define BCESFieldIndexOutAmount                      225	/* ������ */
#define BCESFieldIndexFundList                       226	/* �ʽ��б� */
#define BCESFieldIndexSysName                        227	/* ϵͳ���� */
#define BCESFieldIndexErrNetTradeSec                 228	/* ������ϳɽ��ӳ� */
#define BCESFieldIndexErrNetRemindSec                229	/* ������������ӳ� */
#define BCESFieldIndexErrNetRemindTxt                230	/* �������������Ϣ */
#define BCESFieldIndexErrSeverTradePort              231	/* ���������ϳɽ���� */
#define BCESFieldIndexErrSeverRemindPort             232	/* �������������ѵ�� */
#define BCESFieldIndexErrSeverRemindTxt              233	/* ����������������Ϣ */
#define BCESFieldIndexTestSettingsModifyReq          234	/* ���������޸����� */
#define BCESFieldIndexTestSettingsModifyRsp          235	/* ���������޸�Ӧ�� */
#define BCESFieldIndexMarginRateType                 236	/* ��֤�������� */
#define BCESFieldIndexOverNightFeeType               237	/* ��ҹ������ */
#define BCESFieldIndexFeeFlag                        238	/* �շ����� */
#define BCESFieldIndexPriceMultiply                  239	/* ���۳��� */
#define BCESFieldIndexEachQtyLimt                    240	/* ÿ�ʳֲ����� */
#define BCESFieldIndexTotalQtyLimt                   241	/* �ֲܳ����� */
#define BCESFieldIndexUserID                         242	/* ����Ա�� */
#define BCESFieldIndexBidPrice2                      243	/* �����2 */
#define BCESFieldIndexAskPrice2                      244	/* ������2 */
#define BCESFieldIndexBidQty2                        245	/* ������2 */
#define BCESFieldIndexAskQty2                        246	/* ������2 */
#define BCESFieldIndexBidPrice3                      247	/* �����3 */
#define BCESFieldIndexAskPrice3                      248	/* ������3 */
#define BCESFieldIndexBidQty3                        249	/* ������3 */
#define BCESFieldIndexAskQty3                        250	/* ������3 */
#define BCESFieldIndexBidPrice4                      251	/* �����4 */
#define BCESFieldIndexAskPrice4                      252	/* ������4 */
#define BCESFieldIndexBidQty4                        253	/* ������4 */
#define BCESFieldIndexAskQty4                        254	/* ������4 */
#define BCESFieldIndexBidPrice5                      255	/* �����5 */
#define BCESFieldIndexAskPrice5                      256	/* ������5 */
#define BCESFieldIndexBidQty5                        257	/* ������5 */
#define BCESFieldIndexAskQty5                        258	/* ������5 */
#define BCESFieldIndexSysMode                        259	/* ϵͳģʽ */
#define BCESFieldIndexQtyFrozen                      260	/* ����ֲ��� */
#define BCESFieldIndexBidPrice6                      261	/* �����6 */
#define BCESFieldIndexAskPrice6                      262	/* ������6 */
#define BCESFieldIndexBidQty6                        263	/* ������6 */
#define BCESFieldIndexAskQty6                        264	/* ������6 */
#define BCESFieldIndexBidPrice7                      265	/* �����7 */
#define BCESFieldIndexAskPrice7                      266	/* ������7 */
#define BCESFieldIndexBidQty7                        267	/* ������7 */
#define BCESFieldIndexAskQty7                        268	/* ������7 */
#define BCESFieldIndexBidPrice8                      269	/* �����8 */
#define BCESFieldIndexAskPrice8                      270	/* ������8 */
#define BCESFieldIndexBidQty8                        271	/* ������8 */
#define BCESFieldIndexAskQty8                        272	/* ������8 */
#define BCESFieldIndexBidPrice9                      273	/* �����9 */
#define BCESFieldIndexAskPrice9                      274	/* ������9 */
#define BCESFieldIndexBidQty9                        275	/* ������9 */
#define BCESFieldIndexAskQty9                        276	/* ������9 */
#define BCESFieldIndexBidPrice10                     277	/* �����10 */
#define BCESFieldIndexAskPrice10                     278	/* ������10 */
#define BCESFieldIndexBidQty10                       279	/* ������10 */
#define BCESFieldIndexAskQty10                       280	/* ������10 */
#define BCESFieldIndexIP                             281	/* IP��ַ */
#define BCESFieldIndexTopInvestorQueryReq            282	/* �ҵ���������ѯ���� */
#define BCESFieldIndexTopInvestor                    283	/* �ҵ������� */
#define BCESFieldIndexTopInvestorList                284	/* �ҵ��������б� */
#define BCESFieldIndexInvestorQuotQueryReq           285	/* Ͷ���߹ҵ���ѯ���� */
#define BCESFieldIndexInvestorQuot                   286	/* �ҵ������� */
#define BCESFieldIndexInvestorQuotList               287	/* �ҵ��������б� */
#define BCESFieldIndexRankingInvestorID              288	/* ����Ͷ���ߺ� */
#define BCESFieldIndexConditionType                  289	/* �������� */
#define BCESFieldIndexConditionMethod                290	/* �������� */
#define BCESFieldIndexConditionPrice                 291	/* �����۸� */
#define BCESFieldIndexGoodsName                      292	/* Ʒ�ִ��� */
#define BCESFieldIndexTradeTime                      293	/* ����ʱ�� */
#define BCESFieldIndexTimeBegin                      294	/* ��ʼʱ�� */
#define BCESFieldIndexTimeEnd                        295	/* ����ʱ�� */
#define BCESFieldIndexReceiveBranchName              296	/* ֧������ */
#define BCESFieldIndexReceiveProvice                 297	/* ����ʡ�� */
#define BCESFieldIndexReceiveCity                    298	/* ������ */
#define BCESFieldIndexAccountBindStatus              299	/* ǩԼ״̬ */
#define BCESFieldIndexAccountBindURL                 300	/* ��ַ */
#define BCESFieldIndexAccountBindStatusDesc          301	/* ǩԼ״̬���� */
#define BCESFieldIndexProductType                    302	/* ��Ʒ��� */
#define BCESFieldIndexProductVersion                 303	/* ��Ʒ�汾�� */
#define BCESFieldIndexDeliveryDemand                 304	/* ���ս������� */
#define BCESFieldIndexCompanyName                    305	/* ��ҵ���� */
#define BCESFieldIndexLiaisonName                    306	/* ��ϵ������ */
#define BCESFieldIndexLiaisonNumber                  307	/* ��ϵ�绰 */
#define BCESFieldIndexLiaisonAddress                 308	/* ��ϵ��ַ */
#define BCESFieldIndexGuaranteedQty                  309	/* �������� */
#define BCESFieldIndexGeneralQty                     310	/* һ������ */
#define BCESFieldIndexRiskQty                        311	/* �������� */
#define BCESFieldIndexBankName                       312	/* �������� */
#define BCESFieldIndexInvoiceTitle                   313	/* ��Ʊ̧ͷ */
#define BCESFieldIndexDeliveryDemandID               314	/* ���ս����� */
#define BCESFieldIndexDeliveryStatus                 315	/* ���ս���״̬ */
#define BCESFieldIndexDeliveryDemandQueryReq         316	/* ���ս����������� */
#define BCESFieldIndexDeliveryDemandQueryRsp         317	/* ���ս�������Ӧ�� */
#define BCESFieldIndexInvoiceFlag                    318	/* ��Ʊ��ʶ */
#define BCESFieldIndexInvoiceType                    319	/* ��Ʊ���� */
#define BCESFieldIndexCredentialType                 320	/* ֤������ */
#define BCESFieldIndexCredentialNo                   321	/* ֤���� */
#define BCESFieldIndexEmail                          322	/* �������� */
#define BCESFieldIndexPostCode                       323	/* �ʱ� */
#define BCESFieldIndexBankAccountID                  324	/* �����ʺ� */
#define BCESFieldIndexBankNameAccountID              325	/* ���л������˺� */
#define BCESFieldIndexDeliveryApplyID                326	/* ���ս��������� */
#define BCESFieldIndexDeliveryAddress                327	/* ���ս����ַ */
#define BCESFieldIndexApplyDate                      328	/* �������� */
#define BCESFieldIndexVerifedDate                    329	/* ȷ������ */
#define BCESFieldIndexCompletedDate                  330	/* �ɽ����� */
#define BCESFieldIndexCompanyAddress                 331	/* ��˾��ַ */
#define BCESFieldIndexTaxNo                          332	/* ˰��ǼǺ� */
#define BCESFieldIndexInvoice                        333	/* ��Ʊ */
#define BCESFieldIndexDeliveryApplyAddReq            334	/* ���ս��������������� */
#define BCESFieldIndexDeliveryApplyAddRsp            335	/* ���ս�����������Ӧ�� */
#define BCESFieldIndexDeliveryApplyModifyReq         336	/* ���ս��������޸����� */
#define BCESFieldIndexDeliveryApplyModifyRsp         337	/* ���ս��������޸�Ӧ�� */
#define BCESFieldIndexDeliveryApply                  338	/* ���ս������� */
#define BCESFieldIndexDeliveryApplyQueryReq          339	/* ���ս��������ѯ���� */
#define BCESFieldIndexDeliveryApplyQueryRsp          340	/* ���ս��������ѯӦ�� */
#define BCESFieldIndexDeliveryApplyList              341	/* ���ս��������б� */
#define BCESFieldIndexDeliveryApplyDeleteReq         342	/* ���ս�������ɾ������ */
#define BCESFieldIndexDeliveryApplyDeleteRsp         343	/* ���ս�������ɾ��Ӧ�� */
#define BCESFieldIndexPayServerType                  344	/* ֧���������� */
#define BCESFieldIndexTradeDetailDataQueryReq        345	/* �ɽ���ϸ��ѯ���� */
#define BCESFieldIndexCompanyNumber                  346	/* ��˾�绰 */
#define BCESFieldIndexTradeDetailDataList            347	/* �ɽ���ϸ�б� */
#define BCESFieldIndexAdviserID                      348	/* ���ʺ� */
#define BCESFieldIndexQuestionContent                349	/* �������� */
#define BCESFieldIndexQuestionDate                   350	/* �������� */
#define BCESFieldIndexQuestionTime                   351	/* ����ʱ�� */
#define BCESFieldIndexAnswerContent                  352	/* �ش����� */
#define BCESFieldIndexAnswerDate                     353	/* �ش����� */
#define BCESFieldIndexAnswerTime                     354	/* �ش�ʱ�� */
#define BCESFieldIndexQuestionID                     355	/* ���ʱ�� */
#define BCESFieldIndexQuesAnswFlag                   356	/* ����/�ش��־ */
#define BCESFieldIndexQuesAnswContent                357	/* ����/�ش����� */
#define BCESFieldIndexQuesAnswDate                   358	/* ����/�ش����� */
#define BCESFieldIndexQuesAnswTime                   359	/* ����/�ش�ʱ�� */
#define BCESFieldIndexInvestorAdviserFlag            360	/* Ͷ���߹��ʱ�־ */
#define BCESFieldIndexQuotAdviserQuesAnswReq         361	/* �����������/�ش����� */
#define BCESFieldIndexQuotAdviserQuesAnswRsp         362	/* �����������/�ش�Ӧ�� */
#define BCESFieldIndexQuotAdviserQuesHisQueryReq     363	/* �������������ʷ��ѯ���� */
#define BCESFieldIndexQuotAdviserQuesHisQueryRsp     364	/* �������������ʷ��ѯӦ�� */
#define BCESFieldIndexQuotAdviserQuesHisList         365	/* �������������ʷ��ѯ�б� */
#define BCESFieldIndexQuotAdviserQuesQueryReq        366	/* ����������ʲ�ѯ���� */
#define BCESFieldIndexQuotAdviserQuesQueryRsp        367	/* ����������ʲ�ѯӦ�� */
#define BCESFieldIndexQuotAdviserQuesQuerylist       368	/* ����������ʲ�ѯ�б� */
#define BCESFieldIndexPlateName                      369	/* ��� */
#define BCESFieldIndexPreBuyQty                      370	/* ����ֲ��� */
#define BCESFieldIndexPreSellQty                     371	/* �����ֲ��� */
#define BCESFieldIndexTodayBuyQty                    372	/* ����ֲ��� */
#define BCESFieldIndexTodaySellQty                   373	/* �����ֲ��� */
#define BCESFieldIndexTodayBuyQtyFrozen              374	/* ���򶳽�ֲ��� */
#define BCESFieldIndexTodaySellQtyFrozen             375	/* ��������ֲ��� */
#define BCESFieldIndexExchangeID                     376	/* �������� */
#define BCESFieldIndexSessionID                      377	/* �Ự��� */
#define BCESFieldIndexOrderRef                       378	/* �������� */
#define BCESFieldIndexCreatePrice                    379	/* ���ּ� */
#define BCESFieldIndexHistoryClosedPL                380	/* ��ʷƽ��ӯ�� */
#define BCESFieldIndexInvestorRole                   381	/* Ͷ���߽�ɫ */
#define BCESFieldIndexInvestorFlag                   382	/* Ͷ���߱�־ */
#define BCESFieldIndexPaySeqno                       383	/* ֧����ˮ�� */
#define BCESFieldIndexPreQtyLeft                     384	/* ����ʣ������ */
#define BCESFieldIndexCreateTradeDate                385	/* ���ֽ������� */
#define BCESFieldIndexClosedTradeDate                386	/* ƽ�ֽ������� */
#define BCESFieldIndexClosedOrderID                  387	/* ƽ�ֶ����� */
#define BCESFieldIndexClosedMatchID                  388	/* ƽ�ֳɽ��� */
#define BCESFieldIndexAccountID                      389	/* �����˺� */
#define BCESFieldIndexOrderStatusDesc                390	/* ״̬˵�� */
#define BCESFieldIndexOrderSysID                     391	/* ������������� */
#define BCESFieldIndexCTPSessionID                   392	/* �Ự��� */
#define BCESFieldIndexCTPFrontID                     393	/* ǰ�ñ�� */
#define BCESFieldIndexCTPOrderRef                    394	/* �������� */
#define BCESFieldIndexCloseFeeRate                   395	/* ƽ���������� */
#define BCESFieldIndexCloseTodayFeeRate              396	/* ƽ����������� */
#define BCESFieldIndexStampRate                      397	/* ӡ��˰���� */
#define BCESFieldIndexKLineType                      398	/* K������ */
#define BCESFieldIndexKLineQueryReq                  399	/* K�߲�ѯ���� */
#define BCESFieldIndexKLineList                      400	/* K���б� */
#define BCESFieldIndexTickLineQueryReq               401	/* Tick�߲�ѯ���� */
#define BCESFieldIndexTickLineList                   402	/* Tick���б� */
#define BCESFieldIndexBarFrom                        403	/* ��ʼBar */
#define BCESFieldIndexBarCount                       404	/* Bar���� */
#define BCESFieldIndexAccountList                    405	/* �����˻��б� */
#define BCESFieldIndexAccount                        406	/* �����˻� */
#define BCESFieldIndexExchangeList                   407	/* �������б� */
#define BCESFieldIndexExchange                       408	/* ������ */
#define BCESFieldIndexPreClosedPL                    409	/* ����ƽ��ӯ�� */
#define BCESFieldIndexPreClosePrice                  410	/* ����ƽ�ּ� */

/* Field Define */

/* ����ͷ */
class CBCESFieldHead:public CBMLField
{
public:
	CBCESFieldHead(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHead;
		
	}
	
};
/* ������ */
class CBCESFieldBody:public CBMLField
{
public:
	CBCESFieldBody(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBody;
		
	}
	
};
/* ����� */
class CBCESFieldFlowID:public CBMLField
{
public:
	CBCESFieldFlowID(){
		m_dat=(void*)&FlowID;
		m_siz=sizeof(FlowID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFlowID;
		memset(&FlowID,0x00,sizeof(FlowID));	/* ����� */
	}
	BCESFieldTypeFlowID FlowID;	/* ����� */
};
/* ������ */
class CBCESFieldRequestID:public CBMLField
{
public:
	CBCESFieldRequestID(){
		m_dat=(void*)&RequestID;
		m_siz=sizeof(RequestID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexRequestID;
		memset(&RequestID,0x00,sizeof(RequestID));	/* ������ */
	}
	BCESFieldTypeRequestID RequestID;	/* ������ */
};
/* ������� */
class CBCESFieldEndFlag:public CBMLField
{
public:
	CBCESFieldEndFlag(){
		m_dat=(void*)&EndFlag;
		m_siz=sizeof(EndFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexEndFlag;
		memset(&EndFlag,0x00,sizeof(EndFlag));	/* ������� */
	}
	BCESFieldTypeEndFlag EndFlag;	/* ������� */
};
/* ���ı�� */
class CBCESFieldPkgNo:public CBMLField
{
public:
	CBCESFieldPkgNo(){
		m_dat=(void*)&PkgNo;
		m_siz=sizeof(PkgNo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPkgNo;
		memset(&PkgNo,0x00,sizeof(PkgNo));	/* ���ı�� */
	}
	BCESFieldTypePkgNo PkgNo;	/* ���ı�� */
};
/* ָ����� */
class CBCESFieldServiceNo:public CBMLField
{
public:
	CBCESFieldServiceNo(){
		m_dat=(void*)&ServiceNo;
		m_siz=sizeof(ServiceNo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexServiceNo;
		memset(&ServiceNo,0x00,sizeof(ServiceNo));	/* ָ����� */
	}
	BCESFieldTypeServiceNo ServiceNo;	/* ָ����� */
};
/* API����ͷ */
class CBCESFieldApiHead:public CBMLField
{
public:
	CBCESFieldApiHead(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexApiHead;
		
	}
	
};
/* API������ */
class CBCESFieldApiBody:public CBMLField
{
public:
	CBCESFieldApiBody(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexApiBody;
		
	}
	
};
/* ���������� */
class CBCESFieldFlowSubscribeReq:public CBMLField
{
public:
	CBCESFieldFlowSubscribeReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFlowSubscribeReq;
		
	}
	
};
/* �����������б� */
class CBCESFieldFlowSubscribeReqList:public CBMLField
{
public:
	CBCESFieldFlowSubscribeReqList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFlowSubscribeReqList;
		
	}
	
};
/* ������Ӧ�� */
class CBCESFieldFlowSubscribeRsp:public CBMLField
{
public:
	CBCESFieldFlowSubscribeRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFlowSubscribeRsp;
		
	}
	
};
/* ������Ӧ���б� */
class CBCESFieldFlowSubscribeRspList:public CBMLField
{
public:
	CBCESFieldFlowSubscribeRspList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFlowSubscribeRspList;
		
	}
	
};
/* ���鶩������ */
class CBCESFieldQuotSubscribeReq:public CBMLField
{
public:
	CBCESFieldQuotSubscribeReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotSubscribeReq;
		
	}
	
};
/* ���鶩��Ӧ�� */
class CBCESFieldQuotSubscribeRsp:public CBMLField
{
public:
	CBCESFieldQuotSubscribeRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotSubscribeRsp;
		
	}
	
};
/* �����˶����� */
class CBCESFieldQuotUnSubscribeReq:public CBMLField
{
public:
	CBCESFieldQuotUnSubscribeReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotUnSubscribeReq;
		
	}
	
};
/* �����˶�Ӧ�� */
class CBCESFieldQuotUnSubscribeRsp:public CBMLField
{
public:
	CBCESFieldQuotUnSubscribeRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotUnSubscribeRsp;
		
	}
	
};
/* ���ݲ�����Ҫ */
class CBCESFieldDBOperateSummary:public CBMLField
{
public:
	CBCESFieldDBOperateSummary(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDBOperateSummary;
		
	}
	
};
/* ���ݲ����б� */
class CBCESFieldDBOperateList:public CBMLField
{
public:
	CBCESFieldDBOperateList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDBOperateList;
		
	}
	
};
/* ���� */
class CBCESFieldTableName:public CBMLField
{
public:
	CBCESFieldTableName(){
		m_dat=(void*)TableName;
		m_siz=sizeof(TableName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTableName;
		memset(TableName,0x00,sizeof(TableName));	/* ���� */
	}
	BCESFieldTypeTableName TableName;	/* ���� */
};
/* ����� */
class CBCESFieldTableOperation:public CBMLField
{
public:
	CBCESFieldTableOperation(){
		m_dat=(void*)&TableOperation;
		m_siz=sizeof(TableOperation);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTableOperation;
		memset(&TableOperation,0x00,sizeof(TableOperation));	/* ����� */
	}
	BCESFieldTypeTableOperation TableOperation;	/* ����� */
};
/* Ӧ����Ϣ�� */
class CBCESFieldRspInfo:public CBMLField
{
public:
	CBCESFieldRspInfo(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexRspInfo;
		
	}
	
};
/* Ӧ����� */
class CBCESFieldRspNo:public CBMLField
{
public:
	CBCESFieldRspNo(){
		m_dat=(void*)&RspNo;
		m_siz=sizeof(RspNo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexRspNo;
		memset(&RspNo,0x00,sizeof(RspNo));	/* Ӧ����� */
	}
	BCESFieldTypeRspNo RspNo;	/* Ӧ����� */
};
/* Ӧ������ */
class CBCESFieldRspDesc:public CBMLField
{
public:
	CBCESFieldRspDesc(){
		m_dat=(void*)RspDesc;
		m_siz=sizeof(RspDesc);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexRspDesc;
		memset(RspDesc,0x00,sizeof(RspDesc));	/* Ӧ������ */
	}
	BCESFieldTypeRspDesc RspDesc;	/* Ӧ������ */
};
/* ��¼���� */
class CBCESFieldLoginReq:public CBMLField
{
public:
	CBCESFieldLoginReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLoginReq;
		
	}
	
};
/* ��¼Ӧ�� */
class CBCESFieldLoginRsp:public CBMLField
{
public:
	CBCESFieldLoginRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLoginRsp;
		
	}
	
};
/* Ͷ���ߺ� */
class CBCESFieldInvestorID:public CBMLField
{
public:
	CBCESFieldInvestorID(){
		m_dat=(void*)InvestorID;
		m_siz=sizeof(InvestorID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorID;
		memset(InvestorID,0x00,sizeof(InvestorID));	/* Ͷ���ߺ� */
	}
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};
/* Ͷ�������� */
class CBCESFieldInvestorPassword:public CBMLField
{
public:
	CBCESFieldInvestorPassword(){
		m_dat=(void*)InvestorPassword;
		m_siz=sizeof(InvestorPassword);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorPassword;
		memset(InvestorPassword,0x00,sizeof(InvestorPassword));	/* Ͷ�������� */
	}
	BCESFieldTypePassword InvestorPassword;	/* Ͷ�������� */
};
/* �ǳ����� */
class CBCESFieldLogoutReq:public CBMLField
{
public:
	CBCESFieldLogoutReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLogoutReq;
		
	}
	
};
/* �ǳ�Ӧ�� */
class CBCESFieldLogoutRsp:public CBMLField
{
public:
	CBCESFieldLogoutRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLogoutRsp;
		
	}
	
};
/* �޸��������� */
class CBCESFieldChangePasswordReq:public CBMLField
{
public:
	CBCESFieldChangePasswordReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexChangePasswordReq;
		
	}
	
};
/* �޸�����Ӧ�� */
class CBCESFieldChangePasswordRsp:public CBMLField
{
public:
	CBCESFieldChangePasswordRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexChangePasswordRsp;
		
	}
	
};
/* Ͷ���߾����� */
class CBCESFieldInvestorOldPassword:public CBMLField
{
public:
	CBCESFieldInvestorOldPassword(){
		m_dat=(void*)InvestorOldPassword;
		m_siz=sizeof(InvestorOldPassword);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorOldPassword;
		memset(InvestorOldPassword,0x00,sizeof(InvestorOldPassword));	/* Ͷ���߾����� */
	}
	BCESFieldTypePassword InvestorOldPassword;	/* Ͷ���߾����� */
};
/* Ͷ���������� */
class CBCESFieldInvestorNewPassword:public CBMLField
{
public:
	CBCESFieldInvestorNewPassword(){
		m_dat=(void*)InvestorNewPassword;
		m_siz=sizeof(InvestorNewPassword);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorNewPassword;
		memset(InvestorNewPassword,0x00,sizeof(InvestorNewPassword));	/* Ͷ���������� */
	}
	BCESFieldTypePassword InvestorNewPassword;	/* Ͷ���������� */
};
/* ����¼�� */
class CBCESFieldInputOrder:public CBMLField
{
public:
	CBCESFieldInputOrder(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInputOrder;
		
	}
	
};
/* ������־ */
class CBCESFieldBSFlag:public CBMLField
{
public:
	CBCESFieldBSFlag(){
		m_dat=(void*)&BSFlag;
		m_siz=sizeof(BSFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBSFlag;
		memset(&BSFlag,0x00,sizeof(BSFlag));	/* ������־ */
	}
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};
/* ��Լ�� */
class CBCESFieldInstrumentID:public CBMLField
{
public:
	CBCESFieldInstrumentID(){
		m_dat=(void*)InstrumentID;
		m_siz=sizeof(InstrumentID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInstrumentID;
		memset(InstrumentID,0x00,sizeof(InstrumentID));	/* ��Լ�� */
	}
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};
/* �۸� */
class CBCESFieldPrice:public CBMLField
{
public:
	CBCESFieldPrice(){
		m_dat=(void*)&Price;
		m_siz=sizeof(Price);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPrice;
		memset(&Price,0x00,sizeof(Price));	/* �۸� */
	}
	BCESFieldTypePrice Price;	/* �۸� */
};
/* ���� */
class CBCESFieldQty:public CBMLField
{
public:
	CBCESFieldQty(){
		m_dat=(void*)&Qty;
		m_siz=sizeof(Qty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQty;
		memset(&Qty,0x00,sizeof(Qty));	/* ���� */
	}
	BCESFieldTypeQty Qty;	/* ���� */
};
/* ��ƽ��־ */
class CBCESFieldOCFlag:public CBMLField
{
public:
	CBCESFieldOCFlag(){
		m_dat=(void*)&OCFlag;
		m_siz=sizeof(OCFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOCFlag;
		memset(&OCFlag,0x00,sizeof(OCFlag));	/* ��ƽ��־ */
	}
	BCESFieldTypeFlag OCFlag;	/* ��ƽ��־ */
};
/* �������� */
class CBCESFieldOrderDate:public CBMLField
{
public:
	CBCESFieldOrderDate(){
		m_dat=(void*)OrderDate;
		m_siz=sizeof(OrderDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderDate;
		memset(OrderDate,0x00,sizeof(OrderDate));	/* �������� */
	}
	BCESFieldTypeDate OrderDate;	/* �������� */
};
/* ������ */
class CBCESFieldOrderID:public CBMLField
{
public:
	CBCESFieldOrderID(){
		m_dat=(void*)OrderID;
		m_siz=sizeof(OrderID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderID;
		memset(OrderID,0x00,sizeof(OrderID));	/* ������ */
	}
	BCESFieldTypeOrderID OrderID;	/* ������ */
};
/* �۸����� */
class CBCESFieldPriceType:public CBMLField
{
public:
	CBCESFieldPriceType(){
		m_dat=(void*)&PriceType;
		m_siz=sizeof(PriceType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPriceType;
		memset(&PriceType,0x00,sizeof(PriceType));	/* �۸����� */
	}
	BCESFieldTypeFlag PriceType;	/* �۸����� */
};
/* ����ʱ�� */
class CBCESFieldOrderTime:public CBMLField
{
public:
	CBCESFieldOrderTime(){
		m_dat=(void*)OrderTime;
		m_siz=sizeof(OrderTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderTime;
		memset(OrderTime,0x00,sizeof(OrderTime));	/* ����ʱ�� */
	}
	BCESFieldTypeTime OrderTime;	/* ����ʱ�� */
};
/* ʣ������ */
class CBCESFieldQtyLeft:public CBMLField
{
public:
	CBCESFieldQtyLeft(){
		m_dat=(void*)&QtyLeft;
		m_siz=sizeof(QtyLeft);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQtyLeft;
		memset(&QtyLeft,0x00,sizeof(QtyLeft));	/* ʣ������ */
	}
	BCESFieldTypeQty QtyLeft;	/* ʣ������ */
};
/* �޸����� */
class CBCESFieldModifyDate:public CBMLField
{
public:
	CBCESFieldModifyDate(){
		m_dat=(void*)ModifyDate;
		m_siz=sizeof(ModifyDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexModifyDate;
		memset(ModifyDate,0x00,sizeof(ModifyDate));	/* �޸����� */
	}
	BCESFieldTypeDate ModifyDate;	/* �޸����� */
};
/* �޸�ʱ�� */
class CBCESFieldModifyTime:public CBMLField
{
public:
	CBCESFieldModifyTime(){
		m_dat=(void*)ModifyTime;
		m_siz=sizeof(ModifyTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexModifyTime;
		memset(ModifyTime,0x00,sizeof(ModifyTime));	/* �޸�ʱ�� */
	}
	BCESFieldTypeTime ModifyTime;	/* �޸�ʱ�� */
};
/* ����״̬ */
class CBCESFieldOrderStatus:public CBMLField
{
public:
	CBCESFieldOrderStatus(){
		m_dat=(void*)&OrderStatus;
		m_siz=sizeof(OrderStatus);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderStatus;
		memset(&OrderStatus,0x00,sizeof(OrderStatus));	/* ����״̬ */
	}
	BCESFieldTypeFlag OrderStatus;	/* ����״̬ */
};
/* �������� */
class CBCESFieldOrderCancelReq:public CBMLField
{
public:
	CBCESFieldOrderCancelReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderCancelReq;
		
	}
	
};
/* ����Ӧ�� */
class CBCESFieldOrderCancelRsp:public CBMLField
{
public:
	CBCESFieldOrderCancelRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderCancelRsp;
		
	}
	
};
/* ��Լ���� */
class CBCESFieldInstrumentType:public CBMLField
{
public:
	CBCESFieldInstrumentType(){
		m_dat=(void*)&InstrumentType;
		m_siz=sizeof(InstrumentType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInstrumentType;
		memset(&InstrumentType,0x00,sizeof(InstrumentType));	/* ��Լ���� */
	}
	BCESFieldTypeFlag InstrumentType;	/* ��Լ���� */
};
/* �ɽ����� */
class CBCESFieldMatchDate:public CBMLField
{
public:
	CBCESFieldMatchDate(){
		m_dat=(void*)MatchDate;
		m_siz=sizeof(MatchDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMatchDate;
		memset(MatchDate,0x00,sizeof(MatchDate));	/* �ɽ����� */
	}
	BCESFieldTypeDate MatchDate;	/* �ɽ����� */
};
/* �ɽ�ʱ�� */
class CBCESFieldMatchTime:public CBMLField
{
public:
	CBCESFieldMatchTime(){
		m_dat=(void*)MatchTime;
		m_siz=sizeof(MatchTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMatchTime;
		memset(MatchTime,0x00,sizeof(MatchTime));	/* �ɽ�ʱ�� */
	}
	BCESFieldTypeTime MatchTime;	/* �ɽ�ʱ�� */
};
/* �ɽ��� */
class CBCESFieldMatchID:public CBMLField
{
public:
	CBCESFieldMatchID(){
		m_dat=(void*)MatchID;
		m_siz=sizeof(MatchID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMatchID;
		memset(MatchID,0x00,sizeof(MatchID));	/* �ɽ��� */
	}
	BCESFieldTypeMatchID MatchID;	/* �ɽ��� */
};
/* �ֲֺ� */
class CBCESFieldPosiID:public CBMLField
{
public:
	CBCESFieldPosiID(){
		m_dat=(void*)PosiID;
		m_siz=sizeof(PosiID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPosiID;
		memset(PosiID,0x00,sizeof(PosiID));	/* �ֲֺ� */
	}
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
};
/* �������� */
class CBCESFieldTradeDate:public CBMLField
{
public:
	CBCESFieldTradeDate(){
		m_dat=(void*)TradeDate;
		m_siz=sizeof(TradeDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeDate;
		memset(TradeDate,0x00,sizeof(TradeDate));	/* �������� */
	}
	BCESFieldTypeDate TradeDate;	/* �������� */
};
/* ����� */
class CBCESFieldBidPrice:public CBMLField
{
public:
	CBCESFieldBidPrice(){
		m_dat=(void*)&BidPrice;
		m_siz=sizeof(BidPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice;
		memset(&BidPrice,0x00,sizeof(BidPrice));	/* ����� */
	}
	BCESFieldTypePrice BidPrice;	/* ����� */
};
/* ������ */
class CBCESFieldAskPrice:public CBMLField
{
public:
	CBCESFieldAskPrice(){
		m_dat=(void*)&AskPrice;
		m_siz=sizeof(AskPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice;
		memset(&AskPrice,0x00,sizeof(AskPrice));	/* ������ */
	}
	BCESFieldTypePrice AskPrice;	/* ������ */
};
/* ������ */
class CBCESFieldPreSettle:public CBMLField
{
public:
	CBCESFieldPreSettle(){
		m_dat=(void*)&PreSettle;
		m_siz=sizeof(PreSettle);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreSettle;
		memset(&PreSettle,0x00,sizeof(PreSettle));	/* ������ */
	}
	BCESFieldTypePrice PreSettle;	/* ������ */
};
/* ��ֲ��� */
class CBCESFieldPreOI:public CBMLField
{
public:
	CBCESFieldPreOI(){
		m_dat=(void*)&PreOI;
		m_siz=sizeof(PreOI);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreOI;
		memset(&PreOI,0x00,sizeof(PreOI));	/* ��ֲ��� */
	}
	BCESFieldTypeQtyTotal PreOI;	/* ��ֲ��� */
};
/* �ɽ��� */
class CBCESFieldQtyTotal:public CBMLField
{
public:
	CBCESFieldQtyTotal(){
		m_dat=(void*)&QtyTotal;
		m_siz=sizeof(QtyTotal);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQtyTotal;
		memset(&QtyTotal,0x00,sizeof(QtyTotal));	/* �ɽ��� */
	}
	BCESFieldTypeQtyTotal QtyTotal;	/* �ɽ��� */
};
/* �ֲ��� */
class CBCESFieldOI:public CBMLField
{
public:
	CBCESFieldOI(){
		m_dat=(void*)&OI;
		m_siz=sizeof(OI);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOI;
		memset(&OI,0x00,sizeof(OI));	/* �ֲ��� */
	}
	BCESFieldTypeQtyTotal OI;	/* �ֲ��� */
};
/* �ɽ���� */
class CBCESFieldAmount:public CBMLField
{
public:
	CBCESFieldAmount(){
		m_dat=(void*)&Amount;
		m_siz=sizeof(Amount);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAmount;
		memset(&Amount,0x00,sizeof(Amount));	/* �ɽ���� */
	}
	BCESFieldTypeAmount Amount;	/* �ɽ���� */
};
/* ���� */
class CBCESFieldAvgPrice:public CBMLField
{
public:
	CBCESFieldAvgPrice(){
		m_dat=(void*)&AvgPrice;
		m_siz=sizeof(AvgPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAvgPrice;
		memset(&AvgPrice,0x00,sizeof(AvgPrice));	/* ���� */
	}
	BCESFieldTypePrice AvgPrice;	/* ���� */
};
/* ����� */
class CBCESFieldSettlePrice:public CBMLField
{
public:
	CBCESFieldSettlePrice(){
		m_dat=(void*)&SettlePrice;
		m_siz=sizeof(SettlePrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexSettlePrice;
		memset(&SettlePrice,0x00,sizeof(SettlePrice));	/* ����� */
	}
	BCESFieldTypePrice SettlePrice;	/* ����� */
};
/* �����̼� */
class CBCESFieldPreClose:public CBMLField
{
public:
	CBCESFieldPreClose(){
		m_dat=(void*)&PreClose;
		m_siz=sizeof(PreClose);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreClose;
		memset(&PreClose,0x00,sizeof(PreClose));	/* �����̼� */
	}
	BCESFieldTypePrice PreClose;	/* �����̼� */
};
/* ���̼� */
class CBCESFieldOpenPrice:public CBMLField
{
public:
	CBCESFieldOpenPrice(){
		m_dat=(void*)&OpenPrice;
		m_siz=sizeof(OpenPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOpenPrice;
		memset(&OpenPrice,0x00,sizeof(OpenPrice));	/* ���̼� */
	}
	BCESFieldTypePrice OpenPrice;	/* ���̼� */
};
/* ��߼� */
class CBCESFieldHighestPrice:public CBMLField
{
public:
	CBCESFieldHighestPrice(){
		m_dat=(void*)&HighestPrice;
		m_siz=sizeof(HighestPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHighestPrice;
		memset(&HighestPrice,0x00,sizeof(HighestPrice));	/* ��߼� */
	}
	BCESFieldTypePrice HighestPrice;	/* ��߼� */
};
/* ��ͼ� */
class CBCESFieldLowestPrice:public CBMLField
{
public:
	CBCESFieldLowestPrice(){
		m_dat=(void*)&LowestPrice;
		m_siz=sizeof(LowestPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLowestPrice;
		memset(&LowestPrice,0x00,sizeof(LowestPrice));	/* ��ͼ� */
	}
	BCESFieldTypePrice LowestPrice;	/* ��ͼ� */
};
/* ���̼� */
class CBCESFieldClosePrice:public CBMLField
{
public:
	CBCESFieldClosePrice(){
		m_dat=(void*)&ClosePrice;
		m_siz=sizeof(ClosePrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexClosePrice;
		memset(&ClosePrice,0x00,sizeof(ClosePrice));	/* ���̼� */
	}
	BCESFieldTypePrice ClosePrice;	/* ���̼� */
};
/* �ɽ��� */
class CBCESFieldAmountTotal:public CBMLField
{
public:
	CBCESFieldAmountTotal(){
		m_dat=(void*)&AmountTotal;
		m_siz=sizeof(AmountTotal);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAmountTotal;
		memset(&AmountTotal,0x00,sizeof(AmountTotal));	/* �ɽ��� */
	}
	BCESFieldTypeAmount AmountTotal;	/* �ɽ��� */
};
/* ������ */
class CBCESFieldBidQty:public CBMLField
{
public:
	CBCESFieldBidQty(){
		m_dat=(void*)&BidQty;
		m_siz=sizeof(BidQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty;
		memset(&BidQty,0x00,sizeof(BidQty));	/* ������ */
	}
	BCESFieldTypeQty BidQty;	/* ������ */
};
/* ������ */
class CBCESFieldAskQty:public CBMLField
{
public:
	CBCESFieldAskQty(){
		m_dat=(void*)&AskQty;
		m_siz=sizeof(AskQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty;
		memset(&AskQty,0x00,sizeof(AskQty));	/* ������ */
	}
	BCESFieldTypeQty AskQty;	/* ������ */
};
/* �����б� */
class CBCESFieldQuotList:public CBMLField
{
public:
	CBCESFieldQuotList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotList;
		
	}
	
};
/* �����ѯ���� */
class CBCESFieldQuotQueryReq:public CBMLField
{
public:
	CBCESFieldQuotQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotQueryReq;
		
	}
	
};
/* ���� */
class CBCESFieldQuot:public CBMLField
{
public:
	CBCESFieldQuot(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuot;
		
	}
	
};
/* �������� */
class CBCESFieldInternationalQuot:public CBMLField
{
public:
	CBCESFieldInternationalQuot(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInternationalQuot;
		
	}
	
};
/* ������ѯ���� */
class CBCESFieldOrderQueryReq:public CBMLField
{
public:
	CBCESFieldOrderQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderQueryReq;
		
	}
	
};
/* ���� */
class CBCESFieldOrder:public CBMLField
{
public:
	CBCESFieldOrder(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrder;
		
	}
	
};
/* �ɽ���ѯ���� */
class CBCESFieldTradeQueryReq:public CBMLField
{
public:
	CBCESFieldTradeQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeQueryReq;
		
	}
	
};
/* �ɽ��� */
class CBCESFieldTrade:public CBMLField
{
public:
	CBCESFieldTrade(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTrade;
		
	}
	
};
/* �ֲֲ�ѯ���� */
class CBCESFieldPosiQueryReq:public CBMLField
{
public:
	CBCESFieldPosiQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPosiQueryReq;
		
	}
	
};
/* �ֲ� */
class CBCESFieldPosi:public CBMLField
{
public:
	CBCESFieldPosi(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPosi;
		
	}
	
};
/* �����б� */
class CBCESFieldOrderList:public CBMLField
{
public:
	CBCESFieldOrderList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderList;
		
	}
	
};
/* �ɽ����б� */
class CBCESFieldTradeList:public CBMLField
{
public:
	CBCESFieldTradeList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeList;
		
	}
	
};
/* �ֲ��б� */
class CBCESFieldPosiList:public CBMLField
{
public:
	CBCESFieldPosiList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPosiList;
		
	}
	
};
/* �г�״̬ */
class CBCESFieldMarketStatus:public CBMLField
{
public:
	CBCESFieldMarketStatus(){
		m_dat=(void*)&MarketStatus;
		m_siz=sizeof(MarketStatus);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMarketStatus;
		memset(&MarketStatus,0x00,sizeof(MarketStatus));	/* �г�״̬ */
	}
	BCESFieldTypeFlag MarketStatus;	/* �г�״̬ */
};
/* �г�״̬֪ͨ */
class CBCESFieldMarketStatusNty:public CBMLField
{
public:
	CBCESFieldMarketStatusNty(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMarketStatusNty;
		
	}
	
};
/* �ʽ��ѯ���� */
class CBCESFieldHisFundQueryReq:public CBMLField
{
public:
	CBCESFieldHisFundQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHisFundQueryReq;
		
	}
	
};
/* �ֲ���ϸ��ѯ���� */
class CBCESFieldHisPosiDetailQueryReq:public CBMLField
{
public:
	CBCESFieldHisPosiDetailQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHisPosiDetailQueryReq;
		
	}
	
};
/* �����ʽ� */
class CBCESFieldFreeBalance:public CBMLField
{
public:
	CBCESFieldFreeBalance(){
		m_dat=(void*)&FreeBalance;
		m_siz=sizeof(FreeBalance);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFreeBalance;
		memset(&FreeBalance,0x00,sizeof(FreeBalance));	/* �����ʽ� */
	}
	BCESFieldTypeAmount FreeBalance;	/* �����ʽ� */
};
/* �ʽ��ѯ���� */
class CBCESFieldFundQueryReq:public CBMLField
{
public:
	CBCESFieldFundQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundQueryReq;
		
	}
	
};
/* �ʽ� */
class CBCESFieldFund:public CBMLField
{
public:
	CBCESFieldFund(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFund;
		
	}
	
};
/* �����ʽ� */
class CBCESFieldFrozenBalance:public CBMLField
{
public:
	CBCESFieldFrozenBalance(){
		m_dat=(void*)&FrozenBalance;
		m_siz=sizeof(FrozenBalance);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFrozenBalance;
		memset(&FrozenBalance,0x00,sizeof(FrozenBalance));	/* �����ʽ� */
	}
	BCESFieldTypeAmount FrozenBalance;	/* �����ʽ� */
};
/* �����ʽ� */
class CBCESFieldLastBalance:public CBMLField
{
public:
	CBCESFieldLastBalance(){
		m_dat=(void*)&LastBalance;
		m_siz=sizeof(LastBalance);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLastBalance;
		memset(&LastBalance,0x00,sizeof(LastBalance));	/* �����ʽ� */
	}
	BCESFieldTypeAmount LastBalance;	/* �����ʽ� */
};
/* ���ճ���� */
class CBCESFieldFloatBalance:public CBMLField
{
public:
	CBCESFieldFloatBalance(){
		m_dat=(void*)&FloatBalance;
		m_siz=sizeof(FloatBalance);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFloatBalance;
		memset(&FloatBalance,0x00,sizeof(FloatBalance));	/* ���ճ���� */
	}
	BCESFieldTypeAmount FloatBalance;	/* ���ճ���� */
};
/* ���ձ�֤�� */
class CBCESFieldMargin:public CBMLField
{
public:
	CBCESFieldMargin(){
		m_dat=(void*)&Margin;
		m_siz=sizeof(Margin);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMargin;
		memset(&Margin,0x00,sizeof(Margin));	/* ���ձ�֤�� */
	}
	BCESFieldTypeAmount Margin;	/* ���ձ�֤�� */
};
/* ����׷�ӱ�֤�� */
class CBCESFieldFrozenMargin:public CBMLField
{
public:
	CBCESFieldFrozenMargin(){
		m_dat=(void*)&FrozenMargin;
		m_siz=sizeof(FrozenMargin);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFrozenMargin;
		memset(&FrozenMargin,0x00,sizeof(FrozenMargin));	/* ����׷�ӱ�֤�� */
	}
	BCESFieldTypeAmount FrozenMargin;	/* ����׷�ӱ�֤�� */
};
/* ������ */
class CBCESFieldFee:public CBMLField
{
public:
	CBCESFieldFee(){
		m_dat=(void*)&Fee;
		m_siz=sizeof(Fee);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFee;
		memset(&Fee,0x00,sizeof(Fee));	/* ������ */
	}
	BCESFieldTypeAmount Fee;	/* ������ */
};
/* ���������� */
class CBCESFieldFeeFrozen:public CBMLField
{
public:
	CBCESFieldFeeFrozen(){
		m_dat=(void*)&FeeFrozen;
		m_siz=sizeof(FeeFrozen);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFeeFrozen;
		memset(&FeeFrozen,0x00,sizeof(FeeFrozen));	/* ���������� */
	}
	BCESFieldTypeAmount FeeFrozen;	/* ���������� */
};
/* ����ƽ��ӯ�� */
class CBCESFieldClosedPL:public CBMLField
{
public:
	CBCESFieldClosedPL(){
		m_dat=(void*)&ClosedPL;
		m_siz=sizeof(ClosedPL);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexClosedPL;
		memset(&ClosedPL,0x00,sizeof(ClosedPL));	/* ����ƽ��ӯ�� */
	}
	BCESFieldTypeAmount ClosedPL;	/* ����ƽ��ӯ�� */
};
/* ������ӯ�� */
class CBCESFieldFloatingPL:public CBMLField
{
public:
	CBCESFieldFloatingPL(){
		m_dat=(void*)&FloatingPL;
		m_siz=sizeof(FloatingPL);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFloatingPL;
		memset(&FloatingPL,0x00,sizeof(FloatingPL));	/* ������ӯ�� */
	}
	BCESFieldTypeAmount FloatingPL;	/* ������ӯ�� */
};
/* ���ս��������� */
class CBCESFieldProfitLoss:public CBMLField
{
public:
	CBCESFieldProfitLoss(){
		m_dat=(void*)&ProfitLoss;
		m_siz=sizeof(ProfitLoss);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexProfitLoss;
		memset(&ProfitLoss,0x00,sizeof(ProfitLoss));	/* ���ս��������� */
	}
	BCESFieldTypeAmount ProfitLoss;	/* ���ս��������� */
};
/* ���շ��������� */
class CBCESFieldTotalPL:public CBMLField
{
public:
	CBCESFieldTotalPL(){
		m_dat=(void*)&TotalPL;
		m_siz=sizeof(TotalPL);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTotalPL;
		memset(&TotalPL,0x00,sizeof(TotalPL));	/* ���շ��������� */
	}
	BCESFieldTypeAmount TotalPL;	/* ���շ��������� */
};
/* ��Լ�б� */
class CBCESFieldInstrumentList:public CBMLField
{
public:
	CBCESFieldInstrumentList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInstrumentList;
		
	}
	
};
/* ��Լ��ѯ���� */
class CBCESFieldInstrumentQueryReq:public CBMLField
{
public:
	CBCESFieldInstrumentQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInstrumentQueryReq;
		
	}
	
};
/* ��Լ */
class CBCESFieldInstrument:public CBMLField
{
public:
	CBCESFieldInstrument(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInstrument;
		
	}
	
};
/* �г�״̬���� */
class CBCESFieldMarketStatusDesc:public CBMLField
{
public:
	CBCESFieldMarketStatusDesc(){
		m_dat=(void*)MarketStatusDesc;
		m_siz=sizeof(MarketStatusDesc);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMarketStatusDesc;
		memset(MarketStatusDesc,0x00,sizeof(MarketStatusDesc));	/* �г�״̬���� */
	}
	BCESFieldTypeMarketStatusDesc MarketStatusDesc;	/* �г�״̬���� */
};
/* Ʒ�ִ��� */
class CBCESFieldVarietyID:public CBMLField
{
public:
	CBCESFieldVarietyID(){
		m_dat=(void*)VarietyID;
		m_siz=sizeof(VarietyID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexVarietyID;
		memset(VarietyID,0x00,sizeof(VarietyID));	/* Ʒ�ִ��� */
	}
	BCESFieldTypeVarietyID VarietyID;	/* Ʒ�ִ��� */
};
/* ��Լ״̬ */
class CBCESFieldInstrumentStatus:public CBMLField
{
public:
	CBCESFieldInstrumentStatus(){
		m_dat=(void*)&InstrumentStatus;
		m_siz=sizeof(InstrumentStatus);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInstrumentStatus;
		memset(&InstrumentStatus,0x00,sizeof(InstrumentStatus));	/* ��Լ״̬ */
	}
	BCESFieldTypeFlag InstrumentStatus;	/* ��Լ״̬ */
};
/* ���׵�λ */
class CBCESFieldTradeUnit:public CBMLField
{
public:
	CBCESFieldTradeUnit(){
		m_dat=(void*)&TradeUnit;
		m_siz=sizeof(TradeUnit);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeUnit;
		memset(&TradeUnit,0x00,sizeof(TradeUnit));	/* ���׵�λ */
	}
	BCESFieldTypeQty TradeUnit;	/* ���׵�λ */
};
/* ���۵�λ */
class CBCESFieldPriceUnit:public CBMLField
{
public:
	CBCESFieldPriceUnit(){
		m_dat=(void*)&PriceUnit;
		m_siz=sizeof(PriceUnit);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPriceUnit;
		memset(&PriceUnit,0x00,sizeof(PriceUnit));	/* ���۵�λ */
	}
	BCESFieldTypeFlag PriceUnit;	/* ���۵�λ */
};
/* �ǵ�ͣ���� */
class CBCESFieldDailyPriceLimit:public CBMLField
{
public:
	CBCESFieldDailyPriceLimit(){
		m_dat=(void*)&DailyPriceLimit;
		m_siz=sizeof(DailyPriceLimit);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDailyPriceLimit;
		memset(&DailyPriceLimit,0x00,sizeof(DailyPriceLimit));	/* �ǵ�ͣ���� */
	}
	BCESFieldTypeRate DailyPriceLimit;	/* �ǵ�ͣ���� */
};
/* ���������� */
class CBCESFieldFeeType:public CBMLField
{
public:
	CBCESFieldFeeType(){
		m_dat=(void*)&FeeType;
		m_siz=sizeof(FeeType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFeeType;
		memset(&FeeType,0x00,sizeof(FeeType));	/* ���������� */
	}
	BCESFieldTypeFlag FeeType;	/* ���������� */
};
/* �������� */
class CBCESFieldFeeRate:public CBMLField
{
public:
	CBCESFieldFeeRate(){
		m_dat=(void*)&FeeRate;
		m_siz=sizeof(FeeRate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFeeRate;
		memset(&FeeRate,0x00,sizeof(FeeRate));	/* �������� */
	}
	BCESFieldTypeRate FeeRate;	/* �������� */
};
/* ���۾��� */
class CBCESFieldPriceScale:public CBMLField
{
public:
	CBCESFieldPriceScale(){
		m_dat=(void*)&PriceScale;
		m_siz=sizeof(PriceScale);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPriceScale;
		memset(&PriceScale,0x00,sizeof(PriceScale));	/* ���۾��� */
	}
	BCESFieldTypePrice PriceScale;	/* ���۾��� */
};
/* ��֤���� */
class CBCESFieldMarginRate:public CBMLField
{
public:
	CBCESFieldMarginRate(){
		m_dat=(void*)&MarginRate;
		m_siz=sizeof(MarginRate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMarginRate;
		memset(&MarginRate,0x00,sizeof(MarginRate));	/* ��֤���� */
	}
	BCESFieldTypePrice MarginRate;	/* ��֤���� */
};
/* ��ͣ��� */
class CBCESFieldHighLimit:public CBMLField
{
public:
	CBCESFieldHighLimit(){
		m_dat=(void*)&HighLimit;
		m_siz=sizeof(HighLimit);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHighLimit;
		memset(&HighLimit,0x00,sizeof(HighLimit));	/* ��ͣ��� */
	}
	BCESFieldTypePrice HighLimit;	/* ��ͣ��� */
};
/* ��ͣ��� */
class CBCESFieldLowLimit:public CBMLField
{
public:
	CBCESFieldLowLimit(){
		m_dat=(void*)&LowLimit;
		m_siz=sizeof(LowLimit);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLowLimit;
		memset(&LowLimit,0x00,sizeof(LowLimit));	/* ��ͣ��� */
	}
	BCESFieldTypePrice LowLimit;	/* ��ͣ��� */
};
/* �򶳽�ֲ��� */
class CBCESFieldBuyQtyFrozen:public CBMLField
{
public:
	CBCESFieldBuyQtyFrozen(){
		m_dat=(void*)&BuyQtyFrozen;
		m_siz=sizeof(BuyQtyFrozen);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBuyQtyFrozen;
		memset(&BuyQtyFrozen,0x00,sizeof(BuyQtyFrozen));	/* �򶳽�ֲ��� */
	}
	BCESFieldTypeQty BuyQtyFrozen;	/* �򶳽�ֲ��� */
};
/* ������ֲ��� */
class CBCESFieldSellQtyFrozen:public CBMLField
{
public:
	CBCESFieldSellQtyFrozen(){
		m_dat=(void*)&SellQtyFrozen;
		m_siz=sizeof(SellQtyFrozen);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexSellQtyFrozen;
		memset(&SellQtyFrozen,0x00,sizeof(SellQtyFrozen));	/* ������ֲ��� */
	}
	BCESFieldTypeQty SellQtyFrozen;	/* ������ֲ��� */
};
/* �ֲ���ϸ��ѯ���� */
class CBCESFieldPosiDetailQueryReq:public CBMLField
{
public:
	CBCESFieldPosiDetailQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPosiDetailQueryReq;
		
	}
	
};
/* �ֲ���ϸ */
class CBCESFieldPosiDetail:public CBMLField
{
public:
	CBCESFieldPosiDetail(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPosiDetail;
		
	}
	
};
/* �ֲ���ϸ�б� */
class CBCESFieldPosiDetailList:public CBMLField
{
public:
	CBCESFieldPosiDetailList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPosiDetailList;
		
	}
	
};
/* ��Լ���� */
class CBCESFieldInstrumentName:public CBMLField
{
public:
	CBCESFieldInstrumentName(){
		m_dat=(void*)InstrumentName;
		m_siz=sizeof(InstrumentName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInstrumentName;
		memset(InstrumentName,0x00,sizeof(InstrumentName));	/* ��Լ���� */
	}
	BCESFieldTypeInstrumentName InstrumentName;	/* ��Լ���� */
};
/* �۸�䶯���� */
class CBCESFieldMinMovement:public CBMLField
{
public:
	CBCESFieldMinMovement(){
		m_dat=(void*)&MinMovement;
		m_siz=sizeof(MinMovement);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMinMovement;
		memset(&MinMovement,0x00,sizeof(MinMovement));	/* �۸�䶯���� */
	}
	BCESFieldTypePrice MinMovement;	/* �۸�䶯���� */
};
/* �۸�䶯���� */
class CBCESFieldPriceCoefficient:public CBMLField
{
public:
	CBCESFieldPriceCoefficient(){
		m_dat=(void*)&PriceCoefficient;
		m_siz=sizeof(PriceCoefficient);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPriceCoefficient;
		memset(&PriceCoefficient,0x00,sizeof(PriceCoefficient));	/* �۸�䶯���� */
	}
	BCESFieldTypeRate PriceCoefficient;	/* �۸�䶯���� */
};
/* ��ֲ��� */
class CBCESFieldBuyQty:public CBMLField
{
public:
	CBCESFieldBuyQty(){
		m_dat=(void*)&BuyQty;
		m_siz=sizeof(BuyQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBuyQty;
		memset(&BuyQty,0x00,sizeof(BuyQty));	/* ��ֲ��� */
	}
	BCESFieldTypeQty BuyQty;	/* ��ֲ��� */
};
/* ��ֲ־��� */
class CBCESFieldBuyPrice:public CBMLField
{
public:
	CBCESFieldBuyPrice(){
		m_dat=(void*)&BuyPrice;
		m_siz=sizeof(BuyPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBuyPrice;
		memset(&BuyPrice,0x00,sizeof(BuyPrice));	/* ��ֲ־��� */
	}
	BCESFieldTypePrice BuyPrice;	/* ��ֲ־��� */
};
/* ���ֲ��� */
class CBCESFieldSellQty:public CBMLField
{
public:
	CBCESFieldSellQty(){
		m_dat=(void*)&SellQty;
		m_siz=sizeof(SellQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexSellQty;
		memset(&SellQty,0x00,sizeof(SellQty));	/* ���ֲ��� */
	}
	BCESFieldTypeQty SellQty;	/* ���ֲ��� */
};
/* ���ֲ־��� */
class CBCESFieldSellPrice:public CBMLField
{
public:
	CBCESFieldSellPrice(){
		m_dat=(void*)&SellPrice;
		m_siz=sizeof(SellPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexSellPrice;
		memset(&SellPrice,0x00,sizeof(SellPrice));	/* ���ֲ־��� */
	}
	BCESFieldTypePrice SellPrice;	/* ���ֲ־��� */
};
/* ���߲�ѯ���� */
class CBCESFieldMinDataQueryReq:public CBMLField
{
public:
	CBCESFieldMinDataQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMinDataQueryReq;
		
	}
	
};
/* ���� */
class CBCESFieldMinData:public CBMLField
{
public:
	CBCESFieldMinData(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMinData;
		
	}
	
};
/* ���߲�ѯ���� */
class CBCESFieldDayDataQueryReq:public CBMLField
{
public:
	CBCESFieldDayDataQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDayDataQueryReq;
		
	}
	
};
/* ���� */
class CBCESFieldDayData:public CBMLField
{
public:
	CBCESFieldDayData(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDayData;
		
	}
	
};
/* �����б� */
class CBCESFieldMinDataList:public CBMLField
{
public:
	CBCESFieldMinDataList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMinDataList;
		
	}
	
};
/* �����б� */
class CBCESFieldDayDataList:public CBMLField
{
public:
	CBCESFieldDayDataList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDayDataList;
		
	}
	
};
/* ��ʼ����ʱ�� */
class CBCESFieldDateTimeFrom:public CBMLField
{
public:
	CBCESFieldDateTimeFrom(){
		m_dat=(void*)DateTimeFrom;
		m_siz=sizeof(DateTimeFrom);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDateTimeFrom;
		memset(DateTimeFrom,0x00,sizeof(DateTimeFrom));	/* ��ʼ����ʱ�� */
	}
	BCESFieldTypeDateTime DateTimeFrom;	/* ��ʼ����ʱ�� */
};
/* ��������ʱ�� */
class CBCESFieldDateTimeTo:public CBMLField
{
public:
	CBCESFieldDateTimeTo(){
		m_dat=(void*)DateTimeTo;
		m_siz=sizeof(DateTimeTo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDateTimeTo;
		memset(DateTimeTo,0x00,sizeof(DateTimeTo));	/* ��������ʱ�� */
	}
	BCESFieldTypeDateTime DateTimeTo;	/* ��������ʱ�� */
};
/* ��ʼ���� */
class CBCESFieldDateFrom:public CBMLField
{
public:
	CBCESFieldDateFrom(){
		m_dat=(void*)DateFrom;
		m_siz=sizeof(DateFrom);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDateFrom;
		memset(DateFrom,0x00,sizeof(DateFrom));	/* ��ʼ���� */
	}
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
};
/* �������� */
class CBCESFieldDateTo:public CBMLField
{
public:
	CBCESFieldDateTo(){
		m_dat=(void*)DateTo;
		m_siz=sizeof(DateTo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDateTo;
		memset(DateTo,0x00,sizeof(DateTo));	/* �������� */
	}
	BCESFieldTypeDate DateTo;	/* �������� */
};
/* ���� */
class CBCESFieldDate:public CBMLField
{
public:
	CBCESFieldDate(){
		m_dat=(void*)Date;
		m_siz=sizeof(Date);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDate;
		memset(Date,0x00,sizeof(Date));	/* ���� */
	}
	BCESFieldTypeDate Date;	/* ���� */
};
/* ʱ�� */
class CBCESFieldTime:public CBMLField
{
public:
	CBCESFieldTime(){
		m_dat=(void*)Time;
		m_siz=sizeof(Time);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTime;
		memset(Time,0x00,sizeof(Time));	/* ʱ�� */
	}
	BCESFieldTypeTime Time;	/* ʱ�� */
};
/* ��ʼʱ�� */
class CBCESFieldTimeFrom:public CBMLField
{
public:
	CBCESFieldTimeFrom(){
		m_dat=(void*)TimeFrom;
		m_siz=sizeof(TimeFrom);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTimeFrom;
		memset(TimeFrom,0x00,sizeof(TimeFrom));	/* ��ʼʱ�� */
	}
	BCESFieldTypeDate TimeFrom;	/* ��ʼʱ�� */
};
/* ����ʱ�� */
class CBCESFieldTimeTo:public CBMLField
{
public:
	CBCESFieldTimeTo(){
		m_dat=(void*)TimeTo;
		m_siz=sizeof(TimeTo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTimeTo;
		memset(TimeTo,0x00,sizeof(TimeTo));	/* ����ʱ�� */
	}
	BCESFieldTypeTime TimeTo;	/* ����ʱ�� */
};
/* ����ʱ�� */
class CBCESFieldDateTime:public CBMLField
{
public:
	CBCESFieldDateTime(){
		m_dat=(void*)DateTime;
		m_siz=sizeof(DateTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDateTime;
		memset(DateTime,0x00,sizeof(DateTime));	/* ����ʱ�� */
	}
	BCESFieldTypeDateTime DateTime;	/* ����ʱ�� */
};
/* ��С�ɽ����� */
class CBCESFieldLimitedFilledPoints:public CBMLField
{
public:
	CBCESFieldLimitedFilledPoints(){
		m_dat=(void*)&LimitedFilledPoints;
		m_siz=sizeof(LimitedFilledPoints);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLimitedFilledPoints;
		memset(&LimitedFilledPoints,0x00,sizeof(LimitedFilledPoints));	/* ��С�ɽ����� */
	}
	BCESFieldTypePoints LimitedFilledPoints;	/* ��С�ɽ����� */
};
/* ��С���۵�� */
class CBCESFieldLimitedOrderPoints:public CBMLField
{
public:
	CBCESFieldLimitedOrderPoints(){
		m_dat=(void*)&LimitedOrderPoints;
		m_siz=sizeof(LimitedOrderPoints);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLimitedOrderPoints;
		memset(&LimitedOrderPoints,0x00,sizeof(LimitedOrderPoints));	/* ��С���۵�� */
	}
	BCESFieldTypePoints LimitedOrderPoints;	/* ��С���۵�� */
};
/* ��СֹӮֹ���� */
class CBCESFieldLimitedStopPoints:public CBMLField
{
public:
	CBCESFieldLimitedStopPoints(){
		m_dat=(void*)&LimitedStopPoints;
		m_siz=sizeof(LimitedStopPoints);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLimitedStopPoints;
		memset(&LimitedStopPoints,0x00,sizeof(LimitedStopPoints));	/* ��СֹӮֹ���� */
	}
	BCESFieldTypePoints LimitedStopPoints;	/* ��СֹӮֹ���� */
};
/* ֹӮ�� */
class CBCESFieldProfitStopPrice:public CBMLField
{
public:
	CBCESFieldProfitStopPrice(){
		m_dat=(void*)&ProfitStopPrice;
		m_siz=sizeof(ProfitStopPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexProfitStopPrice;
		memset(&ProfitStopPrice,0x00,sizeof(ProfitStopPrice));	/* ֹӮ�� */
	}
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
};
/* ֹ��� */
class CBCESFieldLossStopPrice:public CBMLField
{
public:
	CBCESFieldLossStopPrice(){
		m_dat=(void*)&LossStopPrice;
		m_siz=sizeof(LossStopPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLossStopPrice;
		memset(&LossStopPrice,0x00,sizeof(LossStopPrice));	/* ֹ��� */
	}
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
};
/* ֹӮֹ���������� */
class CBCESFieldProfitLossStopSetReq:public CBMLField
{
public:
	CBCESFieldProfitLossStopSetReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexProfitLossStopSetReq;
		
	}
	
};
/* ֹӮֹ������Ӧ�� */
class CBCESFieldProfitLossStopSetRsp:public CBMLField
{
public:
	CBCESFieldProfitLossStopSetRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexProfitLossStopSetRsp;
		
	}
	
};
/* �ɽ����� */
class CBCESFieldFilledPoints:public CBMLField
{
public:
	CBCESFieldFilledPoints(){
		m_dat=(void*)&FilledPoints;
		m_siz=sizeof(FilledPoints);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFilledPoints;
		memset(&FilledPoints,0x00,sizeof(FilledPoints));	/* �ɽ����� */
	}
	BCESFieldTypePoints FilledPoints;	/* �ɽ����� */
};
/* �������� */
class CBCESFieldCreateDate:public CBMLField
{
public:
	CBCESFieldCreateDate(){
		m_dat=(void*)CreateDate;
		m_siz=sizeof(CreateDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCreateDate;
		memset(CreateDate,0x00,sizeof(CreateDate));	/* �������� */
	}
	BCESFieldTypeDate CreateDate;	/* �������� */
};
/* ����ʱ�� */
class CBCESFieldCreateTime:public CBMLField
{
public:
	CBCESFieldCreateTime(){
		m_dat=(void*)CreateTime;
		m_siz=sizeof(CreateTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCreateTime;
		memset(CreateTime,0x00,sizeof(CreateTime));	/* ����ʱ�� */
	}
	BCESFieldTypeTime CreateTime;	/* ����ʱ�� */
};
/* �������� */
class CBCESFieldPublishDate:public CBMLField
{
public:
	CBCESFieldPublishDate(){
		m_dat=(void*)PublishDate;
		m_siz=sizeof(PublishDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPublishDate;
		memset(PublishDate,0x00,sizeof(PublishDate));	/* �������� */
	}
	BCESFieldTypeDate PublishDate;	/* �������� */
};
/* ����ʱ�� */
class CBCESFieldPublishTime:public CBMLField
{
public:
	CBCESFieldPublishTime(){
		m_dat=(void*)PublishTime;
		m_siz=sizeof(PublishTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPublishTime;
		memset(PublishTime,0x00,sizeof(PublishTime));	/* ����ʱ�� */
	}
	BCESFieldTypeTime PublishTime;	/* ����ʱ�� */
};
/* ��ѯ�������� */
class CBCESFieldBulletinQueryReq:public CBMLField
{
public:
	CBCESFieldBulletinQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBulletinQueryReq;
		
	}
	
};
/* �����б� */
class CBCESFieldBulletinList:public CBMLField
{
public:
	CBCESFieldBulletinList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBulletinList;
		
	}
	
};
/* ���� */
class CBCESFieldBulletin:public CBMLField
{
public:
	CBCESFieldBulletin(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBulletin;
		
	}
	
};
/* ������ */
class CBCESFieldPublishUserID:public CBMLField
{
public:
	CBCESFieldPublishUserID(){
		m_dat=(void*)PublishUserID;
		m_siz=sizeof(PublishUserID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPublishUserID;
		memset(PublishUserID,0x00,sizeof(PublishUserID));	/* ������ */
	}
	BCESFieldTypeUserID PublishUserID;	/* ������ */
};
/* ������ */
class CBCESFieldBulletinID:public CBMLField
{
public:
	CBCESFieldBulletinID(){
		m_dat=(void*)BulletinID;
		m_siz=sizeof(BulletinID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBulletinID;
		memset(BulletinID,0x00,sizeof(BulletinID));	/* ������ */
	}
	BCESFieldTypeBulletinID BulletinID;	/* ������ */
};
/* ���� */
class CBCESFieldTitle:public CBMLField
{
public:
	CBCESFieldTitle(){
		m_dat=(void*)Title;
		m_siz=sizeof(Title);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTitle;
		memset(Title,0x00,sizeof(Title));	/* ���� */
	}
	BCESFieldTypeTitle Title;	/* ���� */
};
/* ���� */
class CBCESFieldContent:public CBMLField
{
public:
	CBCESFieldContent(){
		m_dat=(void*)Content;
		m_siz=sizeof(Content);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexContent;
		memset(Content,0x00,sizeof(Content));	/* ���� */
	}
	BCESFieldTypeContent Content;	/* ���� */
};
/* ֪ͨ��� */
class CBCESFieldNoticeID:public CBMLField
{
public:
	CBCESFieldNoticeID(){
		m_dat=(void*)NoticeID;
		m_siz=sizeof(NoticeID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexNoticeID;
		memset(NoticeID,0x00,sizeof(NoticeID));	/* ֪ͨ��� */
	}
	BCESFieldTypeNoticeID NoticeID;	/* ֪ͨ��� */
};
/* ������ʽ */
class CBCESFieldPublishMethod:public CBMLField
{
public:
	CBCESFieldPublishMethod(){
		m_dat=(void*)&PublishMethod;
		m_siz=sizeof(PublishMethod);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPublishMethod;
		memset(&PublishMethod,0x00,sizeof(PublishMethod));	/* ������ʽ */
	}
	BCESFieldTypeFlag PublishMethod;	/* ������ʽ */
};
/* ֪ͨ�б� */
class CBCESFieldNoticeList:public CBMLField
{
public:
	CBCESFieldNoticeList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexNoticeList;
		
	}
	
};
/* ֪ͨ */
class CBCESFieldNotice:public CBMLField
{
public:
	CBCESFieldNotice(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexNotice;
		
	}
	
};
/* ��ѯ֪ͨ���� */
class CBCESFieldNoticeQueryReq:public CBMLField
{
public:
	CBCESFieldNoticeQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexNoticeQueryReq;
		
	}
	
};
/* ������� */
class CBCESFieldFundIODirection:public CBMLField
{
public:
	CBCESFieldFundIODirection(){
		m_dat=(void*)&FundIODirection;
		m_siz=sizeof(FundIODirection);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIODirection;
		memset(&FundIODirection,0x00,sizeof(FundIODirection));	/* ������� */
	}
	BCESFieldTypeFlag FundIODirection;	/* ������� */
};
/* �����״̬ */
class CBCESFieldFundIOStatus:public CBMLField
{
public:
	CBCESFieldFundIOStatus(){
		m_dat=(void*)&FundIOStatus;
		m_siz=sizeof(FundIOStatus);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIOStatus;
		memset(&FundIOStatus,0x00,sizeof(FundIOStatus));	/* �����״̬ */
	}
	BCESFieldTypeFlag FundIOStatus;	/* �����״̬ */
};
/* ������� */
class CBCESFieldCompleteDate:public CBMLField
{
public:
	CBCESFieldCompleteDate(){
		m_dat=(void*)CompleteDate;
		m_siz=sizeof(CompleteDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCompleteDate;
		memset(CompleteDate,0x00,sizeof(CompleteDate));	/* ������� */
	}
	BCESFieldTypeDate CompleteDate;	/* ������� */
};
/* ���ʱ�� */
class CBCESFieldCompleteTime:public CBMLField
{
public:
	CBCESFieldCompleteTime(){
		m_dat=(void*)CompleteTime;
		m_siz=sizeof(CompleteTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCompleteTime;
		memset(CompleteTime,0x00,sizeof(CompleteTime));	/* ���ʱ�� */
	}
	BCESFieldTypeTime CompleteTime;	/* ���ʱ�� */
};
/* �������ˮ�� */
class CBCESFieldFundIOSeqno:public CBMLField
{
public:
	CBCESFieldFundIOSeqno(){
		m_dat=(void*)FundIOSeqno;
		m_siz=sizeof(FundIOSeqno);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIOSeqno;
		memset(FundIOSeqno,0x00,sizeof(FundIOSeqno));	/* �������ˮ�� */
	}
	BCESFieldTypeFundIOSeqno FundIOSeqno;	/* �������ˮ�� */
};
/* �����״̬���� */
class CBCESFieldFundIOStatusDesc:public CBMLField
{
public:
	CBCESFieldFundIOStatusDesc(){
		m_dat=(void*)FundIOStatusDesc;
		m_siz=sizeof(FundIOStatusDesc);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIOStatusDesc;
		memset(FundIOStatusDesc,0x00,sizeof(FundIOStatusDesc));	/* �����״̬���� */
	}
	BCESFieldTypeFundIOStatusDesc FundIOStatusDesc;	/* �����״̬���� */
};
/* ���ӳ�������� */
class CBCESFieldElectronicFundIOReq:public CBMLField
{
public:
	CBCESFieldElectronicFundIOReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexElectronicFundIOReq;
		
	}
	
};
/* ���ӳ������Ӧ */
class CBCESFieldElectronicFundIORsp:public CBMLField
{
public:
	CBCESFieldElectronicFundIORsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexElectronicFundIORsp;
		
	}
	
};
/* ��ַ */
class CBCESFieldPayURL:public CBMLField
{
public:
	CBCESFieldPayURL(){
		m_dat=(void*)PayURL;
		m_siz=sizeof(PayURL);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPayURL;
		memset(PayURL,0x00,sizeof(PayURL));	/* ��ַ */
	}
	BCESFieldTypeURL PayURL;	/* ��ַ */
};
/* ֧������ */
class CBCESFieldPayDirection:public CBMLField
{
public:
	CBCESFieldPayDirection(){
		m_dat=(void*)&PayDirection;
		m_siz=sizeof(PayDirection);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPayDirection;
		memset(&PayDirection,0x00,sizeof(PayDirection));	/* ֧������ */
	}
	BCESFieldTypeFlag PayDirection;	/* ֧������ */
};
/* ���ӳ����֪ͨ */
class CBCESFieldElectronicFundIONty:public CBMLField
{
public:
	CBCESFieldElectronicFundIONty(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexElectronicFundIONty;
		
	}
	
};
/* �����ʽ */
class CBCESFieldFundIOMethod:public CBMLField
{
public:
	CBCESFieldFundIOMethod(){
		m_dat=(void*)&FundIOMethod;
		m_siz=sizeof(FundIOMethod);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIOMethod;
		memset(&FundIOMethod,0x00,sizeof(FundIOMethod));	/* �����ʽ */
	}
	BCESFieldTypeFlag FundIOMethod;	/* �����ʽ */
};
/* �������ϸ */
class CBCESFieldFundIODetail:public CBMLField
{
public:
	CBCESFieldFundIODetail(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIODetail;
		
	}
	
};
/* �������ϸ�б� */
class CBCESFieldFundIODetailList:public CBMLField
{
public:
	CBCESFieldFundIODetailList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIODetailList;
		
	}
	
};
/* �������ϸ��ѯ���� */
class CBCESFieldFundIODetailQueryReq:public CBMLField
{
public:
	CBCESFieldFundIODetailQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundIODetailQueryReq;
		
	}
	
};
/* �տ��к� */
class CBCESFieldReceiveBankID:public CBMLField
{
public:
	CBCESFieldReceiveBankID(){
		m_dat=(void*)ReceiveBankID;
		m_siz=sizeof(ReceiveBankID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReceiveBankID;
		memset(ReceiveBankID,0x00,sizeof(ReceiveBankID));	/* �տ��к� */
	}
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
};
/* �տ��ʺ� */
class CBCESFieldReceiveAccountID:public CBMLField
{
public:
	CBCESFieldReceiveAccountID(){
		m_dat=(void*)ReceiveAccountID;
		m_siz=sizeof(ReceiveAccountID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReceiveAccountID;
		memset(ReceiveAccountID,0x00,sizeof(ReceiveAccountID));	/* �տ��ʺ� */
	}
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
};
/* �տ�� */
class CBCESFieldReceiveAccountName:public CBMLField
{
public:
	CBCESFieldReceiveAccountName(){
		m_dat=(void*)ReceiveAccountName;
		m_siz=sizeof(ReceiveAccountName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReceiveAccountName;
		memset(ReceiveAccountName,0x00,sizeof(ReceiveAccountName));	/* �տ�� */
	}
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
};
/* ���� */
class CBCESFieldReport:public CBMLField
{
public:
	CBCESFieldReport(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReport;
		
	}
	
};
/* �����б� */
class CBCESFieldReportList:public CBMLField
{
public:
	CBCESFieldReportList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReportList;
		
	}
	
};
/* �����ѯ���� */
class CBCESFieldReportQueryReq:public CBMLField
{
public:
	CBCESFieldReportQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReportQueryReq;
		
	}
	
};
/* �������� */
class CBCESFieldReportData:public CBMLField
{
public:
	CBCESFieldReportData(){
		m_dat=(void*)ReportData;
		m_siz=sizeof(ReportData);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReportData;
		memset(ReportData,0x00,sizeof(ReportData));	/* �������� */
	}
	BCESFieldTypeReportData ReportData;	/* �������� */
};
/* ��ʷ������ѯ���� */
class CBCESFieldHisOrderQueryReq:public CBMLField
{
public:
	CBCESFieldHisOrderQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHisOrderQueryReq;
		
	}
	
};
/* ��ʷ�ɽ���ѯ���� */
class CBCESFieldHisTradeQueryReq:public CBMLField
{
public:
	CBCESFieldHisTradeQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHisTradeQueryReq;
		
	}
	
};
/* ��ѯ��ʷ�������� */
class CBCESFieldHisBulletinQueryReq:public CBMLField
{
public:
	CBCESFieldHisBulletinQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHisBulletinQueryReq;
		
	}
	
};
/* ��ѯ��ʷ֪ͨ���� */
class CBCESFieldHisNoticeQueryReq:public CBMLField
{
public:
	CBCESFieldHisNoticeQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHisNoticeQueryReq;
		
	}
	
};
/* Ͷ�������� */
class CBCESFieldInvestorRanking:public CBMLField
{
public:
	CBCESFieldInvestorRanking(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorRanking;
		
	}
	
};
/* Ͷ���������б� */
class CBCESFieldInvestorRankingList:public CBMLField
{
public:
	CBCESFieldInvestorRankingList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorRankingList;
		
	}
	
};
/* Ͷ����������ѯ���� */
class CBCESFieldInvestorRankingQueryReq:public CBMLField
{
public:
	CBCESFieldInvestorRankingQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorRankingQueryReq;
		
	}
	
};
/* Ͷ����������ѯӦ�� */
class CBCESFieldInvestorRankingQueryRsp:public CBMLField
{
public:
	CBCESFieldInvestorRankingQueryRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorRankingQueryRsp;
		
	}
	
};
/* ���� */
class CBCESFieldRankingNum:public CBMLField
{
public:
	CBCESFieldRankingNum(){
		m_dat=(void*)&RankingNum;
		m_siz=sizeof(RankingNum);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexRankingNum;
		memset(&RankingNum,0x00,sizeof(RankingNum));	/* ���� */
	}
	BCESFieldTypeRankingNum RankingNum;	/* ���� */
};
/* Ͷ�������� */
class CBCESFieldInvestorName:public CBMLField
{
public:
	CBCESFieldInvestorName(){
		m_dat=(void*)InvestorName;
		m_siz=sizeof(InvestorName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorName;
		memset(InvestorName,0x00,sizeof(InvestorName));	/* Ͷ�������� */
	}
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
};
/* �������� */
class CBCESFieldTradeSettings:public CBMLField
{
public:
	CBCESFieldTradeSettings(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettings;
		
	}
	
};
/* ���������б� */
class CBCESFieldTradeSettingsList:public CBMLField
{
public:
	CBCESFieldTradeSettingsList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsList;
		
	}
	
};
/* ���������������� */
class CBCESFieldTradeSettingsAddReq:public CBMLField
{
public:
	CBCESFieldTradeSettingsAddReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsAddReq;
		
	}
	
};
/* ������������Ӧ�� */
class CBCESFieldTradeSettingsAddRsp:public CBMLField
{
public:
	CBCESFieldTradeSettingsAddRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsAddRsp;
		
	}
	
};
/* ���������޸����� */
class CBCESFieldTradeSettingsModifyReq:public CBMLField
{
public:
	CBCESFieldTradeSettingsModifyReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsModifyReq;
		
	}
	
};
/* ���������޸�Ӧ�� */
class CBCESFieldTradeSettingsModifyRsp:public CBMLField
{
public:
	CBCESFieldTradeSettingsModifyRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsModifyRsp;
		
	}
	
};
/* ��������ɾ������ */
class CBCESFieldTradeSettingsDeleteReq:public CBMLField
{
public:
	CBCESFieldTradeSettingsDeleteReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsDeleteReq;
		
	}
	
};
/* ��������ɾ��Ӧ�� */
class CBCESFieldTradeSettingsDeleteRsp:public CBMLField
{
public:
	CBCESFieldTradeSettingsDeleteRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsDeleteRsp;
		
	}
	
};
/* �������ò�ѯ���� */
class CBCESFieldTradeSettingsQueryReq:public CBMLField
{
public:
	CBCESFieldTradeSettingsQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeSettingsQueryReq;
		
	}
	
};
/* ������Ϊ */
class CBCESFieldTradeAction:public CBMLField
{
public:
	CBCESFieldTradeAction(){
		m_dat=(void*)&TradeAction;
		m_siz=sizeof(TradeAction);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeAction;
		memset(&TradeAction,0x00,sizeof(TradeAction));	/* ������Ϊ */
	}
	BCESFieldTypeFlag TradeAction;	/* ������Ϊ */
};
/* ���� */
class CBCESFieldAddress:public CBMLField
{
public:
	CBCESFieldAddress(){
		m_dat=(void*)Address;
		m_siz=sizeof(Address);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAddress;
		memset(Address,0x00,sizeof(Address));	/* ���� */
	}
	BCESFieldTypeAddress Address;	/* ���� */
};
/* �ֿ� */
class CBCESFieldWareHouse:public CBMLField
{
public:
	CBCESFieldWareHouse(){
		m_dat=(void*)WareHouse;
		m_siz=sizeof(WareHouse);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexWareHouse;
		memset(WareHouse,0x00,sizeof(WareHouse));	/* �ֿ� */
	}
	BCESFieldTypeAddress WareHouse;	/* �ֿ� */
};
/* ���� */
class CBCESFieldCurrency:public CBMLField
{
public:
	CBCESFieldCurrency(){
		m_dat=(void*)&Currency;
		m_siz=sizeof(Currency);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCurrency;
		memset(&Currency,0x00,sizeof(Currency));	/* ���� */
	}
	BCESFieldTypeFlag Currency;	/* ���� */
};
/* ǩԼ��Ϣ */
class CBCESFieldAccountBind:public CBMLField
{
public:
	CBCESFieldAccountBind(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBind;
		
	}
	
};
/* ǩԼ��Ϣ�б� */
class CBCESFieldAccountBindList:public CBMLField
{
public:
	CBCESFieldAccountBindList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBindList;
		
	}
	
};
/* ǩԼ��Ϣ��ѯ���� */
class CBCESFieldAccountBindQueryReq:public CBMLField
{
public:
	CBCESFieldAccountBindQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBindQueryReq;
		
	}
	
};
/* ǩԼ���� */
class CBCESFieldAccountBindReq:public CBMLField
{
public:
	CBCESFieldAccountBindReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBindReq;
		
	}
	
};
/* ǩԼӦ�� */
class CBCESFieldAccountBindRsp:public CBMLField
{
public:
	CBCESFieldAccountBindRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBindRsp;
		
	}
	
};
/* ƽ������ */
class CBCESFieldCloseDate:public CBMLField
{
public:
	CBCESFieldCloseDate(){
		m_dat=(void*)CloseDate;
		m_siz=sizeof(CloseDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCloseDate;
		memset(CloseDate,0x00,sizeof(CloseDate));	/* ƽ������ */
	}
	BCESFieldTypeDate CloseDate;	/* ƽ������ */
};
/* ƽ��ʱ�� */
class CBCESFieldCloseTime:public CBMLField
{
public:
	CBCESFieldCloseTime(){
		m_dat=(void*)CloseTime;
		m_siz=sizeof(CloseTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCloseTime;
		memset(CloseTime,0x00,sizeof(CloseTime));	/* ƽ��ʱ�� */
	}
	BCESFieldTypeTime CloseTime;	/* ƽ��ʱ�� */
};
/* ��ҹ�� */
class CBCESFieldOverNightFee:public CBMLField
{
public:
	CBCESFieldOverNightFee(){
		m_dat=(void*)&OverNightFee;
		m_siz=sizeof(OverNightFee);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOverNightFee;
		memset(&OverNightFee,0x00,sizeof(OverNightFee));	/* ��ҹ�� */
	}
	BCESFieldTypePrice OverNightFee;	/* ��ҹ�� */
};
/* ���������� */
class CBCESFieldAgentName:public CBMLField
{
public:
	CBCESFieldAgentName(){
		m_dat=(void*)AgentName;
		m_siz=sizeof(AgentName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAgentName;
		memset(AgentName,0x00,sizeof(AgentName));	/* ���������� */
	}
	BCESFieldTypeName AgentName;	/* ���������� */
};
/* ����� */
class CBCESFieldInAmount:public CBMLField
{
public:
	CBCESFieldInAmount(){
		m_dat=(void*)&InAmount;
		m_siz=sizeof(InAmount);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInAmount;
		memset(&InAmount,0x00,sizeof(InAmount));	/* ����� */
	}
	BCESFieldTypeAmount InAmount;	/* ����� */
};
/* ������ */
class CBCESFieldOutAmount:public CBMLField
{
public:
	CBCESFieldOutAmount(){
		m_dat=(void*)&OutAmount;
		m_siz=sizeof(OutAmount);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOutAmount;
		memset(&OutAmount,0x00,sizeof(OutAmount));	/* ������ */
	}
	BCESFieldTypeAmount OutAmount;	/* ������ */
};
/* �ʽ��б� */
class CBCESFieldFundList:public CBMLField
{
public:
	CBCESFieldFundList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFundList;
		
	}
	
};
/* ϵͳ���� */
class CBCESFieldSysName:public CBMLField
{
public:
	CBCESFieldSysName(){
		m_dat=(void*)SysName;
		m_siz=sizeof(SysName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexSysName;
		memset(SysName,0x00,sizeof(SysName));	/* ϵͳ���� */
	}
	BCESFieldTypeName SysName;	/* ϵͳ���� */
};
/* ������ϳɽ��ӳ� */
class CBCESFieldErrNetTradeSec:public CBMLField
{
public:
	CBCESFieldErrNetTradeSec(){
		m_dat=(void*)&ErrNetTradeSec;
		m_siz=sizeof(ErrNetTradeSec);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexErrNetTradeSec;
		memset(&ErrNetTradeSec,0x00,sizeof(ErrNetTradeSec));	/* ������ϳɽ��ӳ� */
	}
	BCESFieldTypePoints ErrNetTradeSec;	/* ������ϳɽ��ӳ� */
};
/* ������������ӳ� */
class CBCESFieldErrNetRemindSec:public CBMLField
{
public:
	CBCESFieldErrNetRemindSec(){
		m_dat=(void*)&ErrNetRemindSec;
		m_siz=sizeof(ErrNetRemindSec);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexErrNetRemindSec;
		memset(&ErrNetRemindSec,0x00,sizeof(ErrNetRemindSec));	/* ������������ӳ� */
	}
	BCESFieldTypePoints ErrNetRemindSec;	/* ������������ӳ� */
};
/* �������������Ϣ */
class CBCESFieldErrNetRemindTxt:public CBMLField
{
public:
	CBCESFieldErrNetRemindTxt(){
		m_dat=(void*)ErrNetRemindTxt;
		m_siz=sizeof(ErrNetRemindTxt);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexErrNetRemindTxt;
		memset(ErrNetRemindTxt,0x00,sizeof(ErrNetRemindTxt));	/* �������������Ϣ */
	}
	BCESFieldTypeRspDesc ErrNetRemindTxt;	/* �������������Ϣ */
};
/* ���������ϳɽ���� */
class CBCESFieldErrSeverTradePort:public CBMLField
{
public:
	CBCESFieldErrSeverTradePort(){
		m_dat=(void*)&ErrSeverTradePort;
		m_siz=sizeof(ErrSeverTradePort);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexErrSeverTradePort;
		memset(&ErrSeverTradePort,0x00,sizeof(ErrSeverTradePort));	/* ���������ϳɽ���� */
	}
	BCESFieldTypePoints ErrSeverTradePort;	/* ���������ϳɽ���� */
};
/* �������������ѵ�� */
class CBCESFieldErrSeverRemindPort:public CBMLField
{
public:
	CBCESFieldErrSeverRemindPort(){
		m_dat=(void*)&ErrSeverRemindPort;
		m_siz=sizeof(ErrSeverRemindPort);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexErrSeverRemindPort;
		memset(&ErrSeverRemindPort,0x00,sizeof(ErrSeverRemindPort));	/* �������������ѵ�� */
	}
	BCESFieldTypePoints ErrSeverRemindPort;	/* �������������ѵ�� */
};
/* ����������������Ϣ */
class CBCESFieldErrSeverRemindTxt:public CBMLField
{
public:
	CBCESFieldErrSeverRemindTxt(){
		m_dat=(void*)ErrSeverRemindTxt;
		m_siz=sizeof(ErrSeverRemindTxt);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexErrSeverRemindTxt;
		memset(ErrSeverRemindTxt,0x00,sizeof(ErrSeverRemindTxt));	/* ����������������Ϣ */
	}
	BCESFieldTypeRspDesc ErrSeverRemindTxt;	/* ����������������Ϣ */
};
/* ���������޸����� */
class CBCESFieldTestSettingsModifyReq:public CBMLField
{
public:
	CBCESFieldTestSettingsModifyReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTestSettingsModifyReq;
		
	}
	
};
/* ���������޸�Ӧ�� */
class CBCESFieldTestSettingsModifyRsp:public CBMLField
{
public:
	CBCESFieldTestSettingsModifyRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTestSettingsModifyRsp;
		
	}
	
};
/* ��֤�������� */
class CBCESFieldMarginRateType:public CBMLField
{
public:
	CBCESFieldMarginRateType(){
		m_dat=(void*)&MarginRateType;
		m_siz=sizeof(MarginRateType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexMarginRateType;
		memset(&MarginRateType,0x00,sizeof(MarginRateType));	/* ��֤�������� */
	}
	BCESFieldTypeFlag MarginRateType;	/* ��֤�������� */
};
/* ��ҹ������ */
class CBCESFieldOverNightFeeType:public CBMLField
{
public:
	CBCESFieldOverNightFeeType(){
		m_dat=(void*)&OverNightFeeType;
		m_siz=sizeof(OverNightFeeType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOverNightFeeType;
		memset(&OverNightFeeType,0x00,sizeof(OverNightFeeType));	/* ��ҹ������ */
	}
	BCESFieldTypeFlag OverNightFeeType;	/* ��ҹ������ */
};
/* �շ����� */
class CBCESFieldFeeFlag:public CBMLField
{
public:
	CBCESFieldFeeFlag(){
		m_dat=(void*)&FeeFlag;
		m_siz=sizeof(FeeFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexFeeFlag;
		memset(&FeeFlag,0x00,sizeof(FeeFlag));	/* �շ����� */
	}
	BCESFieldTypeFlag FeeFlag;	/* �շ����� */
};
/* ���۳��� */
class CBCESFieldPriceMultiply:public CBMLField
{
public:
	CBCESFieldPriceMultiply(){
		m_dat=(void*)&PriceMultiply;
		m_siz=sizeof(PriceMultiply);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPriceMultiply;
		memset(&PriceMultiply,0x00,sizeof(PriceMultiply));	/* ���۳��� */
	}
	BCESFieldTypeRate PriceMultiply;	/* ���۳��� */
};
/* ÿ�ʳֲ����� */
class CBCESFieldEachQtyLimt:public CBMLField
{
public:
	CBCESFieldEachQtyLimt(){
		m_dat=(void*)&EachQtyLimt;
		m_siz=sizeof(EachQtyLimt);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexEachQtyLimt;
		memset(&EachQtyLimt,0x00,sizeof(EachQtyLimt));	/* ÿ�ʳֲ����� */
	}
	BCESFieldTypeQty EachQtyLimt;	/* ÿ�ʳֲ����� */
};
/* �ֲܳ����� */
class CBCESFieldTotalQtyLimt:public CBMLField
{
public:
	CBCESFieldTotalQtyLimt(){
		m_dat=(void*)&TotalQtyLimt;
		m_siz=sizeof(TotalQtyLimt);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTotalQtyLimt;
		memset(&TotalQtyLimt,0x00,sizeof(TotalQtyLimt));	/* �ֲܳ����� */
	}
	BCESFieldTypeQty TotalQtyLimt;	/* �ֲܳ����� */
};
/* ����Ա�� */
class CBCESFieldUserID:public CBMLField
{
public:
	CBCESFieldUserID(){
		m_dat=(void*)UserID;
		m_siz=sizeof(UserID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexUserID;
		memset(UserID,0x00,sizeof(UserID));	/* ����Ա�� */
	}
	BCESFieldTypeUserID UserID;	/* ����Ա�� */
};
/* �����2 */
class CBCESFieldBidPrice2:public CBMLField
{
public:
	CBCESFieldBidPrice2(){
		m_dat=(void*)&BidPrice2;
		m_siz=sizeof(BidPrice2);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice2;
		memset(&BidPrice2,0x00,sizeof(BidPrice2));	/* �����2 */
	}
	BCESFieldTypePrice BidPrice2;	/* �����2 */
};
/* ������2 */
class CBCESFieldAskPrice2:public CBMLField
{
public:
	CBCESFieldAskPrice2(){
		m_dat=(void*)&AskPrice2;
		m_siz=sizeof(AskPrice2);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice2;
		memset(&AskPrice2,0x00,sizeof(AskPrice2));	/* ������2 */
	}
	BCESFieldTypePrice AskPrice2;	/* ������2 */
};
/* ������2 */
class CBCESFieldBidQty2:public CBMLField
{
public:
	CBCESFieldBidQty2(){
		m_dat=(void*)&BidQty2;
		m_siz=sizeof(BidQty2);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty2;
		memset(&BidQty2,0x00,sizeof(BidQty2));	/* ������2 */
	}
	BCESFieldTypeQty BidQty2;	/* ������2 */
};
/* ������2 */
class CBCESFieldAskQty2:public CBMLField
{
public:
	CBCESFieldAskQty2(){
		m_dat=(void*)&AskQty2;
		m_siz=sizeof(AskQty2);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty2;
		memset(&AskQty2,0x00,sizeof(AskQty2));	/* ������2 */
	}
	BCESFieldTypeQty AskQty2;	/* ������2 */
};
/* �����3 */
class CBCESFieldBidPrice3:public CBMLField
{
public:
	CBCESFieldBidPrice3(){
		m_dat=(void*)&BidPrice3;
		m_siz=sizeof(BidPrice3);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice3;
		memset(&BidPrice3,0x00,sizeof(BidPrice3));	/* �����3 */
	}
	BCESFieldTypePrice BidPrice3;	/* �����3 */
};
/* ������3 */
class CBCESFieldAskPrice3:public CBMLField
{
public:
	CBCESFieldAskPrice3(){
		m_dat=(void*)&AskPrice3;
		m_siz=sizeof(AskPrice3);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice3;
		memset(&AskPrice3,0x00,sizeof(AskPrice3));	/* ������3 */
	}
	BCESFieldTypePrice AskPrice3;	/* ������3 */
};
/* ������3 */
class CBCESFieldBidQty3:public CBMLField
{
public:
	CBCESFieldBidQty3(){
		m_dat=(void*)&BidQty3;
		m_siz=sizeof(BidQty3);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty3;
		memset(&BidQty3,0x00,sizeof(BidQty3));	/* ������3 */
	}
	BCESFieldTypeQty BidQty3;	/* ������3 */
};
/* ������3 */
class CBCESFieldAskQty3:public CBMLField
{
public:
	CBCESFieldAskQty3(){
		m_dat=(void*)&AskQty3;
		m_siz=sizeof(AskQty3);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty3;
		memset(&AskQty3,0x00,sizeof(AskQty3));	/* ������3 */
	}
	BCESFieldTypeQty AskQty3;	/* ������3 */
};
/* �����4 */
class CBCESFieldBidPrice4:public CBMLField
{
public:
	CBCESFieldBidPrice4(){
		m_dat=(void*)&BidPrice4;
		m_siz=sizeof(BidPrice4);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice4;
		memset(&BidPrice4,0x00,sizeof(BidPrice4));	/* �����4 */
	}
	BCESFieldTypePrice BidPrice4;	/* �����4 */
};
/* ������4 */
class CBCESFieldAskPrice4:public CBMLField
{
public:
	CBCESFieldAskPrice4(){
		m_dat=(void*)&AskPrice4;
		m_siz=sizeof(AskPrice4);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice4;
		memset(&AskPrice4,0x00,sizeof(AskPrice4));	/* ������4 */
	}
	BCESFieldTypePrice AskPrice4;	/* ������4 */
};
/* ������4 */
class CBCESFieldBidQty4:public CBMLField
{
public:
	CBCESFieldBidQty4(){
		m_dat=(void*)&BidQty4;
		m_siz=sizeof(BidQty4);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty4;
		memset(&BidQty4,0x00,sizeof(BidQty4));	/* ������4 */
	}
	BCESFieldTypeQty BidQty4;	/* ������4 */
};
/* ������4 */
class CBCESFieldAskQty4:public CBMLField
{
public:
	CBCESFieldAskQty4(){
		m_dat=(void*)&AskQty4;
		m_siz=sizeof(AskQty4);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty4;
		memset(&AskQty4,0x00,sizeof(AskQty4));	/* ������4 */
	}
	BCESFieldTypeQty AskQty4;	/* ������4 */
};
/* �����5 */
class CBCESFieldBidPrice5:public CBMLField
{
public:
	CBCESFieldBidPrice5(){
		m_dat=(void*)&BidPrice5;
		m_siz=sizeof(BidPrice5);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice5;
		memset(&BidPrice5,0x00,sizeof(BidPrice5));	/* �����5 */
	}
	BCESFieldTypePrice BidPrice5;	/* �����5 */
};
/* ������5 */
class CBCESFieldAskPrice5:public CBMLField
{
public:
	CBCESFieldAskPrice5(){
		m_dat=(void*)&AskPrice5;
		m_siz=sizeof(AskPrice5);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice5;
		memset(&AskPrice5,0x00,sizeof(AskPrice5));	/* ������5 */
	}
	BCESFieldTypePrice AskPrice5;	/* ������5 */
};
/* ������5 */
class CBCESFieldBidQty5:public CBMLField
{
public:
	CBCESFieldBidQty5(){
		m_dat=(void*)&BidQty5;
		m_siz=sizeof(BidQty5);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty5;
		memset(&BidQty5,0x00,sizeof(BidQty5));	/* ������5 */
	}
	BCESFieldTypeQty BidQty5;	/* ������5 */
};
/* ������5 */
class CBCESFieldAskQty5:public CBMLField
{
public:
	CBCESFieldAskQty5(){
		m_dat=(void*)&AskQty5;
		m_siz=sizeof(AskQty5);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty5;
		memset(&AskQty5,0x00,sizeof(AskQty5));	/* ������5 */
	}
	BCESFieldTypeQty AskQty5;	/* ������5 */
};
/* ϵͳģʽ */
class CBCESFieldSysMode:public CBMLField
{
public:
	CBCESFieldSysMode(){
		m_dat=(void*)&SysMode;
		m_siz=sizeof(SysMode);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexSysMode;
		memset(&SysMode,0x00,sizeof(SysMode));	/* ϵͳģʽ */
	}
	BCESFieldTypeFlag SysMode;	/* ϵͳģʽ */
};
/* ����ֲ��� */
class CBCESFieldQtyFrozen:public CBMLField
{
public:
	CBCESFieldQtyFrozen(){
		m_dat=(void*)&QtyFrozen;
		m_siz=sizeof(QtyFrozen);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQtyFrozen;
		memset(&QtyFrozen,0x00,sizeof(QtyFrozen));	/* ����ֲ��� */
	}
	BCESFieldTypeQty QtyFrozen;	/* ����ֲ��� */
};
/* �����6 */
class CBCESFieldBidPrice6:public CBMLField
{
public:
	CBCESFieldBidPrice6(){
		m_dat=(void*)&BidPrice6;
		m_siz=sizeof(BidPrice6);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice6;
		memset(&BidPrice6,0x00,sizeof(BidPrice6));	/* �����6 */
	}
	BCESFieldTypePrice BidPrice6;	/* �����6 */
};
/* ������6 */
class CBCESFieldAskPrice6:public CBMLField
{
public:
	CBCESFieldAskPrice6(){
		m_dat=(void*)&AskPrice6;
		m_siz=sizeof(AskPrice6);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice6;
		memset(&AskPrice6,0x00,sizeof(AskPrice6));	/* ������6 */
	}
	BCESFieldTypePrice AskPrice6;	/* ������6 */
};
/* ������6 */
class CBCESFieldBidQty6:public CBMLField
{
public:
	CBCESFieldBidQty6(){
		m_dat=(void*)&BidQty6;
		m_siz=sizeof(BidQty6);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty6;
		memset(&BidQty6,0x00,sizeof(BidQty6));	/* ������6 */
	}
	BCESFieldTypeQty BidQty6;	/* ������6 */
};
/* ������6 */
class CBCESFieldAskQty6:public CBMLField
{
public:
	CBCESFieldAskQty6(){
		m_dat=(void*)&AskQty6;
		m_siz=sizeof(AskQty6);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty6;
		memset(&AskQty6,0x00,sizeof(AskQty6));	/* ������6 */
	}
	BCESFieldTypeQty AskQty6;	/* ������6 */
};
/* �����7 */
class CBCESFieldBidPrice7:public CBMLField
{
public:
	CBCESFieldBidPrice7(){
		m_dat=(void*)&BidPrice7;
		m_siz=sizeof(BidPrice7);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice7;
		memset(&BidPrice7,0x00,sizeof(BidPrice7));	/* �����7 */
	}
	BCESFieldTypePrice BidPrice7;	/* �����7 */
};
/* ������7 */
class CBCESFieldAskPrice7:public CBMLField
{
public:
	CBCESFieldAskPrice7(){
		m_dat=(void*)&AskPrice7;
		m_siz=sizeof(AskPrice7);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice7;
		memset(&AskPrice7,0x00,sizeof(AskPrice7));	/* ������7 */
	}
	BCESFieldTypePrice AskPrice7;	/* ������7 */
};
/* ������7 */
class CBCESFieldBidQty7:public CBMLField
{
public:
	CBCESFieldBidQty7(){
		m_dat=(void*)&BidQty7;
		m_siz=sizeof(BidQty7);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty7;
		memset(&BidQty7,0x00,sizeof(BidQty7));	/* ������7 */
	}
	BCESFieldTypeQty BidQty7;	/* ������7 */
};
/* ������7 */
class CBCESFieldAskQty7:public CBMLField
{
public:
	CBCESFieldAskQty7(){
		m_dat=(void*)&AskQty7;
		m_siz=sizeof(AskQty7);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty7;
		memset(&AskQty7,0x00,sizeof(AskQty7));	/* ������7 */
	}
	BCESFieldTypeQty AskQty7;	/* ������7 */
};
/* �����8 */
class CBCESFieldBidPrice8:public CBMLField
{
public:
	CBCESFieldBidPrice8(){
		m_dat=(void*)&BidPrice8;
		m_siz=sizeof(BidPrice8);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice8;
		memset(&BidPrice8,0x00,sizeof(BidPrice8));	/* �����8 */
	}
	BCESFieldTypePrice BidPrice8;	/* �����8 */
};
/* ������8 */
class CBCESFieldAskPrice8:public CBMLField
{
public:
	CBCESFieldAskPrice8(){
		m_dat=(void*)&AskPrice8;
		m_siz=sizeof(AskPrice8);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice8;
		memset(&AskPrice8,0x00,sizeof(AskPrice8));	/* ������8 */
	}
	BCESFieldTypePrice AskPrice8;	/* ������8 */
};
/* ������8 */
class CBCESFieldBidQty8:public CBMLField
{
public:
	CBCESFieldBidQty8(){
		m_dat=(void*)&BidQty8;
		m_siz=sizeof(BidQty8);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty8;
		memset(&BidQty8,0x00,sizeof(BidQty8));	/* ������8 */
	}
	BCESFieldTypeQty BidQty8;	/* ������8 */
};
/* ������8 */
class CBCESFieldAskQty8:public CBMLField
{
public:
	CBCESFieldAskQty8(){
		m_dat=(void*)&AskQty8;
		m_siz=sizeof(AskQty8);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty8;
		memset(&AskQty8,0x00,sizeof(AskQty8));	/* ������8 */
	}
	BCESFieldTypeQty AskQty8;	/* ������8 */
};
/* �����9 */
class CBCESFieldBidPrice9:public CBMLField
{
public:
	CBCESFieldBidPrice9(){
		m_dat=(void*)&BidPrice9;
		m_siz=sizeof(BidPrice9);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice9;
		memset(&BidPrice9,0x00,sizeof(BidPrice9));	/* �����9 */
	}
	BCESFieldTypePrice BidPrice9;	/* �����9 */
};
/* ������9 */
class CBCESFieldAskPrice9:public CBMLField
{
public:
	CBCESFieldAskPrice9(){
		m_dat=(void*)&AskPrice9;
		m_siz=sizeof(AskPrice9);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice9;
		memset(&AskPrice9,0x00,sizeof(AskPrice9));	/* ������9 */
	}
	BCESFieldTypePrice AskPrice9;	/* ������9 */
};
/* ������9 */
class CBCESFieldBidQty9:public CBMLField
{
public:
	CBCESFieldBidQty9(){
		m_dat=(void*)&BidQty9;
		m_siz=sizeof(BidQty9);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty9;
		memset(&BidQty9,0x00,sizeof(BidQty9));	/* ������9 */
	}
	BCESFieldTypeQty BidQty9;	/* ������9 */
};
/* ������9 */
class CBCESFieldAskQty9:public CBMLField
{
public:
	CBCESFieldAskQty9(){
		m_dat=(void*)&AskQty9;
		m_siz=sizeof(AskQty9);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty9;
		memset(&AskQty9,0x00,sizeof(AskQty9));	/* ������9 */
	}
	BCESFieldTypeQty AskQty9;	/* ������9 */
};
/* �����10 */
class CBCESFieldBidPrice10:public CBMLField
{
public:
	CBCESFieldBidPrice10(){
		m_dat=(void*)&BidPrice10;
		m_siz=sizeof(BidPrice10);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidPrice10;
		memset(&BidPrice10,0x00,sizeof(BidPrice10));	/* �����10 */
	}
	BCESFieldTypePrice BidPrice10;	/* �����10 */
};
/* ������10 */
class CBCESFieldAskPrice10:public CBMLField
{
public:
	CBCESFieldAskPrice10(){
		m_dat=(void*)&AskPrice10;
		m_siz=sizeof(AskPrice10);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskPrice10;
		memset(&AskPrice10,0x00,sizeof(AskPrice10));	/* ������10 */
	}
	BCESFieldTypePrice AskPrice10;	/* ������10 */
};
/* ������10 */
class CBCESFieldBidQty10:public CBMLField
{
public:
	CBCESFieldBidQty10(){
		m_dat=(void*)&BidQty10;
		m_siz=sizeof(BidQty10);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBidQty10;
		memset(&BidQty10,0x00,sizeof(BidQty10));	/* ������10 */
	}
	BCESFieldTypeQty BidQty10;	/* ������10 */
};
/* ������10 */
class CBCESFieldAskQty10:public CBMLField
{
public:
	CBCESFieldAskQty10(){
		m_dat=(void*)&AskQty10;
		m_siz=sizeof(AskQty10);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAskQty10;
		memset(&AskQty10,0x00,sizeof(AskQty10));	/* ������10 */
	}
	BCESFieldTypeQty AskQty10;	/* ������10 */
};
/* IP��ַ */
class CBCESFieldIP:public CBMLField
{
public:
	CBCESFieldIP(){
		m_dat=(void*)IP;
		m_siz=sizeof(IP);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexIP;
		memset(IP,0x00,sizeof(IP));	/* IP��ַ */
	}
	BCESFieldTypeIP IP;	/* IP��ַ */
};
/* �ҵ���������ѯ���� */
class CBCESFieldTopInvestorQueryReq:public CBMLField
{
public:
	CBCESFieldTopInvestorQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTopInvestorQueryReq;
		
	}
	
};
/* �ҵ������� */
class CBCESFieldTopInvestor:public CBMLField
{
public:
	CBCESFieldTopInvestor(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTopInvestor;
		
	}
	
};
/* �ҵ��������б� */
class CBCESFieldTopInvestorList:public CBMLField
{
public:
	CBCESFieldTopInvestorList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTopInvestorList;
		
	}
	
};
/* Ͷ���߹ҵ���ѯ���� */
class CBCESFieldInvestorQuotQueryReq:public CBMLField
{
public:
	CBCESFieldInvestorQuotQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorQuotQueryReq;
		
	}
	
};
/* �ҵ������� */
class CBCESFieldInvestorQuot:public CBMLField
{
public:
	CBCESFieldInvestorQuot(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorQuot;
		
	}
	
};
/* �ҵ��������б� */
class CBCESFieldInvestorQuotList:public CBMLField
{
public:
	CBCESFieldInvestorQuotList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorQuotList;
		
	}
	
};
/* ����Ͷ���ߺ� */
class CBCESFieldRankingInvestorID:public CBMLField
{
public:
	CBCESFieldRankingInvestorID(){
		m_dat=(void*)RankingInvestorID;
		m_siz=sizeof(RankingInvestorID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexRankingInvestorID;
		memset(RankingInvestorID,0x00,sizeof(RankingInvestorID));	/* ����Ͷ���ߺ� */
	}
	BCESFieldTypeInvestorID RankingInvestorID;	/* ����Ͷ���ߺ� */
};
/* �������� */
class CBCESFieldConditionType:public CBMLField
{
public:
	CBCESFieldConditionType(){
		m_dat=(void*)&ConditionType;
		m_siz=sizeof(ConditionType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexConditionType;
		memset(&ConditionType,0x00,sizeof(ConditionType));	/* �������� */
	}
	BCESFieldTypeFlag ConditionType;	/* �������� */
};
/* �������� */
class CBCESFieldConditionMethod:public CBMLField
{
public:
	CBCESFieldConditionMethod(){
		m_dat=(void*)&ConditionMethod;
		m_siz=sizeof(ConditionMethod);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexConditionMethod;
		memset(&ConditionMethod,0x00,sizeof(ConditionMethod));	/* �������� */
	}
	BCESFieldTypeFlag ConditionMethod;	/* �������� */
};
/* �����۸� */
class CBCESFieldConditionPrice:public CBMLField
{
public:
	CBCESFieldConditionPrice(){
		m_dat=(void*)&ConditionPrice;
		m_siz=sizeof(ConditionPrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexConditionPrice;
		memset(&ConditionPrice,0x00,sizeof(ConditionPrice));	/* �����۸� */
	}
	BCESFieldTypePrice ConditionPrice;	/* �����۸� */
};
/* Ʒ�ִ��� */
class CBCESFieldGoodsName:public CBMLField
{
public:
	CBCESFieldGoodsName(){
		m_dat=(void*)GoodsName;
		m_siz=sizeof(GoodsName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexGoodsName;
		memset(GoodsName,0x00,sizeof(GoodsName));	/* Ʒ�ִ��� */
	}
	BCESFieldTypeGoodsName GoodsName;	/* Ʒ�ִ��� */
};
/* ����ʱ�� */
class CBCESFieldTradeTime:public CBMLField
{
public:
	CBCESFieldTradeTime(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeTime;
		
	}
	
};
/* ��ʼʱ�� */
class CBCESFieldTimeBegin:public CBMLField
{
public:
	CBCESFieldTimeBegin(){
		m_dat=(void*)TimeBegin;
		m_siz=sizeof(TimeBegin);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTimeBegin;
		memset(TimeBegin,0x00,sizeof(TimeBegin));	/* ��ʼʱ�� */
	}
	BCESFieldTypeTime TimeBegin;	/* ��ʼʱ�� */
};
/* ����ʱ�� */
class CBCESFieldTimeEnd:public CBMLField
{
public:
	CBCESFieldTimeEnd(){
		m_dat=(void*)TimeEnd;
		m_siz=sizeof(TimeEnd);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTimeEnd;
		memset(TimeEnd,0x00,sizeof(TimeEnd));	/* ����ʱ�� */
	}
	BCESFieldTypeTime TimeEnd;	/* ����ʱ�� */
};
/* ֧������ */
class CBCESFieldReceiveBranchName:public CBMLField
{
public:
	CBCESFieldReceiveBranchName(){
		m_dat=(void*)ReceiveBranchName;
		m_siz=sizeof(ReceiveBranchName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReceiveBranchName;
		memset(ReceiveBranchName,0x00,sizeof(ReceiveBranchName));	/* ֧������ */
	}
	BCESFieldTypeAddress ReceiveBranchName;	/* ֧������ */
};
/* ����ʡ�� */
class CBCESFieldReceiveProvice:public CBMLField
{
public:
	CBCESFieldReceiveProvice(){
		m_dat=(void*)ReceiveProvice;
		m_siz=sizeof(ReceiveProvice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReceiveProvice;
		memset(ReceiveProvice,0x00,sizeof(ReceiveProvice));	/* ����ʡ�� */
	}
	BCESFieldTypeName ReceiveProvice;	/* ����ʡ�� */
};
/* ������ */
class CBCESFieldReceiveCity:public CBMLField
{
public:
	CBCESFieldReceiveCity(){
		m_dat=(void*)ReceiveCity;
		m_siz=sizeof(ReceiveCity);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexReceiveCity;
		memset(ReceiveCity,0x00,sizeof(ReceiveCity));	/* ������ */
	}
	BCESFieldTypeName ReceiveCity;	/* ������ */
};
/* ǩԼ״̬ */
class CBCESFieldAccountBindStatus:public CBMLField
{
public:
	CBCESFieldAccountBindStatus(){
		m_dat=(void*)&AccountBindStatus;
		m_siz=sizeof(AccountBindStatus);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBindStatus;
		memset(&AccountBindStatus,0x00,sizeof(AccountBindStatus));	/* ǩԼ״̬ */
	}
	BCESFieldTypeFlag AccountBindStatus;	/* ǩԼ״̬ */
};
/* ��ַ */
class CBCESFieldAccountBindURL:public CBMLField
{
public:
	CBCESFieldAccountBindURL(){
		m_dat=(void*)AccountBindURL;
		m_siz=sizeof(AccountBindURL);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBindURL;
		memset(AccountBindURL,0x00,sizeof(AccountBindURL));	/* ��ַ */
	}
	BCESFieldTypeURL AccountBindURL;	/* ��ַ */
};
/* ǩԼ״̬���� */
class CBCESFieldAccountBindStatusDesc:public CBMLField
{
public:
	CBCESFieldAccountBindStatusDesc(){
		m_dat=(void*)AccountBindStatusDesc;
		m_siz=sizeof(AccountBindStatusDesc);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountBindStatusDesc;
		memset(AccountBindStatusDesc,0x00,sizeof(AccountBindStatusDesc));	/* ǩԼ״̬���� */
	}
	BCESFieldTypeFundIOStatusDesc AccountBindStatusDesc;	/* ǩԼ״̬���� */
};
/* ��Ʒ��� */
class CBCESFieldProductType:public CBMLField
{
public:
	CBCESFieldProductType(){
		m_dat=(void*)&ProductType;
		m_siz=sizeof(ProductType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexProductType;
		memset(&ProductType,0x00,sizeof(ProductType));	/* ��Ʒ��� */
	}
	BCESFieldTypeFlag ProductType;	/* ��Ʒ��� */
};
/* ��Ʒ�汾�� */
class CBCESFieldProductVersion:public CBMLField
{
public:
	CBCESFieldProductVersion(){
		m_dat=(void*)&ProductVersion;
		m_siz=sizeof(ProductVersion);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexProductVersion;
		memset(&ProductVersion,0x00,sizeof(ProductVersion));	/* ��Ʒ�汾�� */
	}
	BCESFieldTypeVersionNo ProductVersion;	/* ��Ʒ�汾�� */
};
/* ���ս������� */
class CBCESFieldDeliveryDemand:public CBMLField
{
public:
	CBCESFieldDeliveryDemand(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryDemand;
		
	}
	
};
/* ��ҵ���� */
class CBCESFieldCompanyName:public CBMLField
{
public:
	CBCESFieldCompanyName(){
		m_dat=(void*)CompanyName;
		m_siz=sizeof(CompanyName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCompanyName;
		memset(CompanyName,0x00,sizeof(CompanyName));	/* ��ҵ���� */
	}
	BCESFieldTypeName CompanyName;	/* ��ҵ���� */
};
/* ��ϵ������ */
class CBCESFieldLiaisonName:public CBMLField
{
public:
	CBCESFieldLiaisonName(){
		m_dat=(void*)LiaisonName;
		m_siz=sizeof(LiaisonName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLiaisonName;
		memset(LiaisonName,0x00,sizeof(LiaisonName));	/* ��ϵ������ */
	}
	BCESFieldTypeName LiaisonName;	/* ��ϵ������ */
};
/* ��ϵ�绰 */
class CBCESFieldLiaisonNumber:public CBMLField
{
public:
	CBCESFieldLiaisonNumber(){
		m_dat=(void*)LiaisonNumber;
		m_siz=sizeof(LiaisonNumber);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLiaisonNumber;
		memset(LiaisonNumber,0x00,sizeof(LiaisonNumber));	/* ��ϵ�绰 */
	}
	BCESFieldTypePhoneNo LiaisonNumber;	/* ��ϵ�绰 */
};
/* ��ϵ��ַ */
class CBCESFieldLiaisonAddress:public CBMLField
{
public:
	CBCESFieldLiaisonAddress(){
		m_dat=(void*)LiaisonAddress;
		m_siz=sizeof(LiaisonAddress);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexLiaisonAddress;
		memset(LiaisonAddress,0x00,sizeof(LiaisonAddress));	/* ��ϵ��ַ */
	}
	BCESFieldTypeAddress LiaisonAddress;	/* ��ϵ��ַ */
};
/* �������� */
class CBCESFieldGuaranteedQty:public CBMLField
{
public:
	CBCESFieldGuaranteedQty(){
		m_dat=(void*)&GuaranteedQty;
		m_siz=sizeof(GuaranteedQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexGuaranteedQty;
		memset(&GuaranteedQty,0x00,sizeof(GuaranteedQty));	/* �������� */
	}
	BCESFieldTypeQty GuaranteedQty;	/* �������� */
};
/* һ������ */
class CBCESFieldGeneralQty:public CBMLField
{
public:
	CBCESFieldGeneralQty(){
		m_dat=(void*)&GeneralQty;
		m_siz=sizeof(GeneralQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexGeneralQty;
		memset(&GeneralQty,0x00,sizeof(GeneralQty));	/* һ������ */
	}
	BCESFieldTypeQty GeneralQty;	/* һ������ */
};
/* �������� */
class CBCESFieldRiskQty:public CBMLField
{
public:
	CBCESFieldRiskQty(){
		m_dat=(void*)&RiskQty;
		m_siz=sizeof(RiskQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexRiskQty;
		memset(&RiskQty,0x00,sizeof(RiskQty));	/* �������� */
	}
	BCESFieldTypeQty RiskQty;	/* �������� */
};
/* �������� */
class CBCESFieldBankName:public CBMLField
{
public:
	CBCESFieldBankName(){
		m_dat=(void*)BankName;
		m_siz=sizeof(BankName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBankName;
		memset(BankName,0x00,sizeof(BankName));	/* �������� */
	}
	BCESFieldTypeName BankName;	/* �������� */
};
/* ��Ʊ̧ͷ */
class CBCESFieldInvoiceTitle:public CBMLField
{
public:
	CBCESFieldInvoiceTitle(){
		m_dat=(void*)InvoiceTitle;
		m_siz=sizeof(InvoiceTitle);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvoiceTitle;
		memset(InvoiceTitle,0x00,sizeof(InvoiceTitle));	/* ��Ʊ̧ͷ */
	}
	BCESFieldTypeTitle InvoiceTitle;	/* ��Ʊ̧ͷ */
};
/* ���ս����� */
class CBCESFieldDeliveryDemandID:public CBMLField
{
public:
	CBCESFieldDeliveryDemandID(){
		m_dat=(void*)DeliveryDemandID;
		m_siz=sizeof(DeliveryDemandID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryDemandID;
		memset(DeliveryDemandID,0x00,sizeof(DeliveryDemandID));	/* ���ս����� */
	}
	BCESFieldTypeDeliveryID DeliveryDemandID;	/* ���ս����� */
};
/* ���ս���״̬ */
class CBCESFieldDeliveryStatus:public CBMLField
{
public:
	CBCESFieldDeliveryStatus(){
		m_dat=(void*)&DeliveryStatus;
		m_siz=sizeof(DeliveryStatus);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryStatus;
		memset(&DeliveryStatus,0x00,sizeof(DeliveryStatus));	/* ���ս���״̬ */
	}
	BCESFieldTypeFlag DeliveryStatus;	/* ���ս���״̬ */
};
/* ���ս����������� */
class CBCESFieldDeliveryDemandQueryReq:public CBMLField
{
public:
	CBCESFieldDeliveryDemandQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryDemandQueryReq;
		
	}
	
};
/* ���ս�������Ӧ�� */
class CBCESFieldDeliveryDemandQueryRsp:public CBMLField
{
public:
	CBCESFieldDeliveryDemandQueryRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryDemandQueryRsp;
		
	}
	
};
/* ��Ʊ��ʶ */
class CBCESFieldInvoiceFlag:public CBMLField
{
public:
	CBCESFieldInvoiceFlag(){
		m_dat=(void*)&InvoiceFlag;
		m_siz=sizeof(InvoiceFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvoiceFlag;
		memset(&InvoiceFlag,0x00,sizeof(InvoiceFlag));	/* ��Ʊ��ʶ */
	}
	BCESFieldTypeFlag InvoiceFlag;	/* ��Ʊ��ʶ */
};
/* ��Ʊ���� */
class CBCESFieldInvoiceType:public CBMLField
{
public:
	CBCESFieldInvoiceType(){
		m_dat=(void*)&InvoiceType;
		m_siz=sizeof(InvoiceType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvoiceType;
		memset(&InvoiceType,0x00,sizeof(InvoiceType));	/* ��Ʊ���� */
	}
	BCESFieldTypeFlag InvoiceType;	/* ��Ʊ���� */
};
/* ֤������ */
class CBCESFieldCredentialType:public CBMLField
{
public:
	CBCESFieldCredentialType(){
		m_dat=(void*)&CredentialType;
		m_siz=sizeof(CredentialType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCredentialType;
		memset(&CredentialType,0x00,sizeof(CredentialType));	/* ֤������ */
	}
	BCESFieldTypeFlag CredentialType;	/* ֤������ */
};
/* ֤���� */
class CBCESFieldCredentialNo:public CBMLField
{
public:
	CBCESFieldCredentialNo(){
		m_dat=(void*)CredentialNo;
		m_siz=sizeof(CredentialNo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCredentialNo;
		memset(CredentialNo,0x00,sizeof(CredentialNo));	/* ֤���� */
	}
	BCESFieldTypeCredentialNo CredentialNo;	/* ֤���� */
};
/* �������� */
class CBCESFieldEmail:public CBMLField
{
public:
	CBCESFieldEmail(){
		m_dat=(void*)Email;
		m_siz=sizeof(Email);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexEmail;
		memset(Email,0x00,sizeof(Email));	/* �������� */
	}
	BCESFieldTypeEmail Email;	/* �������� */
};
/* �ʱ� */
class CBCESFieldPostCode:public CBMLField
{
public:
	CBCESFieldPostCode(){
		m_dat=(void*)PostCode;
		m_siz=sizeof(PostCode);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPostCode;
		memset(PostCode,0x00,sizeof(PostCode));	/* �ʱ� */
	}
	BCESFieldTypePostCode PostCode;	/* �ʱ� */
};
/* �����ʺ� */
class CBCESFieldBankAccountID:public CBMLField
{
public:
	CBCESFieldBankAccountID(){
		m_dat=(void*)BankAccountID;
		m_siz=sizeof(BankAccountID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBankAccountID;
		memset(BankAccountID,0x00,sizeof(BankAccountID));	/* �����ʺ� */
	}
	BCESFieldTypeBankAccountID BankAccountID;	/* �����ʺ� */
};
/* ���л������˺� */
class CBCESFieldBankNameAccountID:public CBMLField
{
public:
	CBCESFieldBankNameAccountID(){
		m_dat=(void*)BankNameAccountID;
		m_siz=sizeof(BankNameAccountID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBankNameAccountID;
		memset(BankNameAccountID,0x00,sizeof(BankNameAccountID));	/* ���л������˺� */
	}
	BCESFieldTypeBankNameAccountID BankNameAccountID;	/* ���л������˺� */
};
/* ���ս��������� */
class CBCESFieldDeliveryApplyID:public CBMLField
{
public:
	CBCESFieldDeliveryApplyID(){
		m_dat=(void*)DeliveryApplyID;
		m_siz=sizeof(DeliveryApplyID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyID;
		memset(DeliveryApplyID,0x00,sizeof(DeliveryApplyID));	/* ���ս��������� */
	}
	BCESFieldTypeDeliveryID DeliveryApplyID;	/* ���ս��������� */
};
/* ���ս����ַ */
class CBCESFieldDeliveryAddress:public CBMLField
{
public:
	CBCESFieldDeliveryAddress(){
		m_dat=(void*)DeliveryAddress;
		m_siz=sizeof(DeliveryAddress);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryAddress;
		memset(DeliveryAddress,0x00,sizeof(DeliveryAddress));	/* ���ս����ַ */
	}
	BCESFieldTypeDeliveryID DeliveryAddress;	/* ���ս����ַ */
};
/* �������� */
class CBCESFieldApplyDate:public CBMLField
{
public:
	CBCESFieldApplyDate(){
		m_dat=(void*)ApplyDate;
		m_siz=sizeof(ApplyDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexApplyDate;
		memset(ApplyDate,0x00,sizeof(ApplyDate));	/* �������� */
	}
	BCESFieldTypeDate ApplyDate;	/* �������� */
};
/* ȷ������ */
class CBCESFieldVerifedDate:public CBMLField
{
public:
	CBCESFieldVerifedDate(){
		m_dat=(void*)VerifedDate;
		m_siz=sizeof(VerifedDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexVerifedDate;
		memset(VerifedDate,0x00,sizeof(VerifedDate));	/* ȷ������ */
	}
	BCESFieldTypeDate VerifedDate;	/* ȷ������ */
};
/* �ɽ����� */
class CBCESFieldCompletedDate:public CBMLField
{
public:
	CBCESFieldCompletedDate(){
		m_dat=(void*)CompletedDate;
		m_siz=sizeof(CompletedDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCompletedDate;
		memset(CompletedDate,0x00,sizeof(CompletedDate));	/* �ɽ����� */
	}
	BCESFieldTypeDate CompletedDate;	/* �ɽ����� */
};
/* ��˾��ַ */
class CBCESFieldCompanyAddress:public CBMLField
{
public:
	CBCESFieldCompanyAddress(){
		m_dat=(void*)CompanyAddress;
		m_siz=sizeof(CompanyAddress);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCompanyAddress;
		memset(CompanyAddress,0x00,sizeof(CompanyAddress));	/* ��˾��ַ */
	}
	BCESFieldTypeAddress CompanyAddress;	/* ��˾��ַ */
};
/* ˰��ǼǺ� */
class CBCESFieldTaxNo:public CBMLField
{
public:
	CBCESFieldTaxNo(){
		m_dat=(void*)TaxNo;
		m_siz=sizeof(TaxNo);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTaxNo;
		memset(TaxNo,0x00,sizeof(TaxNo));	/* ˰��ǼǺ� */
	}
	BCESFieldTypeTaxNo TaxNo;	/* ˰��ǼǺ� */
};
/* ��Ʊ */
class CBCESFieldInvoice:public CBMLField
{
public:
	CBCESFieldInvoice(){
		m_dat=(void*)Invoice;
		m_siz=sizeof(Invoice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvoice;
		memset(Invoice,0x00,sizeof(Invoice));	/* ��Ʊ */
	}
	BCESFieldTypeContent Invoice;	/* ��Ʊ */
};
/* ���ս��������������� */
class CBCESFieldDeliveryApplyAddReq:public CBMLField
{
public:
	CBCESFieldDeliveryApplyAddReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyAddReq;
		
	}
	
};
/* ���ս�����������Ӧ�� */
class CBCESFieldDeliveryApplyAddRsp:public CBMLField
{
public:
	CBCESFieldDeliveryApplyAddRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyAddRsp;
		
	}
	
};
/* ���ս��������޸����� */
class CBCESFieldDeliveryApplyModifyReq:public CBMLField
{
public:
	CBCESFieldDeliveryApplyModifyReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyModifyReq;
		
	}
	
};
/* ���ս��������޸�Ӧ�� */
class CBCESFieldDeliveryApplyModifyRsp:public CBMLField
{
public:
	CBCESFieldDeliveryApplyModifyRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyModifyRsp;
		
	}
	
};
/* ���ս������� */
class CBCESFieldDeliveryApply:public CBMLField
{
public:
	CBCESFieldDeliveryApply(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApply;
		
	}
	
};
/* ���ս��������ѯ���� */
class CBCESFieldDeliveryApplyQueryReq:public CBMLField
{
public:
	CBCESFieldDeliveryApplyQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyQueryReq;
		
	}
	
};
/* ���ս��������ѯӦ�� */
class CBCESFieldDeliveryApplyQueryRsp:public CBMLField
{
public:
	CBCESFieldDeliveryApplyQueryRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyQueryRsp;
		
	}
	
};
/* ���ս��������б� */
class CBCESFieldDeliveryApplyList:public CBMLField
{
public:
	CBCESFieldDeliveryApplyList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyList;
		
	}
	
};
/* ���ս�������ɾ������ */
class CBCESFieldDeliveryApplyDeleteReq:public CBMLField
{
public:
	CBCESFieldDeliveryApplyDeleteReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyDeleteReq;
		
	}
	
};
/* ���ս�������ɾ��Ӧ�� */
class CBCESFieldDeliveryApplyDeleteRsp:public CBMLField
{
public:
	CBCESFieldDeliveryApplyDeleteRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexDeliveryApplyDeleteRsp;
		
	}
	
};
/* ֧���������� */
class CBCESFieldPayServerType:public CBMLField
{
public:
	CBCESFieldPayServerType(){
		m_dat=(void*)&PayServerType;
		m_siz=sizeof(PayServerType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPayServerType;
		memset(&PayServerType,0x00,sizeof(PayServerType));	/* ֧���������� */
	}
	BCESFieldTypeFlag PayServerType;	/* ֧���������� */
};
/* �ɽ���ϸ��ѯ���� */
class CBCESFieldTradeDetailDataQueryReq:public CBMLField
{
public:
	CBCESFieldTradeDetailDataQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeDetailDataQueryReq;
		
	}
	
};
/* ��˾�绰 */
class CBCESFieldCompanyNumber:public CBMLField
{
public:
	CBCESFieldCompanyNumber(){
		m_dat=(void*)CompanyNumber;
		m_siz=sizeof(CompanyNumber);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCompanyNumber;
		memset(CompanyNumber,0x00,sizeof(CompanyNumber));	/* ��˾�绰 */
	}
	BCESFieldTypePhoneNo CompanyNumber;	/* ��˾�绰 */
};
/* �ɽ���ϸ�б� */
class CBCESFieldTradeDetailDataList:public CBMLField
{
public:
	CBCESFieldTradeDetailDataList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTradeDetailDataList;
		
	}
	
};
/* ���ʺ� */
class CBCESFieldAdviserID:public CBMLField
{
public:
	CBCESFieldAdviserID(){
		m_dat=(void*)AdviserID;
		m_siz=sizeof(AdviserID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAdviserID;
		memset(AdviserID,0x00,sizeof(AdviserID));	/* ���ʺ� */
	}
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
};
/* �������� */
class CBCESFieldQuestionContent:public CBMLField
{
public:
	CBCESFieldQuestionContent(){
		m_dat=(void*)QuestionContent;
		m_siz=sizeof(QuestionContent);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuestionContent;
		memset(QuestionContent,0x00,sizeof(QuestionContent));	/* �������� */
	}
	BCESFieldTypeQuesAnswContent QuestionContent;	/* �������� */
};
/* �������� */
class CBCESFieldQuestionDate:public CBMLField
{
public:
	CBCESFieldQuestionDate(){
		m_dat=(void*)QuestionDate;
		m_siz=sizeof(QuestionDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuestionDate;
		memset(QuestionDate,0x00,sizeof(QuestionDate));	/* �������� */
	}
	BCESFieldTypeDate QuestionDate;	/* �������� */
};
/* ����ʱ�� */
class CBCESFieldQuestionTime:public CBMLField
{
public:
	CBCESFieldQuestionTime(){
		m_dat=(void*)QuestionTime;
		m_siz=sizeof(QuestionTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuestionTime;
		memset(QuestionTime,0x00,sizeof(QuestionTime));	/* ����ʱ�� */
	}
	BCESFieldTypeTime QuestionTime;	/* ����ʱ�� */
};
/* �ش����� */
class CBCESFieldAnswerContent:public CBMLField
{
public:
	CBCESFieldAnswerContent(){
		m_dat=(void*)AnswerContent;
		m_siz=sizeof(AnswerContent);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAnswerContent;
		memset(AnswerContent,0x00,sizeof(AnswerContent));	/* �ش����� */
	}
	BCESFieldTypeQuesAnswContent AnswerContent;	/* �ش����� */
};
/* �ش����� */
class CBCESFieldAnswerDate:public CBMLField
{
public:
	CBCESFieldAnswerDate(){
		m_dat=(void*)AnswerDate;
		m_siz=sizeof(AnswerDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAnswerDate;
		memset(AnswerDate,0x00,sizeof(AnswerDate));	/* �ش����� */
	}
	BCESFieldTypeDate AnswerDate;	/* �ش����� */
};
/* �ش�ʱ�� */
class CBCESFieldAnswerTime:public CBMLField
{
public:
	CBCESFieldAnswerTime(){
		m_dat=(void*)AnswerTime;
		m_siz=sizeof(AnswerTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAnswerTime;
		memset(AnswerTime,0x00,sizeof(AnswerTime));	/* �ش�ʱ�� */
	}
	BCESFieldTypeTime AnswerTime;	/* �ش�ʱ�� */
};
/* ���ʱ�� */
class CBCESFieldQuestionID:public CBMLField
{
public:
	CBCESFieldQuestionID(){
		m_dat=(void*)QuestionID;
		m_siz=sizeof(QuestionID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuestionID;
		memset(QuestionID,0x00,sizeof(QuestionID));	/* ���ʱ�� */
	}
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
};
/* ����/�ش��־ */
class CBCESFieldQuesAnswFlag:public CBMLField
{
public:
	CBCESFieldQuesAnswFlag(){
		m_dat=(void*)&QuesAnswFlag;
		m_siz=sizeof(QuesAnswFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuesAnswFlag;
		memset(&QuesAnswFlag,0x00,sizeof(QuesAnswFlag));	/* ����/�ش��־ */
	}
	BCESFieldTypeFlag QuesAnswFlag;	/* ����/�ش��־ */
};
/* ����/�ش����� */
class CBCESFieldQuesAnswContent:public CBMLField
{
public:
	CBCESFieldQuesAnswContent(){
		m_dat=(void*)QuesAnswContent;
		m_siz=sizeof(QuesAnswContent);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuesAnswContent;
		memset(QuesAnswContent,0x00,sizeof(QuesAnswContent));	/* ����/�ش����� */
	}
	BCESFieldTypeQuesAnswContent QuesAnswContent;	/* ����/�ش����� */
};
/* ����/�ش����� */
class CBCESFieldQuesAnswDate:public CBMLField
{
public:
	CBCESFieldQuesAnswDate(){
		m_dat=(void*)QuesAnswDate;
		m_siz=sizeof(QuesAnswDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuesAnswDate;
		memset(QuesAnswDate,0x00,sizeof(QuesAnswDate));	/* ����/�ش����� */
	}
	BCESFieldTypeDate QuesAnswDate;	/* ����/�ش����� */
};
/* ����/�ش�ʱ�� */
class CBCESFieldQuesAnswTime:public CBMLField
{
public:
	CBCESFieldQuesAnswTime(){
		m_dat=(void*)QuesAnswTime;
		m_siz=sizeof(QuesAnswTime);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuesAnswTime;
		memset(QuesAnswTime,0x00,sizeof(QuesAnswTime));	/* ����/�ش�ʱ�� */
	}
	BCESFieldTypeTime QuesAnswTime;	/* ����/�ش�ʱ�� */
};
/* Ͷ���߹��ʱ�־ */
class CBCESFieldInvestorAdviserFlag:public CBMLField
{
public:
	CBCESFieldInvestorAdviserFlag(){
		m_dat=(void*)&InvestorAdviserFlag;
		m_siz=sizeof(InvestorAdviserFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorAdviserFlag;
		memset(&InvestorAdviserFlag,0x00,sizeof(InvestorAdviserFlag));	/* Ͷ���߹��ʱ�־ */
	}
	BCESFieldTypeFlag InvestorAdviserFlag;	/* Ͷ���߹��ʱ�־ */
};
/* �����������/�ش����� */
class CBCESFieldQuotAdviserQuesAnswReq:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesAnswReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesAnswReq;
		
	}
	
};
/* �����������/�ش�Ӧ�� */
class CBCESFieldQuotAdviserQuesAnswRsp:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesAnswRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesAnswRsp;
		
	}
	
};
/* �������������ʷ��ѯ���� */
class CBCESFieldQuotAdviserQuesHisQueryReq:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesHisQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesHisQueryReq;
		
	}
	
};
/* �������������ʷ��ѯӦ�� */
class CBCESFieldQuotAdviserQuesHisQueryRsp:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesHisQueryRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesHisQueryRsp;
		
	}
	
};
/* �������������ʷ��ѯ�б� */
class CBCESFieldQuotAdviserQuesHisList:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesHisList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesHisList;
		
	}
	
};
/* ����������ʲ�ѯ���� */
class CBCESFieldQuotAdviserQuesQueryReq:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesQueryReq;
		
	}
	
};
/* ����������ʲ�ѯӦ�� */
class CBCESFieldQuotAdviserQuesQueryRsp:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesQueryRsp(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesQueryRsp;
		
	}
	
};
/* ����������ʲ�ѯ�б� */
class CBCESFieldQuotAdviserQuesQuerylist:public CBMLField
{
public:
	CBCESFieldQuotAdviserQuesQuerylist(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexQuotAdviserQuesQuerylist;
		
	}
	
};
/* ��� */
class CBCESFieldPlateName:public CBMLField
{
public:
	CBCESFieldPlateName(){
		m_dat=(void*)PlateName;
		m_siz=sizeof(PlateName);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPlateName;
		memset(PlateName,0x00,sizeof(PlateName));	/* ��� */
	}
	BCESFieldTypePlateName PlateName;	/* ��� */
};
/* ����ֲ��� */
class CBCESFieldPreBuyQty:public CBMLField
{
public:
	CBCESFieldPreBuyQty(){
		m_dat=(void*)&PreBuyQty;
		m_siz=sizeof(PreBuyQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreBuyQty;
		memset(&PreBuyQty,0x00,sizeof(PreBuyQty));	/* ����ֲ��� */
	}
	BCESFieldTypeQty PreBuyQty;	/* ����ֲ��� */
};
/* �����ֲ��� */
class CBCESFieldPreSellQty:public CBMLField
{
public:
	CBCESFieldPreSellQty(){
		m_dat=(void*)&PreSellQty;
		m_siz=sizeof(PreSellQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreSellQty;
		memset(&PreSellQty,0x00,sizeof(PreSellQty));	/* �����ֲ��� */
	}
	BCESFieldTypeQty PreSellQty;	/* �����ֲ��� */
};
/* ����ֲ��� */
class CBCESFieldTodayBuyQty:public CBMLField
{
public:
	CBCESFieldTodayBuyQty(){
		m_dat=(void*)&TodayBuyQty;
		m_siz=sizeof(TodayBuyQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTodayBuyQty;
		memset(&TodayBuyQty,0x00,sizeof(TodayBuyQty));	/* ����ֲ��� */
	}
	BCESFieldTypeQty TodayBuyQty;	/* ����ֲ��� */
};
/* �����ֲ��� */
class CBCESFieldTodaySellQty:public CBMLField
{
public:
	CBCESFieldTodaySellQty(){
		m_dat=(void*)&TodaySellQty;
		m_siz=sizeof(TodaySellQty);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTodaySellQty;
		memset(&TodaySellQty,0x00,sizeof(TodaySellQty));	/* �����ֲ��� */
	}
	BCESFieldTypeQty TodaySellQty;	/* �����ֲ��� */
};
/* ���򶳽�ֲ��� */
class CBCESFieldTodayBuyQtyFrozen:public CBMLField
{
public:
	CBCESFieldTodayBuyQtyFrozen(){
		m_dat=(void*)&TodayBuyQtyFrozen;
		m_siz=sizeof(TodayBuyQtyFrozen);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTodayBuyQtyFrozen;
		memset(&TodayBuyQtyFrozen,0x00,sizeof(TodayBuyQtyFrozen));	/* ���򶳽�ֲ��� */
	}
	BCESFieldTypeQty TodayBuyQtyFrozen;	/* ���򶳽�ֲ��� */
};
/* ��������ֲ��� */
class CBCESFieldTodaySellQtyFrozen:public CBMLField
{
public:
	CBCESFieldTodaySellQtyFrozen(){
		m_dat=(void*)&TodaySellQtyFrozen;
		m_siz=sizeof(TodaySellQtyFrozen);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTodaySellQtyFrozen;
		memset(&TodaySellQtyFrozen,0x00,sizeof(TodaySellQtyFrozen));	/* ��������ֲ��� */
	}
	BCESFieldTypeQty TodaySellQtyFrozen;	/* ��������ֲ��� */
};
/* �������� */
class CBCESFieldExchangeID:public CBMLField
{
public:
	CBCESFieldExchangeID(){
		m_dat=(void*)ExchangeID;
		m_siz=sizeof(ExchangeID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexExchangeID;
		memset(ExchangeID,0x00,sizeof(ExchangeID));	/* �������� */
	}
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};
/* �Ự��� */
class CBCESFieldSessionID:public CBMLField
{
public:
	CBCESFieldSessionID(){
		m_dat=(void*)&SessionID;
		m_siz=sizeof(SessionID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexSessionID;
		memset(&SessionID,0x00,sizeof(SessionID));	/* �Ự��� */
	}
	BCESFieldTypeSessionID SessionID;	/* �Ự��� */
};
/* �������� */
class CBCESFieldOrderRef:public CBMLField
{
public:
	CBCESFieldOrderRef(){
		m_dat=(void*)OrderRef;
		m_siz=sizeof(OrderRef);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderRef;
		memset(OrderRef,0x00,sizeof(OrderRef));	/* �������� */
	}
	BCESFieldTypeOrderRef OrderRef;	/* �������� */
};
/* ���ּ� */
class CBCESFieldCreatePrice:public CBMLField
{
public:
	CBCESFieldCreatePrice(){
		m_dat=(void*)&CreatePrice;
		m_siz=sizeof(CreatePrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCreatePrice;
		memset(&CreatePrice,0x00,sizeof(CreatePrice));	/* ���ּ� */
	}
	BCESFieldTypePrice CreatePrice;	/* ���ּ� */
};
/* ��ʷƽ��ӯ�� */
class CBCESFieldHistoryClosedPL:public CBMLField
{
public:
	CBCESFieldHistoryClosedPL(){
		m_dat=(void*)&HistoryClosedPL;
		m_siz=sizeof(HistoryClosedPL);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexHistoryClosedPL;
		memset(&HistoryClosedPL,0x00,sizeof(HistoryClosedPL));	/* ��ʷƽ��ӯ�� */
	}
	BCESFieldTypeAmount HistoryClosedPL;	/* ��ʷƽ��ӯ�� */
};
/* Ͷ���߽�ɫ */
class CBCESFieldInvestorRole:public CBMLField
{
public:
	CBCESFieldInvestorRole(){
		m_dat=(void*)&InvestorRole;
		m_siz=sizeof(InvestorRole);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorRole;
		memset(&InvestorRole,0x00,sizeof(InvestorRole));	/* Ͷ���߽�ɫ */
	}
	BCESFieldTypeFlag InvestorRole;	/* Ͷ���߽�ɫ */
};
/* Ͷ���߱�־ */
class CBCESFieldInvestorFlag:public CBMLField
{
public:
	CBCESFieldInvestorFlag(){
		m_dat=(void*)&InvestorFlag;
		m_siz=sizeof(InvestorFlag);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexInvestorFlag;
		memset(&InvestorFlag,0x00,sizeof(InvestorFlag));	/* Ͷ���߱�־ */
	}
	BCESFieldTypeFlag InvestorFlag;	/* Ͷ���߱�־ */
};
/* ֧����ˮ�� */
class CBCESFieldPaySeqno:public CBMLField
{
public:
	CBCESFieldPaySeqno(){
		m_dat=(void*)PaySeqno;
		m_siz=sizeof(PaySeqno);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPaySeqno;
		memset(PaySeqno,0x00,sizeof(PaySeqno));	/* ֧����ˮ�� */
	}
	BCESFieldTypePaySeqno PaySeqno;	/* ֧����ˮ�� */
};
/* ����ʣ������ */
class CBCESFieldPreQtyLeft:public CBMLField
{
public:
	CBCESFieldPreQtyLeft(){
		m_dat=(void*)&PreQtyLeft;
		m_siz=sizeof(PreQtyLeft);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreQtyLeft;
		memset(&PreQtyLeft,0x00,sizeof(PreQtyLeft));	/* ����ʣ������ */
	}
	BCESFieldTypeQty PreQtyLeft;	/* ����ʣ������ */
};
/* ���ֽ������� */
class CBCESFieldCreateTradeDate:public CBMLField
{
public:
	CBCESFieldCreateTradeDate(){
		m_dat=(void*)CreateTradeDate;
		m_siz=sizeof(CreateTradeDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCreateTradeDate;
		memset(CreateTradeDate,0x00,sizeof(CreateTradeDate));	/* ���ֽ������� */
	}
	BCESFieldTypeDate CreateTradeDate;	/* ���ֽ������� */
};
/* ƽ�ֽ������� */
class CBCESFieldClosedTradeDate:public CBMLField
{
public:
	CBCESFieldClosedTradeDate(){
		m_dat=(void*)ClosedTradeDate;
		m_siz=sizeof(ClosedTradeDate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexClosedTradeDate;
		memset(ClosedTradeDate,0x00,sizeof(ClosedTradeDate));	/* ƽ�ֽ������� */
	}
	BCESFieldTypeDate ClosedTradeDate;	/* ƽ�ֽ������� */
};
/* ƽ�ֶ����� */
class CBCESFieldClosedOrderID:public CBMLField
{
public:
	CBCESFieldClosedOrderID(){
		m_dat=(void*)ClosedOrderID;
		m_siz=sizeof(ClosedOrderID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexClosedOrderID;
		memset(ClosedOrderID,0x00,sizeof(ClosedOrderID));	/* ƽ�ֶ����� */
	}
	BCESFieldTypeOrderID ClosedOrderID;	/* ƽ�ֶ����� */
};
/* ƽ�ֳɽ��� */
class CBCESFieldClosedMatchID:public CBMLField
{
public:
	CBCESFieldClosedMatchID(){
		m_dat=(void*)ClosedMatchID;
		m_siz=sizeof(ClosedMatchID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexClosedMatchID;
		memset(ClosedMatchID,0x00,sizeof(ClosedMatchID));	/* ƽ�ֳɽ��� */
	}
	BCESFieldTypeMatchID ClosedMatchID;	/* ƽ�ֳɽ��� */
};
/* �����˺� */
class CBCESFieldAccountID:public CBMLField
{
public:
	CBCESFieldAccountID(){
		m_dat=(void*)AccountID;
		m_siz=sizeof(AccountID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountID;
		memset(AccountID,0x00,sizeof(AccountID));	/* �����˺� */
	}
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
};
/* ״̬˵�� */
class CBCESFieldOrderStatusDesc:public CBMLField
{
public:
	CBCESFieldOrderStatusDesc(){
		m_dat=(void*)OrderStatusDesc;
		m_siz=sizeof(OrderStatusDesc);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderStatusDesc;
		memset(OrderStatusDesc,0x00,sizeof(OrderStatusDesc));	/* ״̬˵�� */
	}
	BCESFieldTypeOrderStatusDesc OrderStatusDesc;	/* ״̬˵�� */
};
/* ������������� */
class CBCESFieldOrderSysID:public CBMLField
{
public:
	CBCESFieldOrderSysID(){
		m_dat=(void*)OrderSysID;
		m_siz=sizeof(OrderSysID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexOrderSysID;
		memset(OrderSysID,0x00,sizeof(OrderSysID));	/* ������������� */
	}
	BCESFieldTypeOrderSysID OrderSysID;	/* ������������� */
};
/* �Ự��� */
class CBCESFieldCTPSessionID:public CBMLField
{
public:
	CBCESFieldCTPSessionID(){
		m_dat=(void*)&CTPSessionID;
		m_siz=sizeof(CTPSessionID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCTPSessionID;
		memset(&CTPSessionID,0x00,sizeof(CTPSessionID));	/* �Ự��� */
	}
	BCESFieldTypeCTPSessionID CTPSessionID;	/* �Ự��� */
};
/* ǰ�ñ�� */
class CBCESFieldCTPFrontID:public CBMLField
{
public:
	CBCESFieldCTPFrontID(){
		m_dat=(void*)&CTPFrontID;
		m_siz=sizeof(CTPFrontID);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCTPFrontID;
		memset(&CTPFrontID,0x00,sizeof(CTPFrontID));	/* ǰ�ñ�� */
	}
	BCESFieldTypeCTPFrontID CTPFrontID;	/* ǰ�ñ�� */
};
/* �������� */
class CBCESFieldCTPOrderRef:public CBMLField
{
public:
	CBCESFieldCTPOrderRef(){
		m_dat=(void*)CTPOrderRef;
		m_siz=sizeof(CTPOrderRef);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCTPOrderRef;
		memset(CTPOrderRef,0x00,sizeof(CTPOrderRef));	/* �������� */
	}
	BCESFieldTypeCTPOrderRef CTPOrderRef;	/* �������� */
};
/* ƽ���������� */
class CBCESFieldCloseFeeRate:public CBMLField
{
public:
	CBCESFieldCloseFeeRate(){
		m_dat=(void*)&CloseFeeRate;
		m_siz=sizeof(CloseFeeRate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCloseFeeRate;
		memset(&CloseFeeRate,0x00,sizeof(CloseFeeRate));	/* ƽ���������� */
	}
	BCESFieldTypeRate CloseFeeRate;	/* ƽ���������� */
};
/* ƽ����������� */
class CBCESFieldCloseTodayFeeRate:public CBMLField
{
public:
	CBCESFieldCloseTodayFeeRate(){
		m_dat=(void*)&CloseTodayFeeRate;
		m_siz=sizeof(CloseTodayFeeRate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexCloseTodayFeeRate;
		memset(&CloseTodayFeeRate,0x00,sizeof(CloseTodayFeeRate));	/* ƽ����������� */
	}
	BCESFieldTypeRate CloseTodayFeeRate;	/* ƽ����������� */
};
/* ӡ��˰���� */
class CBCESFieldStampRate:public CBMLField
{
public:
	CBCESFieldStampRate(){
		m_dat=(void*)&StampRate;
		m_siz=sizeof(StampRate);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexStampRate;
		memset(&StampRate,0x00,sizeof(StampRate));	/* ӡ��˰���� */
	}
	BCESFieldTypeRate StampRate;	/* ӡ��˰���� */
};
/* K������ */
class CBCESFieldKLineType:public CBMLField
{
public:
	CBCESFieldKLineType(){
		m_dat=(void*)&KLineType;
		m_siz=sizeof(KLineType);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexKLineType;
		memset(&KLineType,0x00,sizeof(KLineType));	/* K������ */
	}
	BCESFieldTypeFlag KLineType;	/* K������ */
};
/* K�߲�ѯ���� */
class CBCESFieldKLineQueryReq:public CBMLField
{
public:
	CBCESFieldKLineQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexKLineQueryReq;
		
	}
	
};
/* K���б� */
class CBCESFieldKLineList:public CBMLField
{
public:
	CBCESFieldKLineList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexKLineList;
		
	}
	
};
/* Tick�߲�ѯ���� */
class CBCESFieldTickLineQueryReq:public CBMLField
{
public:
	CBCESFieldTickLineQueryReq(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTickLineQueryReq;
		
	}
	
};
/* Tick���б� */
class CBCESFieldTickLineList:public CBMLField
{
public:
	CBCESFieldTickLineList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexTickLineList;
		
	}
	
};
/* ��ʼBar */
class CBCESFieldBarFrom:public CBMLField
{
public:
	CBCESFieldBarFrom(){
		m_dat=(void*)&BarFrom;
		m_siz=sizeof(BarFrom);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBarFrom;
		memset(&BarFrom,0x00,sizeof(BarFrom));	/* ��ʼBar */
	}
	BCESFieldTypeRequestID BarFrom;	/* ��ʼBar */
};
/* Bar���� */
class CBCESFieldBarCount:public CBMLField
{
public:
	CBCESFieldBarCount(){
		m_dat=(void*)&BarCount;
		m_siz=sizeof(BarCount);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexBarCount;
		memset(&BarCount,0x00,sizeof(BarCount));	/* Bar���� */
	}
	BCESFieldTypeRequestID BarCount;	/* Bar���� */
};
/* �����˻��б� */
class CBCESFieldAccountList:public CBMLField
{
public:
	CBCESFieldAccountList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccountList;
		
	}
	
};
/* �����˻� */
class CBCESFieldAccount:public CBMLField
{
public:
	CBCESFieldAccount(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexAccount;
		
	}
	
};
/* �������б� */
class CBCESFieldExchangeList:public CBMLField
{
public:
	CBCESFieldExchangeList(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexExchangeList;
		
	}
	
};
/* ������ */
class CBCESFieldExchange:public CBMLField
{
public:
	CBCESFieldExchange(){
		m_dat=NULL;
		m_siz=0;
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexExchange;
		
	}
	
};
/* ����ƽ��ӯ�� */
class CBCESFieldPreClosedPL:public CBMLField
{
public:
	CBCESFieldPreClosedPL(){
		m_dat=(void*)&PreClosedPL;
		m_siz=sizeof(PreClosedPL);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreClosedPL;
		memset(&PreClosedPL,0x00,sizeof(PreClosedPL));	/* ����ƽ��ӯ�� */
	}
	BCESFieldTypeAmount PreClosedPL;	/* ����ƽ��ӯ�� */
};
/* ����ƽ�ּ� */
class CBCESFieldPreClosePrice:public CBMLField
{
public:
	CBCESFieldPreClosePrice(){
		m_dat=(void*)&PreClosePrice;
		m_siz=sizeof(PreClosePrice);
		m_len=NULL;
		m_opflags=0;
		m_rule=bces_rulearray+BCESFieldIndexPreClosePrice;
		memset(&PreClosePrice,0x00,sizeof(PreClosePrice));	/* ����ƽ�ּ� */
	}
	BCESFieldTypePrice PreClosePrice;	/* ����ƽ�ּ� */
};

/* Fields Define */
/* API����ͷ */
class CBCESFieldsApiHead:public CBMLFields
{
public:
	CBCESFieldsApiHead()
	{
		m_fieldarray=m_fieldarray_ApiHead;
		m_fieldsize=sizeof(m_fieldarray_ApiHead)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsApiHead)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&ServiceNo,sizeof(ServiceNo),NULL,0,bces_rulearray+BCESFieldIndexServiceNo);	/* ָ���� */
		AddField((void*)&RequestID,sizeof(RequestID),NULL,0,bces_rulearray+BCESFieldIndexRequestID);	/* ������ */
		AddField((void*)&EndFlag,sizeof(EndFlag),NULL,0,bces_rulearray+BCESFieldIndexEndFlag);	/* ������� */
	}
	CBCESFieldsApiHead(const CBCESFieldsApiHead& ApiHead){
		m_fieldarray=m_fieldarray_ApiHead;
		m_fieldsize=sizeof(m_fieldarray_ApiHead)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ApiHead+sizeof(CBMLFields),sizeof(CBCESFieldsApiHead)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&ServiceNo,sizeof(ServiceNo),NULL,0,bces_rulearray+BCESFieldIndexServiceNo);	/* ָ���� */
		AddField((void*)&RequestID,sizeof(RequestID),NULL,0,bces_rulearray+BCESFieldIndexRequestID);	/* ������ */
		AddField((void*)&EndFlag,sizeof(EndFlag),NULL,0,bces_rulearray+BCESFieldIndexEndFlag);	/* ������� */
	}
	CBCESFieldsApiHead& operator=(const CBCESFieldsApiHead& ApiHead){
		m_fieldarray=m_fieldarray_ApiHead;
		m_fieldsize=sizeof(m_fieldarray_ApiHead)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ApiHead+sizeof(CBMLFields),sizeof(CBCESFieldsApiHead)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&ServiceNo,sizeof(ServiceNo),NULL,0,bces_rulearray+BCESFieldIndexServiceNo);	/* ָ���� */
		AddField((void*)&RequestID,sizeof(RequestID),NULL,0,bces_rulearray+BCESFieldIndexRequestID);	/* ������ */
		AddField((void*)&EndFlag,sizeof(EndFlag),NULL,0,bces_rulearray+BCESFieldIndexEndFlag);	/* ������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ApiHead),0x00,sizeof(CBCESFieldsApiHead)-sizeof(CBMLFields)-sizeof(m_fieldarray_ApiHead));
	}

	BML_FIELD_INFO m_fieldarray_ApiHead[3];

	// Field
	BCESFieldTypeServiceNo ServiceNo;	/* ָ���� */
	BCESFieldTypeRequestID RequestID;	/* ������ */
	BCESFieldTypeEndFlag EndFlag;	/* ������� */
};

/* Ӧ����Ϣ�� */
class CBCESFieldsRspInfo:public CBMLFields
{
public:
	CBCESFieldsRspInfo()
	{
		m_fieldarray=m_fieldarray_RspInfo;
		m_fieldsize=sizeof(m_fieldarray_RspInfo)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsRspInfo)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&RspNo,sizeof(RspNo),NULL,0,bces_rulearray+BCESFieldIndexRspNo);	/* Ӧ����� */
		AddField((void*)RspDesc,sizeof(RspDesc),NULL,0,bces_rulearray+BCESFieldIndexRspDesc);	/* Ӧ������ */
	}
	CBCESFieldsRspInfo(const CBCESFieldsRspInfo& RspInfo){
		m_fieldarray=m_fieldarray_RspInfo;
		m_fieldsize=sizeof(m_fieldarray_RspInfo)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&RspInfo+sizeof(CBMLFields),sizeof(CBCESFieldsRspInfo)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&RspNo,sizeof(RspNo),NULL,0,bces_rulearray+BCESFieldIndexRspNo);	/* Ӧ����� */
		AddField((void*)RspDesc,sizeof(RspDesc),NULL,0,bces_rulearray+BCESFieldIndexRspDesc);	/* Ӧ������ */
	}
	CBCESFieldsRspInfo& operator=(const CBCESFieldsRspInfo& RspInfo){
		m_fieldarray=m_fieldarray_RspInfo;
		m_fieldsize=sizeof(m_fieldarray_RspInfo)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&RspInfo+sizeof(CBMLFields),sizeof(CBCESFieldsRspInfo)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&RspNo,sizeof(RspNo),NULL,0,bces_rulearray+BCESFieldIndexRspNo);	/* Ӧ����� */
		AddField((void*)RspDesc,sizeof(RspDesc),NULL,0,bces_rulearray+BCESFieldIndexRspDesc);	/* Ӧ������ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_RspInfo),0x00,sizeof(CBCESFieldsRspInfo)-sizeof(CBMLFields)-sizeof(m_fieldarray_RspInfo));
	}

	BML_FIELD_INFO m_fieldarray_RspInfo[2];

	// Field
	BCESFieldTypeRspNo RspNo;	/* Ӧ����� */
	BCESFieldTypeRspDesc RspDesc;	/* Ӧ������ */
};

/* ���������� */
class CBCESFieldsFlowSubscribeReq:public CBMLFields
{
public:
	CBCESFieldsFlowSubscribeReq()
	{
		m_fieldarray=m_fieldarray_FlowSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_FlowSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsFlowSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&FlowID,sizeof(FlowID),NULL,0,bces_rulearray+BCESFieldIndexFlowID);	/* ����� */
		AddField((void*)&PkgNo,sizeof(PkgNo),NULL,0,bces_rulearray+BCESFieldIndexPkgNo);	/* ������� */
	}
	CBCESFieldsFlowSubscribeReq(const CBCESFieldsFlowSubscribeReq& FlowSubscribeReq){
		m_fieldarray=m_fieldarray_FlowSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_FlowSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FlowSubscribeReq+sizeof(CBMLFields),sizeof(CBCESFieldsFlowSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&FlowID,sizeof(FlowID),NULL,0,bces_rulearray+BCESFieldIndexFlowID);	/* ����� */
		AddField((void*)&PkgNo,sizeof(PkgNo),NULL,0,bces_rulearray+BCESFieldIndexPkgNo);	/* ������� */
	}
	CBCESFieldsFlowSubscribeReq& operator=(const CBCESFieldsFlowSubscribeReq& FlowSubscribeReq){
		m_fieldarray=m_fieldarray_FlowSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_FlowSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FlowSubscribeReq+sizeof(CBMLFields),sizeof(CBCESFieldsFlowSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&FlowID,sizeof(FlowID),NULL,0,bces_rulearray+BCESFieldIndexFlowID);	/* ����� */
		AddField((void*)&PkgNo,sizeof(PkgNo),NULL,0,bces_rulearray+BCESFieldIndexPkgNo);	/* ������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_FlowSubscribeReq),0x00,sizeof(CBCESFieldsFlowSubscribeReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_FlowSubscribeReq));
	}

	BML_FIELD_INFO m_fieldarray_FlowSubscribeReq[2];

	// Field
	BCESFieldTypeFlowID FlowID;	/* ����� */
	BCESFieldTypePkgNo PkgNo;	/* ������� */
};

/* ������Ӧ�� */
class CBCESFieldsFlowSubscribeRsp:public CBMLFields
{
public:
	CBCESFieldsFlowSubscribeRsp()
	{
		m_fieldarray=m_fieldarray_FlowSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_FlowSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsFlowSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&FlowID,sizeof(FlowID),NULL,0,bces_rulearray+BCESFieldIndexFlowID);	/* ����� */
		AddField((void*)&PkgNo,sizeof(PkgNo),NULL,0,bces_rulearray+BCESFieldIndexPkgNo);	/* ������� */
	}
	CBCESFieldsFlowSubscribeRsp(const CBCESFieldsFlowSubscribeRsp& FlowSubscribeRsp){
		m_fieldarray=m_fieldarray_FlowSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_FlowSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FlowSubscribeRsp+sizeof(CBMLFields),sizeof(CBCESFieldsFlowSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&FlowID,sizeof(FlowID),NULL,0,bces_rulearray+BCESFieldIndexFlowID);	/* ����� */
		AddField((void*)&PkgNo,sizeof(PkgNo),NULL,0,bces_rulearray+BCESFieldIndexPkgNo);	/* ������� */
	}
	CBCESFieldsFlowSubscribeRsp& operator=(const CBCESFieldsFlowSubscribeRsp& FlowSubscribeRsp){
		m_fieldarray=m_fieldarray_FlowSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_FlowSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FlowSubscribeRsp+sizeof(CBMLFields),sizeof(CBCESFieldsFlowSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&FlowID,sizeof(FlowID),NULL,0,bces_rulearray+BCESFieldIndexFlowID);	/* ����� */
		AddField((void*)&PkgNo,sizeof(PkgNo),NULL,0,bces_rulearray+BCESFieldIndexPkgNo);	/* ������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_FlowSubscribeRsp),0x00,sizeof(CBCESFieldsFlowSubscribeRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_FlowSubscribeRsp));
	}

	BML_FIELD_INFO m_fieldarray_FlowSubscribeRsp[2];

	// Field
	BCESFieldTypeFlowID FlowID;	/* ����� */
	BCESFieldTypePkgNo PkgNo;	/* ������� */
};

/* ����ͷ */
class CBCESFieldsHead:public CBMLFields
{
public:
	CBCESFieldsHead()
	{
		m_fieldarray=m_fieldarray_Head;
		m_fieldsize=sizeof(m_fieldarray_Head)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsHead)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&RequestID,sizeof(RequestID),NULL,0,bces_rulearray+BCESFieldIndexRequestID);	/* ������ */
		AddField((void*)&EndFlag,sizeof(EndFlag),NULL,0,bces_rulearray+BCESFieldIndexEndFlag);	/* ������� */
	}
	CBCESFieldsHead(const CBCESFieldsHead& Head){
		m_fieldarray=m_fieldarray_Head;
		m_fieldsize=sizeof(m_fieldarray_Head)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Head+sizeof(CBMLFields),sizeof(CBCESFieldsHead)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&RequestID,sizeof(RequestID),NULL,0,bces_rulearray+BCESFieldIndexRequestID);	/* ������ */
		AddField((void*)&EndFlag,sizeof(EndFlag),NULL,0,bces_rulearray+BCESFieldIndexEndFlag);	/* ������� */
	}
	CBCESFieldsHead& operator=(const CBCESFieldsHead& Head){
		m_fieldarray=m_fieldarray_Head;
		m_fieldsize=sizeof(m_fieldarray_Head)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Head+sizeof(CBMLFields),sizeof(CBCESFieldsHead)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&RequestID,sizeof(RequestID),NULL,0,bces_rulearray+BCESFieldIndexRequestID);	/* ������ */
		AddField((void*)&EndFlag,sizeof(EndFlag),NULL,0,bces_rulearray+BCESFieldIndexEndFlag);	/* ������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Head),0x00,sizeof(CBCESFieldsHead)-sizeof(CBMLFields)-sizeof(m_fieldarray_Head));
	}

	BML_FIELD_INFO m_fieldarray_Head[2];

	// Field
	BCESFieldTypeRequestID RequestID;	/* ������ */
	BCESFieldTypeEndFlag EndFlag;	/* ������� */
};

/* ���鶩������ */
class CBCESFieldsQuotSubscribeReq:public CBMLFields
{
public:
	CBCESFieldsQuotSubscribeReq()
	{
		m_fieldarray=m_fieldarray_QuotSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_QuotSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotSubscribeReq(const CBCESFieldsQuotSubscribeReq& QuotSubscribeReq){
		m_fieldarray=m_fieldarray_QuotSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_QuotSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotSubscribeReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotSubscribeReq& operator=(const CBCESFieldsQuotSubscribeReq& QuotSubscribeReq){
		m_fieldarray=m_fieldarray_QuotSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_QuotSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotSubscribeReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotSubscribeReq),0x00,sizeof(CBCESFieldsQuotSubscribeReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotSubscribeReq));
	}

	BML_FIELD_INFO m_fieldarray_QuotSubscribeReq[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* ���鶩��Ӧ�� */
class CBCESFieldsQuotSubscribeRsp:public CBMLFields
{
public:
	CBCESFieldsQuotSubscribeRsp()
	{
		m_fieldarray=m_fieldarray_QuotSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotSubscribeRsp(const CBCESFieldsQuotSubscribeRsp& QuotSubscribeRsp){
		m_fieldarray=m_fieldarray_QuotSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotSubscribeRsp+sizeof(CBMLFields),sizeof(CBCESFieldsQuotSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotSubscribeRsp& operator=(const CBCESFieldsQuotSubscribeRsp& QuotSubscribeRsp){
		m_fieldarray=m_fieldarray_QuotSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotSubscribeRsp+sizeof(CBMLFields),sizeof(CBCESFieldsQuotSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotSubscribeRsp),0x00,sizeof(CBCESFieldsQuotSubscribeRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotSubscribeRsp));
	}

	BML_FIELD_INFO m_fieldarray_QuotSubscribeRsp[1];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* �����˶����� */
class CBCESFieldsQuotUnSubscribeReq:public CBMLFields
{
public:
	CBCESFieldsQuotUnSubscribeReq()
	{
		m_fieldarray=m_fieldarray_QuotUnSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_QuotUnSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotUnSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotUnSubscribeReq(const CBCESFieldsQuotUnSubscribeReq& QuotUnSubscribeReq){
		m_fieldarray=m_fieldarray_QuotUnSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_QuotUnSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotUnSubscribeReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotUnSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotUnSubscribeReq& operator=(const CBCESFieldsQuotUnSubscribeReq& QuotUnSubscribeReq){
		m_fieldarray=m_fieldarray_QuotUnSubscribeReq;
		m_fieldsize=sizeof(m_fieldarray_QuotUnSubscribeReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotUnSubscribeReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotUnSubscribeReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotUnSubscribeReq),0x00,sizeof(CBCESFieldsQuotUnSubscribeReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotUnSubscribeReq));
	}

	BML_FIELD_INFO m_fieldarray_QuotUnSubscribeReq[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* �����˶�Ӧ�� */
class CBCESFieldsQuotUnSubscribeRsp:public CBMLFields
{
public:
	CBCESFieldsQuotUnSubscribeRsp()
	{
		m_fieldarray=m_fieldarray_QuotUnSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotUnSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotUnSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotUnSubscribeRsp(const CBCESFieldsQuotUnSubscribeRsp& QuotUnSubscribeRsp){
		m_fieldarray=m_fieldarray_QuotUnSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotUnSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotUnSubscribeRsp+sizeof(CBMLFields),sizeof(CBCESFieldsQuotUnSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsQuotUnSubscribeRsp& operator=(const CBCESFieldsQuotUnSubscribeRsp& QuotUnSubscribeRsp){
		m_fieldarray=m_fieldarray_QuotUnSubscribeRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotUnSubscribeRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotUnSubscribeRsp+sizeof(CBMLFields),sizeof(CBCESFieldsQuotUnSubscribeRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotUnSubscribeRsp),0x00,sizeof(CBCESFieldsQuotUnSubscribeRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotUnSubscribeRsp));
	}

	BML_FIELD_INFO m_fieldarray_QuotUnSubscribeRsp[1];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* ���ݲ�����Ҫ */
class CBCESFieldsDBOperateSummary:public CBMLFields
{
public:
	CBCESFieldsDBOperateSummary()
	{
		m_fieldarray=m_fieldarray_DBOperateSummary;
		m_fieldsize=sizeof(m_fieldarray_DBOperateSummary)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDBOperateSummary)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TableName,sizeof(TableName),NULL,0,bces_rulearray+BCESFieldIndexTableName);	/* ���� */
		AddField((void*)&TableOperation,sizeof(TableOperation),NULL,0,bces_rulearray+BCESFieldIndexTableOperation);	/* ����� */
	}
	CBCESFieldsDBOperateSummary(const CBCESFieldsDBOperateSummary& DBOperateSummary){
		m_fieldarray=m_fieldarray_DBOperateSummary;
		m_fieldsize=sizeof(m_fieldarray_DBOperateSummary)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DBOperateSummary+sizeof(CBMLFields),sizeof(CBCESFieldsDBOperateSummary)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TableName,sizeof(TableName),NULL,0,bces_rulearray+BCESFieldIndexTableName);	/* ���� */
		AddField((void*)&TableOperation,sizeof(TableOperation),NULL,0,bces_rulearray+BCESFieldIndexTableOperation);	/* ����� */
	}
	CBCESFieldsDBOperateSummary& operator=(const CBCESFieldsDBOperateSummary& DBOperateSummary){
		m_fieldarray=m_fieldarray_DBOperateSummary;
		m_fieldsize=sizeof(m_fieldarray_DBOperateSummary)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DBOperateSummary+sizeof(CBMLFields),sizeof(CBCESFieldsDBOperateSummary)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TableName,sizeof(TableName),NULL,0,bces_rulearray+BCESFieldIndexTableName);	/* ���� */
		AddField((void*)&TableOperation,sizeof(TableOperation),NULL,0,bces_rulearray+BCESFieldIndexTableOperation);	/* ����� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DBOperateSummary),0x00,sizeof(CBCESFieldsDBOperateSummary)-sizeof(CBMLFields)-sizeof(m_fieldarray_DBOperateSummary));
	}

	BML_FIELD_INFO m_fieldarray_DBOperateSummary[2];

	// Field
	BCESFieldTypeTableName TableName;	/* ���� */
	BCESFieldTypeTableOperation TableOperation;	/* ����� */
};

/* ��¼���� */
class CBCESFieldsLoginReq:public CBMLFields
{
public:
	CBCESFieldsLoginReq()
	{
		m_fieldarray=m_fieldarray_LoginReq;
		m_fieldsize=sizeof(m_fieldarray_LoginReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsLoginReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorPassword,sizeof(InvestorPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorPassword);	/* Ͷ�������� */
		AddField((void*)IP,sizeof(IP),NULL,0,bces_rulearray+BCESFieldIndexIP);	/* IP��ַ */
		AddField((void*)&ProductType,sizeof(ProductType),NULL,0,bces_rulearray+BCESFieldIndexProductType);	/* ��Ʒ��� */
		AddField((void*)&ProductVersion,sizeof(ProductVersion),NULL,0,bces_rulearray+BCESFieldIndexProductVersion);	/* ��Ʒ�汾�� */
	}
	CBCESFieldsLoginReq(const CBCESFieldsLoginReq& LoginReq){
		m_fieldarray=m_fieldarray_LoginReq;
		m_fieldsize=sizeof(m_fieldarray_LoginReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LoginReq+sizeof(CBMLFields),sizeof(CBCESFieldsLoginReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorPassword,sizeof(InvestorPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorPassword);	/* Ͷ�������� */
		AddField((void*)IP,sizeof(IP),NULL,0,bces_rulearray+BCESFieldIndexIP);	/* IP��ַ */
		AddField((void*)&ProductType,sizeof(ProductType),NULL,0,bces_rulearray+BCESFieldIndexProductType);	/* ��Ʒ��� */
		AddField((void*)&ProductVersion,sizeof(ProductVersion),NULL,0,bces_rulearray+BCESFieldIndexProductVersion);	/* ��Ʒ�汾�� */
	}
	CBCESFieldsLoginReq& operator=(const CBCESFieldsLoginReq& LoginReq){
		m_fieldarray=m_fieldarray_LoginReq;
		m_fieldsize=sizeof(m_fieldarray_LoginReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LoginReq+sizeof(CBMLFields),sizeof(CBCESFieldsLoginReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorPassword,sizeof(InvestorPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorPassword);	/* Ͷ�������� */
		AddField((void*)IP,sizeof(IP),NULL,0,bces_rulearray+BCESFieldIndexIP);	/* IP��ַ */
		AddField((void*)&ProductType,sizeof(ProductType),NULL,0,bces_rulearray+BCESFieldIndexProductType);	/* ��Ʒ��� */
		AddField((void*)&ProductVersion,sizeof(ProductVersion),NULL,0,bces_rulearray+BCESFieldIndexProductVersion);	/* ��Ʒ�汾�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_LoginReq),0x00,sizeof(CBCESFieldsLoginReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_LoginReq));
	}

	BML_FIELD_INFO m_fieldarray_LoginReq[5];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypePassword InvestorPassword;	/* Ͷ�������� */
	BCESFieldTypeIP IP;	/* IP��ַ */
	BCESFieldTypeFlag ProductType;	/* ��Ʒ��� */
	BCESFieldTypeVersionNo ProductVersion;	/* ��Ʒ�汾�� */
};

/* ��¼Ӧ�� */
class CBCESFieldsLoginRsp:public CBMLFields
{
public:
	CBCESFieldsLoginRsp()
	{
		m_fieldarray=m_fieldarray_LoginRsp;
		m_fieldsize=sizeof(m_fieldarray_LoginRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsLoginRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)SysName,sizeof(SysName),NULL,0,bces_rulearray+BCESFieldIndexSysName);	/* ϵͳ���� */
		AddField((void*)&SysMode,sizeof(SysMode),NULL,0,bces_rulearray+BCESFieldIndexSysMode);	/* ϵͳģʽ */
		AddField((void*)&PayServerType,sizeof(PayServerType),NULL,0,bces_rulearray+BCESFieldIndexPayServerType);	/* ֧���������� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&InvestorAdviserFlag,sizeof(InvestorAdviserFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorAdviserFlag);	/* Ͷ���߹��ʱ�־ */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
	}
	CBCESFieldsLoginRsp(const CBCESFieldsLoginRsp& LoginRsp){
		m_fieldarray=m_fieldarray_LoginRsp;
		m_fieldsize=sizeof(m_fieldarray_LoginRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LoginRsp+sizeof(CBMLFields),sizeof(CBCESFieldsLoginRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)SysName,sizeof(SysName),NULL,0,bces_rulearray+BCESFieldIndexSysName);	/* ϵͳ���� */
		AddField((void*)&SysMode,sizeof(SysMode),NULL,0,bces_rulearray+BCESFieldIndexSysMode);	/* ϵͳģʽ */
		AddField((void*)&PayServerType,sizeof(PayServerType),NULL,0,bces_rulearray+BCESFieldIndexPayServerType);	/* ֧���������� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&InvestorAdviserFlag,sizeof(InvestorAdviserFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorAdviserFlag);	/* Ͷ���߹��ʱ�־ */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
	}
	CBCESFieldsLoginRsp& operator=(const CBCESFieldsLoginRsp& LoginRsp){
		m_fieldarray=m_fieldarray_LoginRsp;
		m_fieldsize=sizeof(m_fieldarray_LoginRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LoginRsp+sizeof(CBMLFields),sizeof(CBCESFieldsLoginRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)SysName,sizeof(SysName),NULL,0,bces_rulearray+BCESFieldIndexSysName);	/* ϵͳ���� */
		AddField((void*)&SysMode,sizeof(SysMode),NULL,0,bces_rulearray+BCESFieldIndexSysMode);	/* ϵͳģʽ */
		AddField((void*)&PayServerType,sizeof(PayServerType),NULL,0,bces_rulearray+BCESFieldIndexPayServerType);	/* ֧���������� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&InvestorAdviserFlag,sizeof(InvestorAdviserFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorAdviserFlag);	/* Ͷ���߹��ʱ�־ */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_LoginRsp),0x00,sizeof(CBCESFieldsLoginRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_LoginRsp));
	}

	BML_FIELD_INFO m_fieldarray_LoginRsp[9];

	// Field
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
class CBCESFieldsLogoutReq:public CBMLFields
{
public:
	CBCESFieldsLogoutReq()
	{
		m_fieldarray=m_fieldarray_LogoutReq;
		m_fieldsize=sizeof(m_fieldarray_LogoutReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsLogoutReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsLogoutReq(const CBCESFieldsLogoutReq& LogoutReq){
		m_fieldarray=m_fieldarray_LogoutReq;
		m_fieldsize=sizeof(m_fieldarray_LogoutReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LogoutReq+sizeof(CBMLFields),sizeof(CBCESFieldsLogoutReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsLogoutReq& operator=(const CBCESFieldsLogoutReq& LogoutReq){
		m_fieldarray=m_fieldarray_LogoutReq;
		m_fieldsize=sizeof(m_fieldarray_LogoutReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LogoutReq+sizeof(CBMLFields),sizeof(CBCESFieldsLogoutReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_LogoutReq),0x00,sizeof(CBCESFieldsLogoutReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_LogoutReq));
	}

	BML_FIELD_INFO m_fieldarray_LogoutReq[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �ǳ�Ӧ�� */
class CBCESFieldsLogoutRsp:public CBMLFields
{
public:
	CBCESFieldsLogoutRsp()
	{
		m_fieldarray=m_fieldarray_LogoutRsp;
		m_fieldsize=sizeof(m_fieldarray_LogoutRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsLogoutRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsLogoutRsp(const CBCESFieldsLogoutRsp& LogoutRsp){
		m_fieldarray=m_fieldarray_LogoutRsp;
		m_fieldsize=sizeof(m_fieldarray_LogoutRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LogoutRsp+sizeof(CBMLFields),sizeof(CBCESFieldsLogoutRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsLogoutRsp& operator=(const CBCESFieldsLogoutRsp& LogoutRsp){
		m_fieldarray=m_fieldarray_LogoutRsp;
		m_fieldsize=sizeof(m_fieldarray_LogoutRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&LogoutRsp+sizeof(CBMLFields),sizeof(CBCESFieldsLogoutRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_LogoutRsp),0x00,sizeof(CBCESFieldsLogoutRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_LogoutRsp));
	}

	BML_FIELD_INFO m_fieldarray_LogoutRsp[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �޸��������� */
class CBCESFieldsChangePasswordReq:public CBMLFields
{
public:
	CBCESFieldsChangePasswordReq()
	{
		m_fieldarray=m_fieldarray_ChangePasswordReq;
		m_fieldsize=sizeof(m_fieldarray_ChangePasswordReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsChangePasswordReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorOldPassword,sizeof(InvestorOldPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorOldPassword);	/* Ͷ���߾����� */
		AddField((void*)InvestorNewPassword,sizeof(InvestorNewPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorNewPassword);	/* Ͷ���������� */
	}
	CBCESFieldsChangePasswordReq(const CBCESFieldsChangePasswordReq& ChangePasswordReq){
		m_fieldarray=m_fieldarray_ChangePasswordReq;
		m_fieldsize=sizeof(m_fieldarray_ChangePasswordReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ChangePasswordReq+sizeof(CBMLFields),sizeof(CBCESFieldsChangePasswordReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorOldPassword,sizeof(InvestorOldPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorOldPassword);	/* Ͷ���߾����� */
		AddField((void*)InvestorNewPassword,sizeof(InvestorNewPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorNewPassword);	/* Ͷ���������� */
	}
	CBCESFieldsChangePasswordReq& operator=(const CBCESFieldsChangePasswordReq& ChangePasswordReq){
		m_fieldarray=m_fieldarray_ChangePasswordReq;
		m_fieldsize=sizeof(m_fieldarray_ChangePasswordReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ChangePasswordReq+sizeof(CBMLFields),sizeof(CBCESFieldsChangePasswordReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorOldPassword,sizeof(InvestorOldPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorOldPassword);	/* Ͷ���߾����� */
		AddField((void*)InvestorNewPassword,sizeof(InvestorNewPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorNewPassword);	/* Ͷ���������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ChangePasswordReq),0x00,sizeof(CBCESFieldsChangePasswordReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_ChangePasswordReq));
	}

	BML_FIELD_INFO m_fieldarray_ChangePasswordReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypePassword InvestorOldPassword;	/* Ͷ���߾����� */
	BCESFieldTypePassword InvestorNewPassword;	/* Ͷ���������� */
};

/* �޸�����Ӧ�� */
class CBCESFieldsChangePasswordRsp:public CBMLFields
{
public:
	CBCESFieldsChangePasswordRsp()
	{
		m_fieldarray=m_fieldarray_ChangePasswordRsp;
		m_fieldsize=sizeof(m_fieldarray_ChangePasswordRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsChangePasswordRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsChangePasswordRsp(const CBCESFieldsChangePasswordRsp& ChangePasswordRsp){
		m_fieldarray=m_fieldarray_ChangePasswordRsp;
		m_fieldsize=sizeof(m_fieldarray_ChangePasswordRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ChangePasswordRsp+sizeof(CBMLFields),sizeof(CBCESFieldsChangePasswordRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsChangePasswordRsp& operator=(const CBCESFieldsChangePasswordRsp& ChangePasswordRsp){
		m_fieldarray=m_fieldarray_ChangePasswordRsp;
		m_fieldsize=sizeof(m_fieldarray_ChangePasswordRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ChangePasswordRsp+sizeof(CBMLFields),sizeof(CBCESFieldsChangePasswordRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ChangePasswordRsp),0x00,sizeof(CBCESFieldsChangePasswordRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_ChangePasswordRsp));
	}

	BML_FIELD_INFO m_fieldarray_ChangePasswordRsp[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �����˻� */
class CBCESFieldsAccount:public CBMLFields
{
public:
	CBCESFieldsAccount()
	{
		m_fieldarray=m_fieldarray_Account;
		m_fieldsize=sizeof(m_fieldarray_Account)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsAccount)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
	}
	CBCESFieldsAccount(const CBCESFieldsAccount& Account){
		m_fieldarray=m_fieldarray_Account;
		m_fieldsize=sizeof(m_fieldarray_Account)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Account+sizeof(CBMLFields),sizeof(CBCESFieldsAccount)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
	}
	CBCESFieldsAccount& operator=(const CBCESFieldsAccount& Account){
		m_fieldarray=m_fieldarray_Account;
		m_fieldsize=sizeof(m_fieldarray_Account)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Account+sizeof(CBMLFields),sizeof(CBCESFieldsAccount)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Account),0x00,sizeof(CBCESFieldsAccount)-sizeof(CBMLFields)-sizeof(m_fieldarray_Account));
	}

	BML_FIELD_INFO m_fieldarray_Account[1];

	// Field
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
};

/* ������ */
class CBCESFieldsExchange:public CBMLFields
{
public:
	CBCESFieldsExchange()
	{
		m_fieldarray=m_fieldarray_Exchange;
		m_fieldsize=sizeof(m_fieldarray_Exchange)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsExchange)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsExchange(const CBCESFieldsExchange& Exchange){
		m_fieldarray=m_fieldarray_Exchange;
		m_fieldsize=sizeof(m_fieldarray_Exchange)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Exchange+sizeof(CBMLFields),sizeof(CBCESFieldsExchange)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsExchange& operator=(const CBCESFieldsExchange& Exchange){
		m_fieldarray=m_fieldarray_Exchange;
		m_fieldsize=sizeof(m_fieldarray_Exchange)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Exchange+sizeof(CBMLFields),sizeof(CBCESFieldsExchange)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Exchange),0x00,sizeof(CBCESFieldsExchange)-sizeof(CBMLFields)-sizeof(m_fieldarray_Exchange));
	}

	BML_FIELD_INFO m_fieldarray_Exchange[1];

	// Field
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ����¼�� */
class CBCESFieldsInputOrder:public CBMLFields
{
public:
	CBCESFieldsInputOrder()
	{
		m_fieldarray=m_fieldarray_InputOrder;
		m_fieldsize=sizeof(m_fieldarray_InputOrder)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInputOrder)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&PriceType,sizeof(PriceType),NULL,0,bces_rulearray+BCESFieldIndexPriceType);	/* �۸����� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)&FilledPoints,sizeof(FilledPoints),NULL,0,bces_rulearray+BCESFieldIndexFilledPoints);	/* �ɽ����� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ConditionType,sizeof(ConditionType),NULL,0,bces_rulearray+BCESFieldIndexConditionType);	/* �������� */
		AddField((void*)&ConditionMethod,sizeof(ConditionMethod),NULL,0,bces_rulearray+BCESFieldIndexConditionMethod);	/* �������� */
		AddField((void*)&ConditionPrice,sizeof(ConditionPrice),NULL,0,bces_rulearray+BCESFieldIndexConditionPrice);	/* �����۸� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
	}
	CBCESFieldsInputOrder(const CBCESFieldsInputOrder& InputOrder){
		m_fieldarray=m_fieldarray_InputOrder;
		m_fieldsize=sizeof(m_fieldarray_InputOrder)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InputOrder+sizeof(CBMLFields),sizeof(CBCESFieldsInputOrder)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&PriceType,sizeof(PriceType),NULL,0,bces_rulearray+BCESFieldIndexPriceType);	/* �۸����� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)&FilledPoints,sizeof(FilledPoints),NULL,0,bces_rulearray+BCESFieldIndexFilledPoints);	/* �ɽ����� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ConditionType,sizeof(ConditionType),NULL,0,bces_rulearray+BCESFieldIndexConditionType);	/* �������� */
		AddField((void*)&ConditionMethod,sizeof(ConditionMethod),NULL,0,bces_rulearray+BCESFieldIndexConditionMethod);	/* �������� */
		AddField((void*)&ConditionPrice,sizeof(ConditionPrice),NULL,0,bces_rulearray+BCESFieldIndexConditionPrice);	/* �����۸� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
	}
	CBCESFieldsInputOrder& operator=(const CBCESFieldsInputOrder& InputOrder){
		m_fieldarray=m_fieldarray_InputOrder;
		m_fieldsize=sizeof(m_fieldarray_InputOrder)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InputOrder+sizeof(CBMLFields),sizeof(CBCESFieldsInputOrder)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&PriceType,sizeof(PriceType),NULL,0,bces_rulearray+BCESFieldIndexPriceType);	/* �۸����� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)&FilledPoints,sizeof(FilledPoints),NULL,0,bces_rulearray+BCESFieldIndexFilledPoints);	/* �ɽ����� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ConditionType,sizeof(ConditionType),NULL,0,bces_rulearray+BCESFieldIndexConditionType);	/* �������� */
		AddField((void*)&ConditionMethod,sizeof(ConditionMethod),NULL,0,bces_rulearray+BCESFieldIndexConditionMethod);	/* �������� */
		AddField((void*)&ConditionPrice,sizeof(ConditionPrice),NULL,0,bces_rulearray+BCESFieldIndexConditionPrice);	/* �����۸� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_InputOrder),0x00,sizeof(CBCESFieldsInputOrder)-sizeof(CBMLFields)-sizeof(m_fieldarray_InputOrder));
	}

	BML_FIELD_INFO m_fieldarray_InputOrder[22];

	// Field
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
class CBCESFieldsOrder:public CBMLFields
{
public:
	CBCESFieldsOrder()
	{
		m_fieldarray=m_fieldarray_Order;
		m_fieldsize=sizeof(m_fieldarray_Order)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsOrder)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)OrderDate,sizeof(OrderDate),NULL,0,bces_rulearray+BCESFieldIndexOrderDate);	/* �������� */
		AddField((void*)OrderTime,sizeof(OrderTime),NULL,0,bces_rulearray+BCESFieldIndexOrderTime);	/* ����ʱ�� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&PriceType,sizeof(PriceType),NULL,0,bces_rulearray+BCESFieldIndexPriceType);	/* �۸����� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&QtyLeft,sizeof(QtyLeft),NULL,0,bces_rulearray+BCESFieldIndexQtyLeft);	/* ʣ������ */
		AddField((void*)&AvgPrice,sizeof(AvgPrice),NULL,0,bces_rulearray+BCESFieldIndexAvgPrice);	/* �ɽ����� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �޸����� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* �޸�ʱ�� */
		AddField((void*)&OrderStatus,sizeof(OrderStatus),NULL,0,bces_rulearray+BCESFieldIndexOrderStatus);	/* ����״̬ */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)&FilledPoints,sizeof(FilledPoints),NULL,0,bces_rulearray+BCESFieldIndexFilledPoints);	/* �ɽ����� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&ConditionType,sizeof(ConditionType),NULL,0,bces_rulearray+BCESFieldIndexConditionType);	/* �������� */
		AddField((void*)&ConditionMethod,sizeof(ConditionMethod),NULL,0,bces_rulearray+BCESFieldIndexConditionMethod);	/* �������� */
		AddField((void*)&ConditionPrice,sizeof(ConditionPrice),NULL,0,bces_rulearray+BCESFieldIndexConditionPrice);	/* �����۸� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)OrderStatusDesc,sizeof(OrderStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexOrderStatusDesc);	/* ����״̬���� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)&CTPFrontID,sizeof(CTPFrontID),NULL,0,bces_rulearray+BCESFieldIndexCTPFrontID);	/* CTPǰ�ñ�� */
		AddField((void*)&CTPSessionID,sizeof(CTPSessionID),NULL,0,bces_rulearray+BCESFieldIndexCTPSessionID);	/* CTP�Ự��� */
		AddField((void*)CTPOrderRef,sizeof(CTPOrderRef),NULL,0,bces_rulearray+BCESFieldIndexCTPOrderRef);	/* CTP�������� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsOrder(const CBCESFieldsOrder& Order){
		m_fieldarray=m_fieldarray_Order;
		m_fieldsize=sizeof(m_fieldarray_Order)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Order+sizeof(CBMLFields),sizeof(CBCESFieldsOrder)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)OrderDate,sizeof(OrderDate),NULL,0,bces_rulearray+BCESFieldIndexOrderDate);	/* �������� */
		AddField((void*)OrderTime,sizeof(OrderTime),NULL,0,bces_rulearray+BCESFieldIndexOrderTime);	/* ����ʱ�� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&PriceType,sizeof(PriceType),NULL,0,bces_rulearray+BCESFieldIndexPriceType);	/* �۸����� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&QtyLeft,sizeof(QtyLeft),NULL,0,bces_rulearray+BCESFieldIndexQtyLeft);	/* ʣ������ */
		AddField((void*)&AvgPrice,sizeof(AvgPrice),NULL,0,bces_rulearray+BCESFieldIndexAvgPrice);	/* �ɽ����� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �޸����� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* �޸�ʱ�� */
		AddField((void*)&OrderStatus,sizeof(OrderStatus),NULL,0,bces_rulearray+BCESFieldIndexOrderStatus);	/* ����״̬ */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)&FilledPoints,sizeof(FilledPoints),NULL,0,bces_rulearray+BCESFieldIndexFilledPoints);	/* �ɽ����� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&ConditionType,sizeof(ConditionType),NULL,0,bces_rulearray+BCESFieldIndexConditionType);	/* �������� */
		AddField((void*)&ConditionMethod,sizeof(ConditionMethod),NULL,0,bces_rulearray+BCESFieldIndexConditionMethod);	/* �������� */
		AddField((void*)&ConditionPrice,sizeof(ConditionPrice),NULL,0,bces_rulearray+BCESFieldIndexConditionPrice);	/* �����۸� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)OrderStatusDesc,sizeof(OrderStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexOrderStatusDesc);	/* ����״̬���� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)&CTPFrontID,sizeof(CTPFrontID),NULL,0,bces_rulearray+BCESFieldIndexCTPFrontID);	/* CTPǰ�ñ�� */
		AddField((void*)&CTPSessionID,sizeof(CTPSessionID),NULL,0,bces_rulearray+BCESFieldIndexCTPSessionID);	/* CTP�Ự��� */
		AddField((void*)CTPOrderRef,sizeof(CTPOrderRef),NULL,0,bces_rulearray+BCESFieldIndexCTPOrderRef);	/* CTP�������� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsOrder& operator=(const CBCESFieldsOrder& Order){
		m_fieldarray=m_fieldarray_Order;
		m_fieldsize=sizeof(m_fieldarray_Order)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Order+sizeof(CBMLFields),sizeof(CBCESFieldsOrder)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)OrderDate,sizeof(OrderDate),NULL,0,bces_rulearray+BCESFieldIndexOrderDate);	/* �������� */
		AddField((void*)OrderTime,sizeof(OrderTime),NULL,0,bces_rulearray+BCESFieldIndexOrderTime);	/* ����ʱ�� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&PriceType,sizeof(PriceType),NULL,0,bces_rulearray+BCESFieldIndexPriceType);	/* �۸����� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&QtyLeft,sizeof(QtyLeft),NULL,0,bces_rulearray+BCESFieldIndexQtyLeft);	/* ʣ������ */
		AddField((void*)&AvgPrice,sizeof(AvgPrice),NULL,0,bces_rulearray+BCESFieldIndexAvgPrice);	/* �ɽ����� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �޸����� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* �޸�ʱ�� */
		AddField((void*)&OrderStatus,sizeof(OrderStatus),NULL,0,bces_rulearray+BCESFieldIndexOrderStatus);	/* ����״̬ */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)&FilledPoints,sizeof(FilledPoints),NULL,0,bces_rulearray+BCESFieldIndexFilledPoints);	/* �ɽ����� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&ConditionType,sizeof(ConditionType),NULL,0,bces_rulearray+BCESFieldIndexConditionType);	/* �������� */
		AddField((void*)&ConditionMethod,sizeof(ConditionMethod),NULL,0,bces_rulearray+BCESFieldIndexConditionMethod);	/* �������� */
		AddField((void*)&ConditionPrice,sizeof(ConditionPrice),NULL,0,bces_rulearray+BCESFieldIndexConditionPrice);	/* �����۸� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)OrderStatusDesc,sizeof(OrderStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexOrderStatusDesc);	/* ����״̬���� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)&CTPFrontID,sizeof(CTPFrontID),NULL,0,bces_rulearray+BCESFieldIndexCTPFrontID);	/* CTPǰ�ñ�� */
		AddField((void*)&CTPSessionID,sizeof(CTPSessionID),NULL,0,bces_rulearray+BCESFieldIndexCTPSessionID);	/* CTP�Ự��� */
		AddField((void*)CTPOrderRef,sizeof(CTPOrderRef),NULL,0,bces_rulearray+BCESFieldIndexCTPOrderRef);	/* CTP�������� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Order),0x00,sizeof(CBCESFieldsOrder)-sizeof(CBMLFields)-sizeof(m_fieldarray_Order));
	}

	BML_FIELD_INFO m_fieldarray_Order[37];

	// Field
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
class CBCESFieldsOrderCancelReq:public CBMLFields
{
public:
	CBCESFieldsOrderCancelReq()
	{
		m_fieldarray=m_fieldarray_OrderCancelReq;
		m_fieldsize=sizeof(m_fieldarray_OrderCancelReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsOrderCancelReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsOrderCancelReq(const CBCESFieldsOrderCancelReq& OrderCancelReq){
		m_fieldarray=m_fieldarray_OrderCancelReq;
		m_fieldsize=sizeof(m_fieldarray_OrderCancelReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&OrderCancelReq+sizeof(CBMLFields),sizeof(CBCESFieldsOrderCancelReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsOrderCancelReq& operator=(const CBCESFieldsOrderCancelReq& OrderCancelReq){
		m_fieldarray=m_fieldarray_OrderCancelReq;
		m_fieldsize=sizeof(m_fieldarray_OrderCancelReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&OrderCancelReq+sizeof(CBMLFields),sizeof(CBCESFieldsOrderCancelReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_OrderCancelReq),0x00,sizeof(CBCESFieldsOrderCancelReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_OrderCancelReq));
	}

	BML_FIELD_INFO m_fieldarray_OrderCancelReq[8];

	// Field
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
class CBCESFieldsOrderCancelRsp:public CBMLFields
{
public:
	CBCESFieldsOrderCancelRsp()
	{
		m_fieldarray=m_fieldarray_OrderCancelRsp;
		m_fieldsize=sizeof(m_fieldarray_OrderCancelRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsOrderCancelRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsOrderCancelRsp(const CBCESFieldsOrderCancelRsp& OrderCancelRsp){
		m_fieldarray=m_fieldarray_OrderCancelRsp;
		m_fieldsize=sizeof(m_fieldarray_OrderCancelRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&OrderCancelRsp+sizeof(CBMLFields),sizeof(CBCESFieldsOrderCancelRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsOrderCancelRsp& operator=(const CBCESFieldsOrderCancelRsp& OrderCancelRsp){
		m_fieldarray=m_fieldarray_OrderCancelRsp;
		m_fieldsize=sizeof(m_fieldarray_OrderCancelRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&OrderCancelRsp+sizeof(CBMLFields),sizeof(CBCESFieldsOrderCancelRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&SessionID,sizeof(SessionID),NULL,0,bces_rulearray+BCESFieldIndexSessionID);	/* �Ự��� */
		AddField((void*)OrderRef,sizeof(OrderRef),NULL,0,bces_rulearray+BCESFieldIndexOrderRef);	/* �������� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_OrderCancelRsp),0x00,sizeof(CBCESFieldsOrderCancelRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_OrderCancelRsp));
	}

	BML_FIELD_INFO m_fieldarray_OrderCancelRsp[8];

	// Field
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
class CBCESFieldsTrade:public CBMLFields
{
public:
	CBCESFieldsTrade()
	{
		m_fieldarray=m_fieldarray_Trade;
		m_fieldsize=sizeof(m_fieldarray_Trade)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTrade)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)MatchDate,sizeof(MatchDate),NULL,0,bces_rulearray+BCESFieldIndexMatchDate);	/* �ɽ����� */
		AddField((void*)MatchTime,sizeof(MatchTime),NULL,0,bces_rulearray+BCESFieldIndexMatchTime);	/* �ɽ�ʱ�� */
		AddField((void*)&FeeRate,sizeof(FeeRate),NULL,0,bces_rulearray+BCESFieldIndexFeeRate);	/* ������ */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsTrade(const CBCESFieldsTrade& Trade){
		m_fieldarray=m_fieldarray_Trade;
		m_fieldsize=sizeof(m_fieldarray_Trade)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Trade+sizeof(CBMLFields),sizeof(CBCESFieldsTrade)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)MatchDate,sizeof(MatchDate),NULL,0,bces_rulearray+BCESFieldIndexMatchDate);	/* �ɽ����� */
		AddField((void*)MatchTime,sizeof(MatchTime),NULL,0,bces_rulearray+BCESFieldIndexMatchTime);	/* �ɽ�ʱ�� */
		AddField((void*)&FeeRate,sizeof(FeeRate),NULL,0,bces_rulearray+BCESFieldIndexFeeRate);	/* ������ */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
	}
	CBCESFieldsTrade& operator=(const CBCESFieldsTrade& Trade){
		m_fieldarray=m_fieldarray_Trade;
		m_fieldsize=sizeof(m_fieldarray_Trade)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Trade+sizeof(CBMLFields),sizeof(CBCESFieldsTrade)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&OCFlag,sizeof(OCFlag),NULL,0,bces_rulearray+BCESFieldIndexOCFlag);	/* ��ƽ��־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)MatchDate,sizeof(MatchDate),NULL,0,bces_rulearray+BCESFieldIndexMatchDate);	/* �ɽ����� */
		AddField((void*)MatchTime,sizeof(MatchTime),NULL,0,bces_rulearray+BCESFieldIndexMatchTime);	/* �ɽ�ʱ�� */
		AddField((void*)&FeeRate,sizeof(FeeRate),NULL,0,bces_rulearray+BCESFieldIndexFeeRate);	/* ������ */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)ClosedTradeDate,sizeof(ClosedTradeDate),NULL,0,bces_rulearray+BCESFieldIndexClosedTradeDate);	/* ƽ�ֽ������� */
		AddField((void*)ClosedOrderID,sizeof(ClosedOrderID),NULL,0,bces_rulearray+BCESFieldIndexClosedOrderID);	/* ƽ�ֶ����� */
		AddField((void*)ClosedMatchID,sizeof(ClosedMatchID),NULL,0,bces_rulearray+BCESFieldIndexClosedMatchID);	/* ƽ�ֳɽ��� */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		AddField((void*)OrderSysID,sizeof(OrderSysID),NULL,0,bces_rulearray+BCESFieldIndexOrderSysID);	/* ������������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Trade),0x00,sizeof(CBCESFieldsTrade)-sizeof(CBMLFields)-sizeof(m_fieldarray_Trade));
	}

	BML_FIELD_INFO m_fieldarray_Trade[19];

	// Field
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
class CBCESFieldsQuot:public CBMLFields
{
public:
	CBCESFieldsQuot()
	{
		m_fieldarray=m_fieldarray_Quot;
		m_fieldsize=sizeof(m_fieldarray_Quot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �ּ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* �ֲ��� */
		AddField((void*)&SettlePrice,sizeof(SettlePrice),NULL,0,bces_rulearray+BCESFieldIndexSettlePrice);	/* ����� */
		AddField((void*)&PreClose,sizeof(PreClose),NULL,0,bces_rulearray+BCESFieldIndexPreClose);	/* �����̼� */
		AddField((void*)&PreSettle,sizeof(PreSettle),NULL,0,bces_rulearray+BCESFieldIndexPreSettle);	/* ������ */
		AddField((void*)&PreOI,sizeof(PreOI),NULL,0,bces_rulearray+BCESFieldIndexPreOI);	/* ��ֲ��� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �������� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* ����ʱ�� */
		AddField((void*)&BidPrice2,sizeof(BidPrice2),NULL,0,bces_rulearray+BCESFieldIndexBidPrice2);	/* �����2 */
		AddField((void*)&BidQty2,sizeof(BidQty2),NULL,0,bces_rulearray+BCESFieldIndexBidQty2);	/* ������2 */
		AddField((void*)&AskPrice2,sizeof(AskPrice2),NULL,0,bces_rulearray+BCESFieldIndexAskPrice2);	/* ������2 */
		AddField((void*)&AskQty2,sizeof(AskQty2),NULL,0,bces_rulearray+BCESFieldIndexAskQty2);	/* ������2 */
		AddField((void*)&BidPrice3,sizeof(BidPrice3),NULL,0,bces_rulearray+BCESFieldIndexBidPrice3);	/* �����3 */
		AddField((void*)&BidQty3,sizeof(BidQty3),NULL,0,bces_rulearray+BCESFieldIndexBidQty3);	/* ������3 */
		AddField((void*)&AskPrice3,sizeof(AskPrice3),NULL,0,bces_rulearray+BCESFieldIndexAskPrice3);	/* ������3 */
		AddField((void*)&AskQty3,sizeof(AskQty3),NULL,0,bces_rulearray+BCESFieldIndexAskQty3);	/* ������3 */
		AddField((void*)&BidPrice4,sizeof(BidPrice4),NULL,0,bces_rulearray+BCESFieldIndexBidPrice4);	/* �����4 */
		AddField((void*)&BidQty4,sizeof(BidQty4),NULL,0,bces_rulearray+BCESFieldIndexBidQty4);	/* ������4 */
		AddField((void*)&AskPrice4,sizeof(AskPrice4),NULL,0,bces_rulearray+BCESFieldIndexAskPrice4);	/* ������4 */
		AddField((void*)&AskQty4,sizeof(AskQty4),NULL,0,bces_rulearray+BCESFieldIndexAskQty4);	/* ������4 */
		AddField((void*)&BidPrice5,sizeof(BidPrice5),NULL,0,bces_rulearray+BCESFieldIndexBidPrice5);	/* �����5 */
		AddField((void*)&BidQty5,sizeof(BidQty5),NULL,0,bces_rulearray+BCESFieldIndexBidQty5);	/* ������5 */
		AddField((void*)&AskPrice5,sizeof(AskPrice5),NULL,0,bces_rulearray+BCESFieldIndexAskPrice5);	/* ������5 */
		AddField((void*)&AskQty5,sizeof(AskQty5),NULL,0,bces_rulearray+BCESFieldIndexAskQty5);	/* ������5 */
		AddField((void*)&BidPrice6,sizeof(BidPrice6),NULL,0,bces_rulearray+BCESFieldIndexBidPrice6);	/* �����6 */
		AddField((void*)&BidQty6,sizeof(BidQty6),NULL,0,bces_rulearray+BCESFieldIndexBidQty6);	/* ������6 */
		AddField((void*)&AskPrice6,sizeof(AskPrice6),NULL,0,bces_rulearray+BCESFieldIndexAskPrice6);	/* ������6 */
		AddField((void*)&AskQty6,sizeof(AskQty6),NULL,0,bces_rulearray+BCESFieldIndexAskQty6);	/* ������6 */
		AddField((void*)&BidPrice7,sizeof(BidPrice7),NULL,0,bces_rulearray+BCESFieldIndexBidPrice7);	/* �����7 */
		AddField((void*)&BidQty7,sizeof(BidQty7),NULL,0,bces_rulearray+BCESFieldIndexBidQty7);	/* ������7 */
		AddField((void*)&AskPrice7,sizeof(AskPrice7),NULL,0,bces_rulearray+BCESFieldIndexAskPrice7);	/* ������7 */
		AddField((void*)&AskQty7,sizeof(AskQty7),NULL,0,bces_rulearray+BCESFieldIndexAskQty7);	/* ������7 */
		AddField((void*)&BidPrice8,sizeof(BidPrice8),NULL,0,bces_rulearray+BCESFieldIndexBidPrice8);	/* �����8 */
		AddField((void*)&BidQty8,sizeof(BidQty8),NULL,0,bces_rulearray+BCESFieldIndexBidQty8);	/* ������8 */
		AddField((void*)&AskPrice8,sizeof(AskPrice8),NULL,0,bces_rulearray+BCESFieldIndexAskPrice8);	/* ������8 */
		AddField((void*)&AskQty8,sizeof(AskQty8),NULL,0,bces_rulearray+BCESFieldIndexAskQty8);	/* ������8 */
		AddField((void*)&BidPrice9,sizeof(BidPrice9),NULL,0,bces_rulearray+BCESFieldIndexBidPrice9);	/* �����9 */
		AddField((void*)&BidQty9,sizeof(BidQty9),NULL,0,bces_rulearray+BCESFieldIndexBidQty9);	/* ������9 */
		AddField((void*)&AskPrice9,sizeof(AskPrice9),NULL,0,bces_rulearray+BCESFieldIndexAskPrice9);	/* ������9 */
		AddField((void*)&AskQty9,sizeof(AskQty9),NULL,0,bces_rulearray+BCESFieldIndexAskQty9);	/* ������9 */
		AddField((void*)&BidPrice10,sizeof(BidPrice10),NULL,0,bces_rulearray+BCESFieldIndexBidPrice10);	/* �����10 */
		AddField((void*)&BidQty10,sizeof(BidQty10),NULL,0,bces_rulearray+BCESFieldIndexBidQty10);	/* ������10 */
		AddField((void*)&AskPrice10,sizeof(AskPrice10),NULL,0,bces_rulearray+BCESFieldIndexAskPrice10);	/* ������10 */
		AddField((void*)&AskQty10,sizeof(AskQty10),NULL,0,bces_rulearray+BCESFieldIndexAskQty10);	/* ������10 */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsQuot(const CBCESFieldsQuot& Quot){
		m_fieldarray=m_fieldarray_Quot;
		m_fieldsize=sizeof(m_fieldarray_Quot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Quot+sizeof(CBMLFields),sizeof(CBCESFieldsQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �ּ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* �ֲ��� */
		AddField((void*)&SettlePrice,sizeof(SettlePrice),NULL,0,bces_rulearray+BCESFieldIndexSettlePrice);	/* ����� */
		AddField((void*)&PreClose,sizeof(PreClose),NULL,0,bces_rulearray+BCESFieldIndexPreClose);	/* �����̼� */
		AddField((void*)&PreSettle,sizeof(PreSettle),NULL,0,bces_rulearray+BCESFieldIndexPreSettle);	/* ������ */
		AddField((void*)&PreOI,sizeof(PreOI),NULL,0,bces_rulearray+BCESFieldIndexPreOI);	/* ��ֲ��� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �������� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* ����ʱ�� */
		AddField((void*)&BidPrice2,sizeof(BidPrice2),NULL,0,bces_rulearray+BCESFieldIndexBidPrice2);	/* �����2 */
		AddField((void*)&BidQty2,sizeof(BidQty2),NULL,0,bces_rulearray+BCESFieldIndexBidQty2);	/* ������2 */
		AddField((void*)&AskPrice2,sizeof(AskPrice2),NULL,0,bces_rulearray+BCESFieldIndexAskPrice2);	/* ������2 */
		AddField((void*)&AskQty2,sizeof(AskQty2),NULL,0,bces_rulearray+BCESFieldIndexAskQty2);	/* ������2 */
		AddField((void*)&BidPrice3,sizeof(BidPrice3),NULL,0,bces_rulearray+BCESFieldIndexBidPrice3);	/* �����3 */
		AddField((void*)&BidQty3,sizeof(BidQty3),NULL,0,bces_rulearray+BCESFieldIndexBidQty3);	/* ������3 */
		AddField((void*)&AskPrice3,sizeof(AskPrice3),NULL,0,bces_rulearray+BCESFieldIndexAskPrice3);	/* ������3 */
		AddField((void*)&AskQty3,sizeof(AskQty3),NULL,0,bces_rulearray+BCESFieldIndexAskQty3);	/* ������3 */
		AddField((void*)&BidPrice4,sizeof(BidPrice4),NULL,0,bces_rulearray+BCESFieldIndexBidPrice4);	/* �����4 */
		AddField((void*)&BidQty4,sizeof(BidQty4),NULL,0,bces_rulearray+BCESFieldIndexBidQty4);	/* ������4 */
		AddField((void*)&AskPrice4,sizeof(AskPrice4),NULL,0,bces_rulearray+BCESFieldIndexAskPrice4);	/* ������4 */
		AddField((void*)&AskQty4,sizeof(AskQty4),NULL,0,bces_rulearray+BCESFieldIndexAskQty4);	/* ������4 */
		AddField((void*)&BidPrice5,sizeof(BidPrice5),NULL,0,bces_rulearray+BCESFieldIndexBidPrice5);	/* �����5 */
		AddField((void*)&BidQty5,sizeof(BidQty5),NULL,0,bces_rulearray+BCESFieldIndexBidQty5);	/* ������5 */
		AddField((void*)&AskPrice5,sizeof(AskPrice5),NULL,0,bces_rulearray+BCESFieldIndexAskPrice5);	/* ������5 */
		AddField((void*)&AskQty5,sizeof(AskQty5),NULL,0,bces_rulearray+BCESFieldIndexAskQty5);	/* ������5 */
		AddField((void*)&BidPrice6,sizeof(BidPrice6),NULL,0,bces_rulearray+BCESFieldIndexBidPrice6);	/* �����6 */
		AddField((void*)&BidQty6,sizeof(BidQty6),NULL,0,bces_rulearray+BCESFieldIndexBidQty6);	/* ������6 */
		AddField((void*)&AskPrice6,sizeof(AskPrice6),NULL,0,bces_rulearray+BCESFieldIndexAskPrice6);	/* ������6 */
		AddField((void*)&AskQty6,sizeof(AskQty6),NULL,0,bces_rulearray+BCESFieldIndexAskQty6);	/* ������6 */
		AddField((void*)&BidPrice7,sizeof(BidPrice7),NULL,0,bces_rulearray+BCESFieldIndexBidPrice7);	/* �����7 */
		AddField((void*)&BidQty7,sizeof(BidQty7),NULL,0,bces_rulearray+BCESFieldIndexBidQty7);	/* ������7 */
		AddField((void*)&AskPrice7,sizeof(AskPrice7),NULL,0,bces_rulearray+BCESFieldIndexAskPrice7);	/* ������7 */
		AddField((void*)&AskQty7,sizeof(AskQty7),NULL,0,bces_rulearray+BCESFieldIndexAskQty7);	/* ������7 */
		AddField((void*)&BidPrice8,sizeof(BidPrice8),NULL,0,bces_rulearray+BCESFieldIndexBidPrice8);	/* �����8 */
		AddField((void*)&BidQty8,sizeof(BidQty8),NULL,0,bces_rulearray+BCESFieldIndexBidQty8);	/* ������8 */
		AddField((void*)&AskPrice8,sizeof(AskPrice8),NULL,0,bces_rulearray+BCESFieldIndexAskPrice8);	/* ������8 */
		AddField((void*)&AskQty8,sizeof(AskQty8),NULL,0,bces_rulearray+BCESFieldIndexAskQty8);	/* ������8 */
		AddField((void*)&BidPrice9,sizeof(BidPrice9),NULL,0,bces_rulearray+BCESFieldIndexBidPrice9);	/* �����9 */
		AddField((void*)&BidQty9,sizeof(BidQty9),NULL,0,bces_rulearray+BCESFieldIndexBidQty9);	/* ������9 */
		AddField((void*)&AskPrice9,sizeof(AskPrice9),NULL,0,bces_rulearray+BCESFieldIndexAskPrice9);	/* ������9 */
		AddField((void*)&AskQty9,sizeof(AskQty9),NULL,0,bces_rulearray+BCESFieldIndexAskQty9);	/* ������9 */
		AddField((void*)&BidPrice10,sizeof(BidPrice10),NULL,0,bces_rulearray+BCESFieldIndexBidPrice10);	/* �����10 */
		AddField((void*)&BidQty10,sizeof(BidQty10),NULL,0,bces_rulearray+BCESFieldIndexBidQty10);	/* ������10 */
		AddField((void*)&AskPrice10,sizeof(AskPrice10),NULL,0,bces_rulearray+BCESFieldIndexAskPrice10);	/* ������10 */
		AddField((void*)&AskQty10,sizeof(AskQty10),NULL,0,bces_rulearray+BCESFieldIndexAskQty10);	/* ������10 */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsQuot& operator=(const CBCESFieldsQuot& Quot){
		m_fieldarray=m_fieldarray_Quot;
		m_fieldsize=sizeof(m_fieldarray_Quot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Quot+sizeof(CBMLFields),sizeof(CBCESFieldsQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �ּ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* �ֲ��� */
		AddField((void*)&SettlePrice,sizeof(SettlePrice),NULL,0,bces_rulearray+BCESFieldIndexSettlePrice);	/* ����� */
		AddField((void*)&PreClose,sizeof(PreClose),NULL,0,bces_rulearray+BCESFieldIndexPreClose);	/* �����̼� */
		AddField((void*)&PreSettle,sizeof(PreSettle),NULL,0,bces_rulearray+BCESFieldIndexPreSettle);	/* ������ */
		AddField((void*)&PreOI,sizeof(PreOI),NULL,0,bces_rulearray+BCESFieldIndexPreOI);	/* ��ֲ��� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �������� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* ����ʱ�� */
		AddField((void*)&BidPrice2,sizeof(BidPrice2),NULL,0,bces_rulearray+BCESFieldIndexBidPrice2);	/* �����2 */
		AddField((void*)&BidQty2,sizeof(BidQty2),NULL,0,bces_rulearray+BCESFieldIndexBidQty2);	/* ������2 */
		AddField((void*)&AskPrice2,sizeof(AskPrice2),NULL,0,bces_rulearray+BCESFieldIndexAskPrice2);	/* ������2 */
		AddField((void*)&AskQty2,sizeof(AskQty2),NULL,0,bces_rulearray+BCESFieldIndexAskQty2);	/* ������2 */
		AddField((void*)&BidPrice3,sizeof(BidPrice3),NULL,0,bces_rulearray+BCESFieldIndexBidPrice3);	/* �����3 */
		AddField((void*)&BidQty3,sizeof(BidQty3),NULL,0,bces_rulearray+BCESFieldIndexBidQty3);	/* ������3 */
		AddField((void*)&AskPrice3,sizeof(AskPrice3),NULL,0,bces_rulearray+BCESFieldIndexAskPrice3);	/* ������3 */
		AddField((void*)&AskQty3,sizeof(AskQty3),NULL,0,bces_rulearray+BCESFieldIndexAskQty3);	/* ������3 */
		AddField((void*)&BidPrice4,sizeof(BidPrice4),NULL,0,bces_rulearray+BCESFieldIndexBidPrice4);	/* �����4 */
		AddField((void*)&BidQty4,sizeof(BidQty4),NULL,0,bces_rulearray+BCESFieldIndexBidQty4);	/* ������4 */
		AddField((void*)&AskPrice4,sizeof(AskPrice4),NULL,0,bces_rulearray+BCESFieldIndexAskPrice4);	/* ������4 */
		AddField((void*)&AskQty4,sizeof(AskQty4),NULL,0,bces_rulearray+BCESFieldIndexAskQty4);	/* ������4 */
		AddField((void*)&BidPrice5,sizeof(BidPrice5),NULL,0,bces_rulearray+BCESFieldIndexBidPrice5);	/* �����5 */
		AddField((void*)&BidQty5,sizeof(BidQty5),NULL,0,bces_rulearray+BCESFieldIndexBidQty5);	/* ������5 */
		AddField((void*)&AskPrice5,sizeof(AskPrice5),NULL,0,bces_rulearray+BCESFieldIndexAskPrice5);	/* ������5 */
		AddField((void*)&AskQty5,sizeof(AskQty5),NULL,0,bces_rulearray+BCESFieldIndexAskQty5);	/* ������5 */
		AddField((void*)&BidPrice6,sizeof(BidPrice6),NULL,0,bces_rulearray+BCESFieldIndexBidPrice6);	/* �����6 */
		AddField((void*)&BidQty6,sizeof(BidQty6),NULL,0,bces_rulearray+BCESFieldIndexBidQty6);	/* ������6 */
		AddField((void*)&AskPrice6,sizeof(AskPrice6),NULL,0,bces_rulearray+BCESFieldIndexAskPrice6);	/* ������6 */
		AddField((void*)&AskQty6,sizeof(AskQty6),NULL,0,bces_rulearray+BCESFieldIndexAskQty6);	/* ������6 */
		AddField((void*)&BidPrice7,sizeof(BidPrice7),NULL,0,bces_rulearray+BCESFieldIndexBidPrice7);	/* �����7 */
		AddField((void*)&BidQty7,sizeof(BidQty7),NULL,0,bces_rulearray+BCESFieldIndexBidQty7);	/* ������7 */
		AddField((void*)&AskPrice7,sizeof(AskPrice7),NULL,0,bces_rulearray+BCESFieldIndexAskPrice7);	/* ������7 */
		AddField((void*)&AskQty7,sizeof(AskQty7),NULL,0,bces_rulearray+BCESFieldIndexAskQty7);	/* ������7 */
		AddField((void*)&BidPrice8,sizeof(BidPrice8),NULL,0,bces_rulearray+BCESFieldIndexBidPrice8);	/* �����8 */
		AddField((void*)&BidQty8,sizeof(BidQty8),NULL,0,bces_rulearray+BCESFieldIndexBidQty8);	/* ������8 */
		AddField((void*)&AskPrice8,sizeof(AskPrice8),NULL,0,bces_rulearray+BCESFieldIndexAskPrice8);	/* ������8 */
		AddField((void*)&AskQty8,sizeof(AskQty8),NULL,0,bces_rulearray+BCESFieldIndexAskQty8);	/* ������8 */
		AddField((void*)&BidPrice9,sizeof(BidPrice9),NULL,0,bces_rulearray+BCESFieldIndexBidPrice9);	/* �����9 */
		AddField((void*)&BidQty9,sizeof(BidQty9),NULL,0,bces_rulearray+BCESFieldIndexBidQty9);	/* ������9 */
		AddField((void*)&AskPrice9,sizeof(AskPrice9),NULL,0,bces_rulearray+BCESFieldIndexAskPrice9);	/* ������9 */
		AddField((void*)&AskQty9,sizeof(AskQty9),NULL,0,bces_rulearray+BCESFieldIndexAskQty9);	/* ������9 */
		AddField((void*)&BidPrice10,sizeof(BidPrice10),NULL,0,bces_rulearray+BCESFieldIndexBidPrice10);	/* �����10 */
		AddField((void*)&BidQty10,sizeof(BidQty10),NULL,0,bces_rulearray+BCESFieldIndexBidQty10);	/* ������10 */
		AddField((void*)&AskPrice10,sizeof(AskPrice10),NULL,0,bces_rulearray+BCESFieldIndexAskPrice10);	/* ������10 */
		AddField((void*)&AskQty10,sizeof(AskQty10),NULL,0,bces_rulearray+BCESFieldIndexAskQty10);	/* ������10 */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Quot),0x00,sizeof(CBCESFieldsQuot)-sizeof(CBMLFields)-sizeof(m_fieldarray_Quot));
	}

	BML_FIELD_INFO m_fieldarray_Quot[61];

	// Field
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
class CBCESFieldsInternationalQuot:public CBMLFields
{
public:
	CBCESFieldsInternationalQuot()
	{
		m_fieldarray=m_fieldarray_InternationalQuot;
		m_fieldsize=sizeof(m_fieldarray_InternationalQuot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInternationalQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �ּ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* �ֲ��� */
		AddField((void*)&SettlePrice,sizeof(SettlePrice),NULL,0,bces_rulearray+BCESFieldIndexSettlePrice);	/* ����� */
		AddField((void*)&PreClose,sizeof(PreClose),NULL,0,bces_rulearray+BCESFieldIndexPreClose);	/* �����̼� */
		AddField((void*)&PreSettle,sizeof(PreSettle),NULL,0,bces_rulearray+BCESFieldIndexPreSettle);	/* ������ */
		AddField((void*)&PreOI,sizeof(PreOI),NULL,0,bces_rulearray+BCESFieldIndexPreOI);	/* ��ֲ��� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �������� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* ����ʱ�� */
		AddField((void*)&BidPrice2,sizeof(BidPrice2),NULL,0,bces_rulearray+BCESFieldIndexBidPrice2);	/* �����2 */
		AddField((void*)&BidQty2,sizeof(BidQty2),NULL,0,bces_rulearray+BCESFieldIndexBidQty2);	/* ������2 */
		AddField((void*)&AskPrice2,sizeof(AskPrice2),NULL,0,bces_rulearray+BCESFieldIndexAskPrice2);	/* ������2 */
		AddField((void*)&AskQty2,sizeof(AskQty2),NULL,0,bces_rulearray+BCESFieldIndexAskQty2);	/* ������2 */
		AddField((void*)&BidPrice3,sizeof(BidPrice3),NULL,0,bces_rulearray+BCESFieldIndexBidPrice3);	/* �����3 */
		AddField((void*)&BidQty3,sizeof(BidQty3),NULL,0,bces_rulearray+BCESFieldIndexBidQty3);	/* ������3 */
		AddField((void*)&AskPrice3,sizeof(AskPrice3),NULL,0,bces_rulearray+BCESFieldIndexAskPrice3);	/* ������3 */
		AddField((void*)&AskQty3,sizeof(AskQty3),NULL,0,bces_rulearray+BCESFieldIndexAskQty3);	/* ������3 */
		AddField((void*)&BidPrice4,sizeof(BidPrice4),NULL,0,bces_rulearray+BCESFieldIndexBidPrice4);	/* �����4 */
		AddField((void*)&BidQty4,sizeof(BidQty4),NULL,0,bces_rulearray+BCESFieldIndexBidQty4);	/* ������4 */
		AddField((void*)&AskPrice4,sizeof(AskPrice4),NULL,0,bces_rulearray+BCESFieldIndexAskPrice4);	/* ������4 */
		AddField((void*)&AskQty4,sizeof(AskQty4),NULL,0,bces_rulearray+BCESFieldIndexAskQty4);	/* ������4 */
		AddField((void*)&BidPrice5,sizeof(BidPrice5),NULL,0,bces_rulearray+BCESFieldIndexBidPrice5);	/* �����5 */
		AddField((void*)&BidQty5,sizeof(BidQty5),NULL,0,bces_rulearray+BCESFieldIndexBidQty5);	/* ������5 */
		AddField((void*)&AskPrice5,sizeof(AskPrice5),NULL,0,bces_rulearray+BCESFieldIndexAskPrice5);	/* ������5 */
		AddField((void*)&AskQty5,sizeof(AskQty5),NULL,0,bces_rulearray+BCESFieldIndexAskQty5);	/* ������5 */
		AddField((void*)&BidPrice6,sizeof(BidPrice6),NULL,0,bces_rulearray+BCESFieldIndexBidPrice6);	/* �����6 */
		AddField((void*)&BidQty6,sizeof(BidQty6),NULL,0,bces_rulearray+BCESFieldIndexBidQty6);	/* ������6 */
		AddField((void*)&AskPrice6,sizeof(AskPrice6),NULL,0,bces_rulearray+BCESFieldIndexAskPrice6);	/* ������6 */
		AddField((void*)&AskQty6,sizeof(AskQty6),NULL,0,bces_rulearray+BCESFieldIndexAskQty6);	/* ������6 */
		AddField((void*)&BidPrice7,sizeof(BidPrice7),NULL,0,bces_rulearray+BCESFieldIndexBidPrice7);	/* �����7 */
		AddField((void*)&BidQty7,sizeof(BidQty7),NULL,0,bces_rulearray+BCESFieldIndexBidQty7);	/* ������7 */
		AddField((void*)&AskPrice7,sizeof(AskPrice7),NULL,0,bces_rulearray+BCESFieldIndexAskPrice7);	/* ������7 */
		AddField((void*)&AskQty7,sizeof(AskQty7),NULL,0,bces_rulearray+BCESFieldIndexAskQty7);	/* ������7 */
		AddField((void*)&BidPrice8,sizeof(BidPrice8),NULL,0,bces_rulearray+BCESFieldIndexBidPrice8);	/* �����8 */
		AddField((void*)&BidQty8,sizeof(BidQty8),NULL,0,bces_rulearray+BCESFieldIndexBidQty8);	/* ������8 */
		AddField((void*)&AskPrice8,sizeof(AskPrice8),NULL,0,bces_rulearray+BCESFieldIndexAskPrice8);	/* ������8 */
		AddField((void*)&AskQty8,sizeof(AskQty8),NULL,0,bces_rulearray+BCESFieldIndexAskQty8);	/* ������8 */
		AddField((void*)&BidPrice9,sizeof(BidPrice9),NULL,0,bces_rulearray+BCESFieldIndexBidPrice9);	/* �����9 */
		AddField((void*)&BidQty9,sizeof(BidQty9),NULL,0,bces_rulearray+BCESFieldIndexBidQty9);	/* ������9 */
		AddField((void*)&AskPrice9,sizeof(AskPrice9),NULL,0,bces_rulearray+BCESFieldIndexAskPrice9);	/* ������9 */
		AddField((void*)&AskQty9,sizeof(AskQty9),NULL,0,bces_rulearray+BCESFieldIndexAskQty9);	/* ������9 */
		AddField((void*)&BidPrice10,sizeof(BidPrice10),NULL,0,bces_rulearray+BCESFieldIndexBidPrice10);	/* �����10 */
		AddField((void*)&BidQty10,sizeof(BidQty10),NULL,0,bces_rulearray+BCESFieldIndexBidQty10);	/* ������10 */
		AddField((void*)&AskPrice10,sizeof(AskPrice10),NULL,0,bces_rulearray+BCESFieldIndexAskPrice10);	/* ������10 */
		AddField((void*)&AskQty10,sizeof(AskQty10),NULL,0,bces_rulearray+BCESFieldIndexAskQty10);	/* ������10 */
		AddField((void*)GoodsName,sizeof(GoodsName),NULL,0,bces_rulearray+BCESFieldIndexGoodsName);	/* Ʒ�ִ��� */
	}
	CBCESFieldsInternationalQuot(const CBCESFieldsInternationalQuot& InternationalQuot){
		m_fieldarray=m_fieldarray_InternationalQuot;
		m_fieldsize=sizeof(m_fieldarray_InternationalQuot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InternationalQuot+sizeof(CBMLFields),sizeof(CBCESFieldsInternationalQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �ּ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* �ֲ��� */
		AddField((void*)&SettlePrice,sizeof(SettlePrice),NULL,0,bces_rulearray+BCESFieldIndexSettlePrice);	/* ����� */
		AddField((void*)&PreClose,sizeof(PreClose),NULL,0,bces_rulearray+BCESFieldIndexPreClose);	/* �����̼� */
		AddField((void*)&PreSettle,sizeof(PreSettle),NULL,0,bces_rulearray+BCESFieldIndexPreSettle);	/* ������ */
		AddField((void*)&PreOI,sizeof(PreOI),NULL,0,bces_rulearray+BCESFieldIndexPreOI);	/* ��ֲ��� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �������� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* ����ʱ�� */
		AddField((void*)&BidPrice2,sizeof(BidPrice2),NULL,0,bces_rulearray+BCESFieldIndexBidPrice2);	/* �����2 */
		AddField((void*)&BidQty2,sizeof(BidQty2),NULL,0,bces_rulearray+BCESFieldIndexBidQty2);	/* ������2 */
		AddField((void*)&AskPrice2,sizeof(AskPrice2),NULL,0,bces_rulearray+BCESFieldIndexAskPrice2);	/* ������2 */
		AddField((void*)&AskQty2,sizeof(AskQty2),NULL,0,bces_rulearray+BCESFieldIndexAskQty2);	/* ������2 */
		AddField((void*)&BidPrice3,sizeof(BidPrice3),NULL,0,bces_rulearray+BCESFieldIndexBidPrice3);	/* �����3 */
		AddField((void*)&BidQty3,sizeof(BidQty3),NULL,0,bces_rulearray+BCESFieldIndexBidQty3);	/* ������3 */
		AddField((void*)&AskPrice3,sizeof(AskPrice3),NULL,0,bces_rulearray+BCESFieldIndexAskPrice3);	/* ������3 */
		AddField((void*)&AskQty3,sizeof(AskQty3),NULL,0,bces_rulearray+BCESFieldIndexAskQty3);	/* ������3 */
		AddField((void*)&BidPrice4,sizeof(BidPrice4),NULL,0,bces_rulearray+BCESFieldIndexBidPrice4);	/* �����4 */
		AddField((void*)&BidQty4,sizeof(BidQty4),NULL,0,bces_rulearray+BCESFieldIndexBidQty4);	/* ������4 */
		AddField((void*)&AskPrice4,sizeof(AskPrice4),NULL,0,bces_rulearray+BCESFieldIndexAskPrice4);	/* ������4 */
		AddField((void*)&AskQty4,sizeof(AskQty4),NULL,0,bces_rulearray+BCESFieldIndexAskQty4);	/* ������4 */
		AddField((void*)&BidPrice5,sizeof(BidPrice5),NULL,0,bces_rulearray+BCESFieldIndexBidPrice5);	/* �����5 */
		AddField((void*)&BidQty5,sizeof(BidQty5),NULL,0,bces_rulearray+BCESFieldIndexBidQty5);	/* ������5 */
		AddField((void*)&AskPrice5,sizeof(AskPrice5),NULL,0,bces_rulearray+BCESFieldIndexAskPrice5);	/* ������5 */
		AddField((void*)&AskQty5,sizeof(AskQty5),NULL,0,bces_rulearray+BCESFieldIndexAskQty5);	/* ������5 */
		AddField((void*)&BidPrice6,sizeof(BidPrice6),NULL,0,bces_rulearray+BCESFieldIndexBidPrice6);	/* �����6 */
		AddField((void*)&BidQty6,sizeof(BidQty6),NULL,0,bces_rulearray+BCESFieldIndexBidQty6);	/* ������6 */
		AddField((void*)&AskPrice6,sizeof(AskPrice6),NULL,0,bces_rulearray+BCESFieldIndexAskPrice6);	/* ������6 */
		AddField((void*)&AskQty6,sizeof(AskQty6),NULL,0,bces_rulearray+BCESFieldIndexAskQty6);	/* ������6 */
		AddField((void*)&BidPrice7,sizeof(BidPrice7),NULL,0,bces_rulearray+BCESFieldIndexBidPrice7);	/* �����7 */
		AddField((void*)&BidQty7,sizeof(BidQty7),NULL,0,bces_rulearray+BCESFieldIndexBidQty7);	/* ������7 */
		AddField((void*)&AskPrice7,sizeof(AskPrice7),NULL,0,bces_rulearray+BCESFieldIndexAskPrice7);	/* ������7 */
		AddField((void*)&AskQty7,sizeof(AskQty7),NULL,0,bces_rulearray+BCESFieldIndexAskQty7);	/* ������7 */
		AddField((void*)&BidPrice8,sizeof(BidPrice8),NULL,0,bces_rulearray+BCESFieldIndexBidPrice8);	/* �����8 */
		AddField((void*)&BidQty8,sizeof(BidQty8),NULL,0,bces_rulearray+BCESFieldIndexBidQty8);	/* ������8 */
		AddField((void*)&AskPrice8,sizeof(AskPrice8),NULL,0,bces_rulearray+BCESFieldIndexAskPrice8);	/* ������8 */
		AddField((void*)&AskQty8,sizeof(AskQty8),NULL,0,bces_rulearray+BCESFieldIndexAskQty8);	/* ������8 */
		AddField((void*)&BidPrice9,sizeof(BidPrice9),NULL,0,bces_rulearray+BCESFieldIndexBidPrice9);	/* �����9 */
		AddField((void*)&BidQty9,sizeof(BidQty9),NULL,0,bces_rulearray+BCESFieldIndexBidQty9);	/* ������9 */
		AddField((void*)&AskPrice9,sizeof(AskPrice9),NULL,0,bces_rulearray+BCESFieldIndexAskPrice9);	/* ������9 */
		AddField((void*)&AskQty9,sizeof(AskQty9),NULL,0,bces_rulearray+BCESFieldIndexAskQty9);	/* ������9 */
		AddField((void*)&BidPrice10,sizeof(BidPrice10),NULL,0,bces_rulearray+BCESFieldIndexBidPrice10);	/* �����10 */
		AddField((void*)&BidQty10,sizeof(BidQty10),NULL,0,bces_rulearray+BCESFieldIndexBidQty10);	/* ������10 */
		AddField((void*)&AskPrice10,sizeof(AskPrice10),NULL,0,bces_rulearray+BCESFieldIndexAskPrice10);	/* ������10 */
		AddField((void*)&AskQty10,sizeof(AskQty10),NULL,0,bces_rulearray+BCESFieldIndexAskQty10);	/* ������10 */
		AddField((void*)GoodsName,sizeof(GoodsName),NULL,0,bces_rulearray+BCESFieldIndexGoodsName);	/* Ʒ�ִ��� */
	}
	CBCESFieldsInternationalQuot& operator=(const CBCESFieldsInternationalQuot& InternationalQuot){
		m_fieldarray=m_fieldarray_InternationalQuot;
		m_fieldsize=sizeof(m_fieldarray_InternationalQuot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InternationalQuot+sizeof(CBMLFields),sizeof(CBCESFieldsInternationalQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �ּ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* �ֲ��� */
		AddField((void*)&SettlePrice,sizeof(SettlePrice),NULL,0,bces_rulearray+BCESFieldIndexSettlePrice);	/* ����� */
		AddField((void*)&PreClose,sizeof(PreClose),NULL,0,bces_rulearray+BCESFieldIndexPreClose);	/* �����̼� */
		AddField((void*)&PreSettle,sizeof(PreSettle),NULL,0,bces_rulearray+BCESFieldIndexPreSettle);	/* ������ */
		AddField((void*)&PreOI,sizeof(PreOI),NULL,0,bces_rulearray+BCESFieldIndexPreOI);	/* ��ֲ��� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ModifyDate,sizeof(ModifyDate),NULL,0,bces_rulearray+BCESFieldIndexModifyDate);	/* �������� */
		AddField((void*)ModifyTime,sizeof(ModifyTime),NULL,0,bces_rulearray+BCESFieldIndexModifyTime);	/* ����ʱ�� */
		AddField((void*)&BidPrice2,sizeof(BidPrice2),NULL,0,bces_rulearray+BCESFieldIndexBidPrice2);	/* �����2 */
		AddField((void*)&BidQty2,sizeof(BidQty2),NULL,0,bces_rulearray+BCESFieldIndexBidQty2);	/* ������2 */
		AddField((void*)&AskPrice2,sizeof(AskPrice2),NULL,0,bces_rulearray+BCESFieldIndexAskPrice2);	/* ������2 */
		AddField((void*)&AskQty2,sizeof(AskQty2),NULL,0,bces_rulearray+BCESFieldIndexAskQty2);	/* ������2 */
		AddField((void*)&BidPrice3,sizeof(BidPrice3),NULL,0,bces_rulearray+BCESFieldIndexBidPrice3);	/* �����3 */
		AddField((void*)&BidQty3,sizeof(BidQty3),NULL,0,bces_rulearray+BCESFieldIndexBidQty3);	/* ������3 */
		AddField((void*)&AskPrice3,sizeof(AskPrice3),NULL,0,bces_rulearray+BCESFieldIndexAskPrice3);	/* ������3 */
		AddField((void*)&AskQty3,sizeof(AskQty3),NULL,0,bces_rulearray+BCESFieldIndexAskQty3);	/* ������3 */
		AddField((void*)&BidPrice4,sizeof(BidPrice4),NULL,0,bces_rulearray+BCESFieldIndexBidPrice4);	/* �����4 */
		AddField((void*)&BidQty4,sizeof(BidQty4),NULL,0,bces_rulearray+BCESFieldIndexBidQty4);	/* ������4 */
		AddField((void*)&AskPrice4,sizeof(AskPrice4),NULL,0,bces_rulearray+BCESFieldIndexAskPrice4);	/* ������4 */
		AddField((void*)&AskQty4,sizeof(AskQty4),NULL,0,bces_rulearray+BCESFieldIndexAskQty4);	/* ������4 */
		AddField((void*)&BidPrice5,sizeof(BidPrice5),NULL,0,bces_rulearray+BCESFieldIndexBidPrice5);	/* �����5 */
		AddField((void*)&BidQty5,sizeof(BidQty5),NULL,0,bces_rulearray+BCESFieldIndexBidQty5);	/* ������5 */
		AddField((void*)&AskPrice5,sizeof(AskPrice5),NULL,0,bces_rulearray+BCESFieldIndexAskPrice5);	/* ������5 */
		AddField((void*)&AskQty5,sizeof(AskQty5),NULL,0,bces_rulearray+BCESFieldIndexAskQty5);	/* ������5 */
		AddField((void*)&BidPrice6,sizeof(BidPrice6),NULL,0,bces_rulearray+BCESFieldIndexBidPrice6);	/* �����6 */
		AddField((void*)&BidQty6,sizeof(BidQty6),NULL,0,bces_rulearray+BCESFieldIndexBidQty6);	/* ������6 */
		AddField((void*)&AskPrice6,sizeof(AskPrice6),NULL,0,bces_rulearray+BCESFieldIndexAskPrice6);	/* ������6 */
		AddField((void*)&AskQty6,sizeof(AskQty6),NULL,0,bces_rulearray+BCESFieldIndexAskQty6);	/* ������6 */
		AddField((void*)&BidPrice7,sizeof(BidPrice7),NULL,0,bces_rulearray+BCESFieldIndexBidPrice7);	/* �����7 */
		AddField((void*)&BidQty7,sizeof(BidQty7),NULL,0,bces_rulearray+BCESFieldIndexBidQty7);	/* ������7 */
		AddField((void*)&AskPrice7,sizeof(AskPrice7),NULL,0,bces_rulearray+BCESFieldIndexAskPrice7);	/* ������7 */
		AddField((void*)&AskQty7,sizeof(AskQty7),NULL,0,bces_rulearray+BCESFieldIndexAskQty7);	/* ������7 */
		AddField((void*)&BidPrice8,sizeof(BidPrice8),NULL,0,bces_rulearray+BCESFieldIndexBidPrice8);	/* �����8 */
		AddField((void*)&BidQty8,sizeof(BidQty8),NULL,0,bces_rulearray+BCESFieldIndexBidQty8);	/* ������8 */
		AddField((void*)&AskPrice8,sizeof(AskPrice8),NULL,0,bces_rulearray+BCESFieldIndexAskPrice8);	/* ������8 */
		AddField((void*)&AskQty8,sizeof(AskQty8),NULL,0,bces_rulearray+BCESFieldIndexAskQty8);	/* ������8 */
		AddField((void*)&BidPrice9,sizeof(BidPrice9),NULL,0,bces_rulearray+BCESFieldIndexBidPrice9);	/* �����9 */
		AddField((void*)&BidQty9,sizeof(BidQty9),NULL,0,bces_rulearray+BCESFieldIndexBidQty9);	/* ������9 */
		AddField((void*)&AskPrice9,sizeof(AskPrice9),NULL,0,bces_rulearray+BCESFieldIndexAskPrice9);	/* ������9 */
		AddField((void*)&AskQty9,sizeof(AskQty9),NULL,0,bces_rulearray+BCESFieldIndexAskQty9);	/* ������9 */
		AddField((void*)&BidPrice10,sizeof(BidPrice10),NULL,0,bces_rulearray+BCESFieldIndexBidPrice10);	/* �����10 */
		AddField((void*)&BidQty10,sizeof(BidQty10),NULL,0,bces_rulearray+BCESFieldIndexBidQty10);	/* ������10 */
		AddField((void*)&AskPrice10,sizeof(AskPrice10),NULL,0,bces_rulearray+BCESFieldIndexAskPrice10);	/* ������10 */
		AddField((void*)&AskQty10,sizeof(AskQty10),NULL,0,bces_rulearray+BCESFieldIndexAskQty10);	/* ������10 */
		AddField((void*)GoodsName,sizeof(GoodsName),NULL,0,bces_rulearray+BCESFieldIndexGoodsName);	/* Ʒ�ִ��� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_InternationalQuot),0x00,sizeof(CBCESFieldsInternationalQuot)-sizeof(CBMLFields)-sizeof(m_fieldarray_InternationalQuot));
	}

	BML_FIELD_INFO m_fieldarray_InternationalQuot[58];

	// Field
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
class CBCESFieldsQuotQueryReq:public CBMLFields
{
public:
	CBCESFieldsQuotQueryReq()
	{
		m_fieldarray=m_fieldarray_QuotQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsQuotQueryReq(const CBCESFieldsQuotQueryReq& QuotQueryReq){
		m_fieldarray=m_fieldarray_QuotQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsQuotQueryReq& operator=(const CBCESFieldsQuotQueryReq& QuotQueryReq){
		m_fieldarray=m_fieldarray_QuotQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotQueryReq),0x00,sizeof(CBCESFieldsQuotQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_QuotQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ������ѯ���� */
class CBCESFieldsOrderQueryReq:public CBMLFields
{
public:
	CBCESFieldsOrderQueryReq()
	{
		m_fieldarray=m_fieldarray_OrderQueryReq;
		m_fieldsize=sizeof(m_fieldarray_OrderQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsOrderQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsOrderQueryReq(const CBCESFieldsOrderQueryReq& OrderQueryReq){
		m_fieldarray=m_fieldarray_OrderQueryReq;
		m_fieldsize=sizeof(m_fieldarray_OrderQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&OrderQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsOrderQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsOrderQueryReq& operator=(const CBCESFieldsOrderQueryReq& OrderQueryReq){
		m_fieldarray=m_fieldarray_OrderQueryReq;
		m_fieldsize=sizeof(m_fieldarray_OrderQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&OrderQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsOrderQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_OrderQueryReq),0x00,sizeof(CBCESFieldsOrderQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_OrderQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_OrderQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ɽ���ѯ���� */
class CBCESFieldsTradeQueryReq:public CBMLFields
{
public:
	CBCESFieldsTradeQueryReq()
	{
		m_fieldarray=m_fieldarray_TradeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsTradeQueryReq(const CBCESFieldsTradeQueryReq& TradeQueryReq){
		m_fieldarray=m_fieldarray_TradeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsTradeQueryReq& operator=(const CBCESFieldsTradeQueryReq& TradeQueryReq){
		m_fieldarray=m_fieldarray_TradeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeQueryReq),0x00,sizeof(CBCESFieldsTradeQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_TradeQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ֲֲ�ѯ */
class CBCESFieldsPosiQueryReq:public CBMLFields
{
public:
	CBCESFieldsPosiQueryReq()
	{
		m_fieldarray=m_fieldarray_PosiQueryReq;
		m_fieldsize=sizeof(m_fieldarray_PosiQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsPosiQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsPosiQueryReq(const CBCESFieldsPosiQueryReq& PosiQueryReq){
		m_fieldarray=m_fieldarray_PosiQueryReq;
		m_fieldsize=sizeof(m_fieldarray_PosiQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&PosiQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsPosiQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsPosiQueryReq& operator=(const CBCESFieldsPosiQueryReq& PosiQueryReq){
		m_fieldarray=m_fieldarray_PosiQueryReq;
		m_fieldsize=sizeof(m_fieldarray_PosiQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&PosiQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsPosiQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_PosiQueryReq),0x00,sizeof(CBCESFieldsPosiQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_PosiQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_PosiQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ֲ���ϸ��ѯ */
class CBCESFieldsPosiDetailQueryReq:public CBMLFields
{
public:
	CBCESFieldsPosiDetailQueryReq()
	{
		m_fieldarray=m_fieldarray_PosiDetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_PosiDetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsPosiDetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsPosiDetailQueryReq(const CBCESFieldsPosiDetailQueryReq& PosiDetailQueryReq){
		m_fieldarray=m_fieldarray_PosiDetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_PosiDetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&PosiDetailQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsPosiDetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsPosiDetailQueryReq& operator=(const CBCESFieldsPosiDetailQueryReq& PosiDetailQueryReq){
		m_fieldarray=m_fieldarray_PosiDetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_PosiDetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&PosiDetailQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsPosiDetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_PosiDetailQueryReq),0x00,sizeof(CBCESFieldsPosiDetailQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_PosiDetailQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_PosiDetailQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ��ʷ�ֲ���ϸ��ѯ */
class CBCESFieldsHisPosiDetailQueryReq:public CBMLFields
{
public:
	CBCESFieldsHisPosiDetailQueryReq()
	{
		m_fieldarray=m_fieldarray_HisPosiDetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisPosiDetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsHisPosiDetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsHisPosiDetailQueryReq(const CBCESFieldsHisPosiDetailQueryReq& HisPosiDetailQueryReq){
		m_fieldarray=m_fieldarray_HisPosiDetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisPosiDetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisPosiDetailQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisPosiDetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsHisPosiDetailQueryReq& operator=(const CBCESFieldsHisPosiDetailQueryReq& HisPosiDetailQueryReq){
		m_fieldarray=m_fieldarray_HisPosiDetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisPosiDetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisPosiDetailQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisPosiDetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_HisPosiDetailQueryReq),0x00,sizeof(CBCESFieldsHisPosiDetailQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_HisPosiDetailQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_HisPosiDetailQueryReq[5];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ֲ� */
class CBCESFieldsPosi:public CBMLFields
{
public:
	CBCESFieldsPosi()
	{
		m_fieldarray=m_fieldarray_Posi;
		m_fieldsize=sizeof(m_fieldarray_Posi)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsPosi)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BuyQty,sizeof(BuyQty),NULL,0,bces_rulearray+BCESFieldIndexBuyQty);	/* ��ֲ��� */
		AddField((void*)&BuyPrice,sizeof(BuyPrice),NULL,0,bces_rulearray+BCESFieldIndexBuyPrice);	/* ��ֲ־��� */
		AddField((void*)&SellQty,sizeof(SellQty),NULL,0,bces_rulearray+BCESFieldIndexSellQty);	/* ���ֲ��� */
		AddField((void*)&SellPrice,sizeof(SellPrice),NULL,0,bces_rulearray+BCESFieldIndexSellPrice);	/* ���ֲ־��� */
		AddField((void*)&BuyQtyFrozen,sizeof(BuyQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexBuyQtyFrozen);	/* �򶳽�ֲ��� */
		AddField((void*)&SellQtyFrozen,sizeof(SellQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexSellQtyFrozen);	/* ������ֲ��� */
		AddField((void*)&PreBuyQty,sizeof(PreBuyQty),NULL,0,bces_rulearray+BCESFieldIndexPreBuyQty);	/* ����ֲ��� */
		AddField((void*)&PreSellQty,sizeof(PreSellQty),NULL,0,bces_rulearray+BCESFieldIndexPreSellQty);	/* �����ֲ��� */
		AddField((void*)&TodayBuyQty,sizeof(TodayBuyQty),NULL,0,bces_rulearray+BCESFieldIndexTodayBuyQty);	/* ����ֲ��� */
		AddField((void*)&TodaySellQty,sizeof(TodaySellQty),NULL,0,bces_rulearray+BCESFieldIndexTodaySellQty);	/* �����ֲ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&TodayBuyQtyFrozen,sizeof(TodayBuyQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexTodayBuyQtyFrozen);	/* ���򶳽�ֲ��� */
		AddField((void*)&TodaySellQtyFrozen,sizeof(TodaySellQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexTodaySellQtyFrozen);	/* ��������ֲ��� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&FeeFrozen,sizeof(FeeFrozen),NULL,0,bces_rulearray+BCESFieldIndexFeeFrozen);	/* ���������� */
	}
	CBCESFieldsPosi(const CBCESFieldsPosi& Posi){
		m_fieldarray=m_fieldarray_Posi;
		m_fieldsize=sizeof(m_fieldarray_Posi)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Posi+sizeof(CBMLFields),sizeof(CBCESFieldsPosi)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BuyQty,sizeof(BuyQty),NULL,0,bces_rulearray+BCESFieldIndexBuyQty);	/* ��ֲ��� */
		AddField((void*)&BuyPrice,sizeof(BuyPrice),NULL,0,bces_rulearray+BCESFieldIndexBuyPrice);	/* ��ֲ־��� */
		AddField((void*)&SellQty,sizeof(SellQty),NULL,0,bces_rulearray+BCESFieldIndexSellQty);	/* ���ֲ��� */
		AddField((void*)&SellPrice,sizeof(SellPrice),NULL,0,bces_rulearray+BCESFieldIndexSellPrice);	/* ���ֲ־��� */
		AddField((void*)&BuyQtyFrozen,sizeof(BuyQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexBuyQtyFrozen);	/* �򶳽�ֲ��� */
		AddField((void*)&SellQtyFrozen,sizeof(SellQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexSellQtyFrozen);	/* ������ֲ��� */
		AddField((void*)&PreBuyQty,sizeof(PreBuyQty),NULL,0,bces_rulearray+BCESFieldIndexPreBuyQty);	/* ����ֲ��� */
		AddField((void*)&PreSellQty,sizeof(PreSellQty),NULL,0,bces_rulearray+BCESFieldIndexPreSellQty);	/* �����ֲ��� */
		AddField((void*)&TodayBuyQty,sizeof(TodayBuyQty),NULL,0,bces_rulearray+BCESFieldIndexTodayBuyQty);	/* ����ֲ��� */
		AddField((void*)&TodaySellQty,sizeof(TodaySellQty),NULL,0,bces_rulearray+BCESFieldIndexTodaySellQty);	/* �����ֲ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&TodayBuyQtyFrozen,sizeof(TodayBuyQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexTodayBuyQtyFrozen);	/* ���򶳽�ֲ��� */
		AddField((void*)&TodaySellQtyFrozen,sizeof(TodaySellQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexTodaySellQtyFrozen);	/* ��������ֲ��� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&FeeFrozen,sizeof(FeeFrozen),NULL,0,bces_rulearray+BCESFieldIndexFeeFrozen);	/* ���������� */
	}
	CBCESFieldsPosi& operator=(const CBCESFieldsPosi& Posi){
		m_fieldarray=m_fieldarray_Posi;
		m_fieldsize=sizeof(m_fieldarray_Posi)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Posi+sizeof(CBMLFields),sizeof(CBCESFieldsPosi)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BuyQty,sizeof(BuyQty),NULL,0,bces_rulearray+BCESFieldIndexBuyQty);	/* ��ֲ��� */
		AddField((void*)&BuyPrice,sizeof(BuyPrice),NULL,0,bces_rulearray+BCESFieldIndexBuyPrice);	/* ��ֲ־��� */
		AddField((void*)&SellQty,sizeof(SellQty),NULL,0,bces_rulearray+BCESFieldIndexSellQty);	/* ���ֲ��� */
		AddField((void*)&SellPrice,sizeof(SellPrice),NULL,0,bces_rulearray+BCESFieldIndexSellPrice);	/* ���ֲ־��� */
		AddField((void*)&BuyQtyFrozen,sizeof(BuyQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexBuyQtyFrozen);	/* �򶳽�ֲ��� */
		AddField((void*)&SellQtyFrozen,sizeof(SellQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexSellQtyFrozen);	/* ������ֲ��� */
		AddField((void*)&PreBuyQty,sizeof(PreBuyQty),NULL,0,bces_rulearray+BCESFieldIndexPreBuyQty);	/* ����ֲ��� */
		AddField((void*)&PreSellQty,sizeof(PreSellQty),NULL,0,bces_rulearray+BCESFieldIndexPreSellQty);	/* �����ֲ��� */
		AddField((void*)&TodayBuyQty,sizeof(TodayBuyQty),NULL,0,bces_rulearray+BCESFieldIndexTodayBuyQty);	/* ����ֲ��� */
		AddField((void*)&TodaySellQty,sizeof(TodaySellQty),NULL,0,bces_rulearray+BCESFieldIndexTodaySellQty);	/* �����ֲ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&TodayBuyQtyFrozen,sizeof(TodayBuyQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexTodayBuyQtyFrozen);	/* ���򶳽�ֲ��� */
		AddField((void*)&TodaySellQtyFrozen,sizeof(TodaySellQtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexTodaySellQtyFrozen);	/* ��������ֲ��� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&FeeFrozen,sizeof(FeeFrozen),NULL,0,bces_rulearray+BCESFieldIndexFeeFrozen);	/* ���������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Posi),0x00,sizeof(CBCESFieldsPosi)-sizeof(CBMLFields)-sizeof(m_fieldarray_Posi));
	}

	BML_FIELD_INFO m_fieldarray_Posi[22];

	// Field
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
class CBCESFieldsPosiDetail:public CBMLFields
{
public:
	CBCESFieldsPosiDetail()
	{
		m_fieldarray=m_fieldarray_PosiDetail;
		m_fieldsize=sizeof(m_fieldarray_PosiDetail)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsPosiDetail)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&QtyLeft,sizeof(QtyLeft),NULL,0,bces_rulearray+BCESFieldIndexQtyLeft);	/* ʣ������ */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)AgentName,sizeof(AgentName),NULL,0,bces_rulearray+BCESFieldIndexAgentName);	/* ���������� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ��֤�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CloseDate,sizeof(CloseDate),NULL,0,bces_rulearray+BCESFieldIndexCloseDate);	/* ƽ������ */
		AddField((void*)CloseTime,sizeof(CloseTime),NULL,0,bces_rulearray+BCESFieldIndexCloseTime);	/* ƽ��ʱ�� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ƽ�ּ۸� */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
		AddField((void*)&QtyFrozen,sizeof(QtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexQtyFrozen);	/* ����ֲ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&CreatePrice,sizeof(CreatePrice),NULL,0,bces_rulearray+BCESFieldIndexCreatePrice);	/* ���ּ� */
		AddField((void*)&HistoryClosedPL,sizeof(HistoryClosedPL),NULL,0,bces_rulearray+BCESFieldIndexHistoryClosedPL);	/* ��ʷƽ��ӯ�� */
		AddField((void*)CreateTradeDate,sizeof(CreateTradeDate),NULL,0,bces_rulearray+BCESFieldIndexCreateTradeDate);	/* ���ֽ������� */
		AddField((void*)&PreQtyLeft,sizeof(PreQtyLeft),NULL,0,bces_rulearray+BCESFieldIndexPreQtyLeft);	/* ����ʣ������ */
		AddField((void*)&PreClosedPL,sizeof(PreClosedPL),NULL,0,bces_rulearray+BCESFieldIndexPreClosedPL);	/* ����ƽ��ӯ�� */
		AddField((void*)&PreClosePrice,sizeof(PreClosePrice),NULL,0,bces_rulearray+BCESFieldIndexPreClosePrice);	/* ����ƽ�ּ۸� */
	}
	CBCESFieldsPosiDetail(const CBCESFieldsPosiDetail& PosiDetail){
		m_fieldarray=m_fieldarray_PosiDetail;
		m_fieldsize=sizeof(m_fieldarray_PosiDetail)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&PosiDetail+sizeof(CBMLFields),sizeof(CBCESFieldsPosiDetail)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&QtyLeft,sizeof(QtyLeft),NULL,0,bces_rulearray+BCESFieldIndexQtyLeft);	/* ʣ������ */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)AgentName,sizeof(AgentName),NULL,0,bces_rulearray+BCESFieldIndexAgentName);	/* ���������� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ��֤�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CloseDate,sizeof(CloseDate),NULL,0,bces_rulearray+BCESFieldIndexCloseDate);	/* ƽ������ */
		AddField((void*)CloseTime,sizeof(CloseTime),NULL,0,bces_rulearray+BCESFieldIndexCloseTime);	/* ƽ��ʱ�� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ƽ�ּ۸� */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
		AddField((void*)&QtyFrozen,sizeof(QtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexQtyFrozen);	/* ����ֲ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&CreatePrice,sizeof(CreatePrice),NULL,0,bces_rulearray+BCESFieldIndexCreatePrice);	/* ���ּ� */
		AddField((void*)&HistoryClosedPL,sizeof(HistoryClosedPL),NULL,0,bces_rulearray+BCESFieldIndexHistoryClosedPL);	/* ��ʷƽ��ӯ�� */
		AddField((void*)CreateTradeDate,sizeof(CreateTradeDate),NULL,0,bces_rulearray+BCESFieldIndexCreateTradeDate);	/* ���ֽ������� */
		AddField((void*)&PreQtyLeft,sizeof(PreQtyLeft),NULL,0,bces_rulearray+BCESFieldIndexPreQtyLeft);	/* ����ʣ������ */
		AddField((void*)&PreClosedPL,sizeof(PreClosedPL),NULL,0,bces_rulearray+BCESFieldIndexPreClosedPL);	/* ����ƽ��ӯ�� */
		AddField((void*)&PreClosePrice,sizeof(PreClosePrice),NULL,0,bces_rulearray+BCESFieldIndexPreClosePrice);	/* ����ƽ�ּ۸� */
	}
	CBCESFieldsPosiDetail& operator=(const CBCESFieldsPosiDetail& PosiDetail){
		m_fieldarray=m_fieldarray_PosiDetail;
		m_fieldsize=sizeof(m_fieldarray_PosiDetail)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&PosiDetail+sizeof(CBMLFields),sizeof(CBCESFieldsPosiDetail)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)OrderID,sizeof(OrderID),NULL,0,bces_rulearray+BCESFieldIndexOrderID);	/* ������ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&QtyLeft,sizeof(QtyLeft),NULL,0,bces_rulearray+BCESFieldIndexQtyLeft);	/* ʣ������ */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)AgentName,sizeof(AgentName),NULL,0,bces_rulearray+BCESFieldIndexAgentName);	/* ���������� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ��֤�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CloseDate,sizeof(CloseDate),NULL,0,bces_rulearray+BCESFieldIndexCloseDate);	/* ƽ������ */
		AddField((void*)CloseTime,sizeof(CloseTime),NULL,0,bces_rulearray+BCESFieldIndexCloseTime);	/* ƽ��ʱ�� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ƽ�ּ۸� */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
		AddField((void*)&QtyFrozen,sizeof(QtyFrozen),NULL,0,bces_rulearray+BCESFieldIndexQtyFrozen);	/* ����ֲ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&CreatePrice,sizeof(CreatePrice),NULL,0,bces_rulearray+BCESFieldIndexCreatePrice);	/* ���ּ� */
		AddField((void*)&HistoryClosedPL,sizeof(HistoryClosedPL),NULL,0,bces_rulearray+BCESFieldIndexHistoryClosedPL);	/* ��ʷƽ��ӯ�� */
		AddField((void*)CreateTradeDate,sizeof(CreateTradeDate),NULL,0,bces_rulearray+BCESFieldIndexCreateTradeDate);	/* ���ֽ������� */
		AddField((void*)&PreQtyLeft,sizeof(PreQtyLeft),NULL,0,bces_rulearray+BCESFieldIndexPreQtyLeft);	/* ����ʣ������ */
		AddField((void*)&PreClosedPL,sizeof(PreClosedPL),NULL,0,bces_rulearray+BCESFieldIndexPreClosedPL);	/* ����ƽ��ӯ�� */
		AddField((void*)&PreClosePrice,sizeof(PreClosePrice),NULL,0,bces_rulearray+BCESFieldIndexPreClosePrice);	/* ����ƽ�ּ۸� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_PosiDetail),0x00,sizeof(CBCESFieldsPosiDetail)-sizeof(CBMLFields)-sizeof(m_fieldarray_PosiDetail));
	}

	BML_FIELD_INFO m_fieldarray_PosiDetail[32];

	// Field
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
	BCESFieldTypeAmount PreClosedPL;	/* ����ƽ��ӯ�� */
	BCESFieldTypePrice PreClosePrice;	/* ����ƽ�ּ۸� */
};

/* �ʽ��ѯ���� */
class CBCESFieldsFundQueryReq:public CBMLFields
{
public:
	CBCESFieldsFundQueryReq()
	{
		m_fieldarray=m_fieldarray_FundQueryReq;
		m_fieldsize=sizeof(m_fieldarray_FundQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsFundQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsFundQueryReq(const CBCESFieldsFundQueryReq& FundQueryReq){
		m_fieldarray=m_fieldarray_FundQueryReq;
		m_fieldsize=sizeof(m_fieldarray_FundQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FundQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsFundQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsFundQueryReq& operator=(const CBCESFieldsFundQueryReq& FundQueryReq){
		m_fieldarray=m_fieldarray_FundQueryReq;
		m_fieldsize=sizeof(m_fieldarray_FundQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FundQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsFundQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_FundQueryReq),0x00,sizeof(CBCESFieldsFundQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_FundQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_FundQueryReq[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ��ʷ�ʽ��ѯ���� */
class CBCESFieldsHisFundQueryReq:public CBMLFields
{
public:
	CBCESFieldsHisFundQueryReq()
	{
		m_fieldarray=m_fieldarray_HisFundQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisFundQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsHisFundQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsHisFundQueryReq(const CBCESFieldsHisFundQueryReq& HisFundQueryReq){
		m_fieldarray=m_fieldarray_HisFundQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisFundQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisFundQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisFundQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsHisFundQueryReq& operator=(const CBCESFieldsHisFundQueryReq& HisFundQueryReq){
		m_fieldarray=m_fieldarray_HisFundQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisFundQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisFundQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisFundQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_HisFundQueryReq),0x00,sizeof(CBCESFieldsHisFundQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_HisFundQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_HisFundQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* �ʽ� */
class CBCESFieldsFund:public CBMLFields
{
public:
	CBCESFieldsFund()
	{
		m_fieldarray=m_fieldarray_Fund;
		m_fieldsize=sizeof(m_fieldarray_Fund)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsFund)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&LastBalance,sizeof(LastBalance),NULL,0,bces_rulearray+BCESFieldIndexLastBalance);	/* ����Ȩ�� */
		AddField((void*)&FloatBalance,sizeof(FloatBalance),NULL,0,bces_rulearray+BCESFieldIndexFloatBalance);	/* ����Ȩ�� */
		AddField((void*)&FreeBalance,sizeof(FreeBalance),NULL,0,bces_rulearray+BCESFieldIndexFreeBalance);	/* �����ʽ� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&FeeFrozen,sizeof(FeeFrozen),NULL,0,bces_rulearray+BCESFieldIndexFeeFrozen);	/* ���������� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&ProfitLoss,sizeof(ProfitLoss),NULL,0,bces_rulearray+BCESFieldIndexProfitLoss);	/* ӯ�� */
		AddField((void*)&TotalPL,sizeof(TotalPL),NULL,0,bces_rulearray+BCESFieldIndexTotalPL);	/* �ۼ�ӯ�� */
		AddField((void*)&FrozenBalance,sizeof(FrozenBalance),NULL,0,bces_rulearray+BCESFieldIndexFrozenBalance);	/* �����ʽ� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)AgentName,sizeof(AgentName),NULL,0,bces_rulearray+BCESFieldIndexAgentName);	/* ���������� */
		AddField((void*)&InAmount,sizeof(InAmount),NULL,0,bces_rulearray+BCESFieldIndexInAmount);	/* ����� */
		AddField((void*)&OutAmount,sizeof(OutAmount),NULL,0,bces_rulearray+BCESFieldIndexOutAmount);	/* ������ */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
	}
	CBCESFieldsFund(const CBCESFieldsFund& Fund){
		m_fieldarray=m_fieldarray_Fund;
		m_fieldsize=sizeof(m_fieldarray_Fund)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Fund+sizeof(CBMLFields),sizeof(CBCESFieldsFund)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&LastBalance,sizeof(LastBalance),NULL,0,bces_rulearray+BCESFieldIndexLastBalance);	/* ����Ȩ�� */
		AddField((void*)&FloatBalance,sizeof(FloatBalance),NULL,0,bces_rulearray+BCESFieldIndexFloatBalance);	/* ����Ȩ�� */
		AddField((void*)&FreeBalance,sizeof(FreeBalance),NULL,0,bces_rulearray+BCESFieldIndexFreeBalance);	/* �����ʽ� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&FeeFrozen,sizeof(FeeFrozen),NULL,0,bces_rulearray+BCESFieldIndexFeeFrozen);	/* ���������� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&ProfitLoss,sizeof(ProfitLoss),NULL,0,bces_rulearray+BCESFieldIndexProfitLoss);	/* ӯ�� */
		AddField((void*)&TotalPL,sizeof(TotalPL),NULL,0,bces_rulearray+BCESFieldIndexTotalPL);	/* �ۼ�ӯ�� */
		AddField((void*)&FrozenBalance,sizeof(FrozenBalance),NULL,0,bces_rulearray+BCESFieldIndexFrozenBalance);	/* �����ʽ� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)AgentName,sizeof(AgentName),NULL,0,bces_rulearray+BCESFieldIndexAgentName);	/* ���������� */
		AddField((void*)&InAmount,sizeof(InAmount),NULL,0,bces_rulearray+BCESFieldIndexInAmount);	/* ����� */
		AddField((void*)&OutAmount,sizeof(OutAmount),NULL,0,bces_rulearray+BCESFieldIndexOutAmount);	/* ������ */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
	}
	CBCESFieldsFund& operator=(const CBCESFieldsFund& Fund){
		m_fieldarray=m_fieldarray_Fund;
		m_fieldsize=sizeof(m_fieldarray_Fund)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Fund+sizeof(CBMLFields),sizeof(CBCESFieldsFund)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&LastBalance,sizeof(LastBalance),NULL,0,bces_rulearray+BCESFieldIndexLastBalance);	/* ����Ȩ�� */
		AddField((void*)&FloatBalance,sizeof(FloatBalance),NULL,0,bces_rulearray+BCESFieldIndexFloatBalance);	/* ����Ȩ�� */
		AddField((void*)&FreeBalance,sizeof(FreeBalance),NULL,0,bces_rulearray+BCESFieldIndexFreeBalance);	/* �����ʽ� */
		AddField((void*)&Margin,sizeof(Margin),NULL,0,bces_rulearray+BCESFieldIndexMargin);	/* ռ�ñ�֤�� */
		AddField((void*)&FrozenMargin,sizeof(FrozenMargin),NULL,0,bces_rulearray+BCESFieldIndexFrozenMargin);	/* ���ᱣ֤�� */
		AddField((void*)&Fee,sizeof(Fee),NULL,0,bces_rulearray+BCESFieldIndexFee);	/* ������ */
		AddField((void*)&FeeFrozen,sizeof(FeeFrozen),NULL,0,bces_rulearray+BCESFieldIndexFeeFrozen);	/* ���������� */
		AddField((void*)&ClosedPL,sizeof(ClosedPL),NULL,0,bces_rulearray+BCESFieldIndexClosedPL);	/* ƽ��ӯ�� */
		AddField((void*)&FloatingPL,sizeof(FloatingPL),NULL,0,bces_rulearray+BCESFieldIndexFloatingPL);	/* ����ӯ�� */
		AddField((void*)&ProfitLoss,sizeof(ProfitLoss),NULL,0,bces_rulearray+BCESFieldIndexProfitLoss);	/* ӯ�� */
		AddField((void*)&TotalPL,sizeof(TotalPL),NULL,0,bces_rulearray+BCESFieldIndexTotalPL);	/* �ۼ�ӯ�� */
		AddField((void*)&FrozenBalance,sizeof(FrozenBalance),NULL,0,bces_rulearray+BCESFieldIndexFrozenBalance);	/* �����ʽ� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)AgentName,sizeof(AgentName),NULL,0,bces_rulearray+BCESFieldIndexAgentName);	/* ���������� */
		AddField((void*)&InAmount,sizeof(InAmount),NULL,0,bces_rulearray+BCESFieldIndexInAmount);	/* ����� */
		AddField((void*)&OutAmount,sizeof(OutAmount),NULL,0,bces_rulearray+BCESFieldIndexOutAmount);	/* ������ */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Fund),0x00,sizeof(CBCESFieldsFund)-sizeof(CBMLFields)-sizeof(m_fieldarray_Fund));
	}

	BML_FIELD_INFO m_fieldarray_Fund[19];

	// Field
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
class CBCESFieldsMarketStatusNty:public CBMLFields
{
public:
	CBCESFieldsMarketStatusNty()
	{
		m_fieldarray=m_fieldarray_MarketStatusNty;
		m_fieldsize=sizeof(m_fieldarray_MarketStatusNty)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsMarketStatusNty)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&MarketStatus,sizeof(MarketStatus),NULL,0,bces_rulearray+BCESFieldIndexMarketStatus);	/* �г�״̬ */
		AddField((void*)MarketStatusDesc,sizeof(MarketStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexMarketStatusDesc);	/* �г�״̬���� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsMarketStatusNty(const CBCESFieldsMarketStatusNty& MarketStatusNty){
		m_fieldarray=m_fieldarray_MarketStatusNty;
		m_fieldsize=sizeof(m_fieldarray_MarketStatusNty)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&MarketStatusNty+sizeof(CBMLFields),sizeof(CBCESFieldsMarketStatusNty)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&MarketStatus,sizeof(MarketStatus),NULL,0,bces_rulearray+BCESFieldIndexMarketStatus);	/* �г�״̬ */
		AddField((void*)MarketStatusDesc,sizeof(MarketStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexMarketStatusDesc);	/* �г�״̬���� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsMarketStatusNty& operator=(const CBCESFieldsMarketStatusNty& MarketStatusNty){
		m_fieldarray=m_fieldarray_MarketStatusNty;
		m_fieldsize=sizeof(m_fieldarray_MarketStatusNty)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&MarketStatusNty+sizeof(CBMLFields),sizeof(CBCESFieldsMarketStatusNty)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)&MarketStatus,sizeof(MarketStatus),NULL,0,bces_rulearray+BCESFieldIndexMarketStatus);	/* �г�״̬ */
		AddField((void*)MarketStatusDesc,sizeof(MarketStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexMarketStatusDesc);	/* �г�״̬���� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_MarketStatusNty),0x00,sizeof(CBCESFieldsMarketStatusNty)-sizeof(CBMLFields)-sizeof(m_fieldarray_MarketStatusNty));
	}

	BML_FIELD_INFO m_fieldarray_MarketStatusNty[3];

	// Field
	BCESFieldTypeFlag MarketStatus;	/* �г�״̬ */
	BCESFieldTypeMarketStatusDesc MarketStatusDesc;	/* �г�״̬���� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ��Լ��ѯ���� */
class CBCESFieldsInstrumentQueryReq:public CBMLFields
{
public:
	CBCESFieldsInstrumentQueryReq()
	{
		m_fieldarray=m_fieldarray_InstrumentQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InstrumentQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInstrumentQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsInstrumentQueryReq(const CBCESFieldsInstrumentQueryReq& InstrumentQueryReq){
		m_fieldarray=m_fieldarray_InstrumentQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InstrumentQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InstrumentQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsInstrumentQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsInstrumentQueryReq& operator=(const CBCESFieldsInstrumentQueryReq& InstrumentQueryReq){
		m_fieldarray=m_fieldarray_InstrumentQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InstrumentQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InstrumentQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsInstrumentQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_InstrumentQueryReq),0x00,sizeof(CBCESFieldsInstrumentQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_InstrumentQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_InstrumentQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ��Լ */
class CBCESFieldsInstrument:public CBMLFields
{
public:
	CBCESFieldsInstrument()
	{
		m_fieldarray=m_fieldarray_Instrument;
		m_fieldsize=sizeof(m_fieldarray_Instrument)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInstrument)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)InstrumentName,sizeof(InstrumentName),NULL,0,bces_rulearray+BCESFieldIndexInstrumentName);	/* ��Լ���� */
		AddField((void*)&FeeType,sizeof(FeeType),NULL,0,bces_rulearray+BCESFieldIndexFeeType);	/* ���������� */
		AddField((void*)&FeeRate,sizeof(FeeRate),NULL,0,bces_rulearray+BCESFieldIndexFeeRate);	/* �������� */
		AddField((void*)&MarginRate,sizeof(MarginRate),NULL,0,bces_rulearray+BCESFieldIndexMarginRate);	/* ��֤�� */
		AddField((void*)&DailyPriceLimit,sizeof(DailyPriceLimit),NULL,0,bces_rulearray+BCESFieldIndexDailyPriceLimit);	/* ÿ���ǵ����� */
		AddField((void*)&PriceUnit,sizeof(PriceUnit),NULL,0,bces_rulearray+BCESFieldIndexPriceUnit);	/* ���۵�λ */
		AddField((void*)&TradeUnit,sizeof(TradeUnit),NULL,0,bces_rulearray+BCESFieldIndexTradeUnit);	/* ���׵�λ */
		AddField((void*)&MinMovement,sizeof(MinMovement),NULL,0,bces_rulearray+BCESFieldIndexMinMovement);	/* ��С�䶯��λ */
		AddField((void*)&PriceScale,sizeof(PriceScale),NULL,0,bces_rulearray+BCESFieldIndexPriceScale);	/* ���۾��� */
		AddField((void*)&PriceCoefficient,sizeof(PriceCoefficient),NULL,0,bces_rulearray+BCESFieldIndexPriceCoefficient);	/* �۸�ϵ�� */
		AddField((void*)&InstrumentStatus,sizeof(InstrumentStatus),NULL,0,bces_rulearray+BCESFieldIndexInstrumentStatus);	/* ��Լ״̬ */
		AddField((void*)&Currency,sizeof(Currency),NULL,0,bces_rulearray+BCESFieldIndexCurrency);	/* ���� */
		AddField((void*)&MarginRateType,sizeof(MarginRateType),NULL,0,bces_rulearray+BCESFieldIndexMarginRateType);	/* ��֤�������� */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
		AddField((void*)&OverNightFeeType,sizeof(OverNightFeeType),NULL,0,bces_rulearray+BCESFieldIndexOverNightFeeType);	/* ��ҹ������ */
		AddField((void*)&PriceMultiply,sizeof(PriceMultiply),NULL,0,bces_rulearray+BCESFieldIndexPriceMultiply);	/* ���۳��� */
		AddField((void*)&FeeFlag,sizeof(FeeFlag),NULL,0,bces_rulearray+BCESFieldIndexFeeFlag);	/* �շ����� */
		AddField((void*)&EachQtyLimt,sizeof(EachQtyLimt),NULL,0,bces_rulearray+BCESFieldIndexEachQtyLimt);	/* ÿ�ʳֲ����� */
		AddField((void*)&TotalQtyLimt,sizeof(TotalQtyLimt),NULL,0,bces_rulearray+BCESFieldIndexTotalQtyLimt);	/* �ֲܳ����� */
		AddField((void*)GoodsName,sizeof(GoodsName),NULL,0,bces_rulearray+BCESFieldIndexGoodsName);	/* Ʒ�ִ��� */
		AddField((void*)PlateName,sizeof(PlateName),NULL,0,bces_rulearray+BCESFieldIndexPlateName);	/* ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&InstrumentType,sizeof(InstrumentType),NULL,0,bces_rulearray+BCESFieldIndexInstrumentType);	/* ��Ʒ���� */
	}
	CBCESFieldsInstrument(const CBCESFieldsInstrument& Instrument){
		m_fieldarray=m_fieldarray_Instrument;
		m_fieldsize=sizeof(m_fieldarray_Instrument)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Instrument+sizeof(CBMLFields),sizeof(CBCESFieldsInstrument)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)InstrumentName,sizeof(InstrumentName),NULL,0,bces_rulearray+BCESFieldIndexInstrumentName);	/* ��Լ���� */
		AddField((void*)&FeeType,sizeof(FeeType),NULL,0,bces_rulearray+BCESFieldIndexFeeType);	/* ���������� */
		AddField((void*)&FeeRate,sizeof(FeeRate),NULL,0,bces_rulearray+BCESFieldIndexFeeRate);	/* �������� */
		AddField((void*)&MarginRate,sizeof(MarginRate),NULL,0,bces_rulearray+BCESFieldIndexMarginRate);	/* ��֤�� */
		AddField((void*)&DailyPriceLimit,sizeof(DailyPriceLimit),NULL,0,bces_rulearray+BCESFieldIndexDailyPriceLimit);	/* ÿ���ǵ����� */
		AddField((void*)&PriceUnit,sizeof(PriceUnit),NULL,0,bces_rulearray+BCESFieldIndexPriceUnit);	/* ���۵�λ */
		AddField((void*)&TradeUnit,sizeof(TradeUnit),NULL,0,bces_rulearray+BCESFieldIndexTradeUnit);	/* ���׵�λ */
		AddField((void*)&MinMovement,sizeof(MinMovement),NULL,0,bces_rulearray+BCESFieldIndexMinMovement);	/* ��С�䶯��λ */
		AddField((void*)&PriceScale,sizeof(PriceScale),NULL,0,bces_rulearray+BCESFieldIndexPriceScale);	/* ���۾��� */
		AddField((void*)&PriceCoefficient,sizeof(PriceCoefficient),NULL,0,bces_rulearray+BCESFieldIndexPriceCoefficient);	/* �۸�ϵ�� */
		AddField((void*)&InstrumentStatus,sizeof(InstrumentStatus),NULL,0,bces_rulearray+BCESFieldIndexInstrumentStatus);	/* ��Լ״̬ */
		AddField((void*)&Currency,sizeof(Currency),NULL,0,bces_rulearray+BCESFieldIndexCurrency);	/* ���� */
		AddField((void*)&MarginRateType,sizeof(MarginRateType),NULL,0,bces_rulearray+BCESFieldIndexMarginRateType);	/* ��֤�������� */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
		AddField((void*)&OverNightFeeType,sizeof(OverNightFeeType),NULL,0,bces_rulearray+BCESFieldIndexOverNightFeeType);	/* ��ҹ������ */
		AddField((void*)&PriceMultiply,sizeof(PriceMultiply),NULL,0,bces_rulearray+BCESFieldIndexPriceMultiply);	/* ���۳��� */
		AddField((void*)&FeeFlag,sizeof(FeeFlag),NULL,0,bces_rulearray+BCESFieldIndexFeeFlag);	/* �շ����� */
		AddField((void*)&EachQtyLimt,sizeof(EachQtyLimt),NULL,0,bces_rulearray+BCESFieldIndexEachQtyLimt);	/* ÿ�ʳֲ����� */
		AddField((void*)&TotalQtyLimt,sizeof(TotalQtyLimt),NULL,0,bces_rulearray+BCESFieldIndexTotalQtyLimt);	/* �ֲܳ����� */
		AddField((void*)GoodsName,sizeof(GoodsName),NULL,0,bces_rulearray+BCESFieldIndexGoodsName);	/* Ʒ�ִ��� */
		AddField((void*)PlateName,sizeof(PlateName),NULL,0,bces_rulearray+BCESFieldIndexPlateName);	/* ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&InstrumentType,sizeof(InstrumentType),NULL,0,bces_rulearray+BCESFieldIndexInstrumentType);	/* ��Ʒ���� */
	}
	CBCESFieldsInstrument& operator=(const CBCESFieldsInstrument& Instrument){
		m_fieldarray=m_fieldarray_Instrument;
		m_fieldsize=sizeof(m_fieldarray_Instrument)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Instrument+sizeof(CBMLFields),sizeof(CBCESFieldsInstrument)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)InstrumentName,sizeof(InstrumentName),NULL,0,bces_rulearray+BCESFieldIndexInstrumentName);	/* ��Լ���� */
		AddField((void*)&FeeType,sizeof(FeeType),NULL,0,bces_rulearray+BCESFieldIndexFeeType);	/* ���������� */
		AddField((void*)&FeeRate,sizeof(FeeRate),NULL,0,bces_rulearray+BCESFieldIndexFeeRate);	/* �������� */
		AddField((void*)&MarginRate,sizeof(MarginRate),NULL,0,bces_rulearray+BCESFieldIndexMarginRate);	/* ��֤�� */
		AddField((void*)&DailyPriceLimit,sizeof(DailyPriceLimit),NULL,0,bces_rulearray+BCESFieldIndexDailyPriceLimit);	/* ÿ���ǵ����� */
		AddField((void*)&PriceUnit,sizeof(PriceUnit),NULL,0,bces_rulearray+BCESFieldIndexPriceUnit);	/* ���۵�λ */
		AddField((void*)&TradeUnit,sizeof(TradeUnit),NULL,0,bces_rulearray+BCESFieldIndexTradeUnit);	/* ���׵�λ */
		AddField((void*)&MinMovement,sizeof(MinMovement),NULL,0,bces_rulearray+BCESFieldIndexMinMovement);	/* ��С�䶯��λ */
		AddField((void*)&PriceScale,sizeof(PriceScale),NULL,0,bces_rulearray+BCESFieldIndexPriceScale);	/* ���۾��� */
		AddField((void*)&PriceCoefficient,sizeof(PriceCoefficient),NULL,0,bces_rulearray+BCESFieldIndexPriceCoefficient);	/* �۸�ϵ�� */
		AddField((void*)&InstrumentStatus,sizeof(InstrumentStatus),NULL,0,bces_rulearray+BCESFieldIndexInstrumentStatus);	/* ��Լ״̬ */
		AddField((void*)&Currency,sizeof(Currency),NULL,0,bces_rulearray+BCESFieldIndexCurrency);	/* ���� */
		AddField((void*)&MarginRateType,sizeof(MarginRateType),NULL,0,bces_rulearray+BCESFieldIndexMarginRateType);	/* ��֤�������� */
		AddField((void*)&OverNightFee,sizeof(OverNightFee),NULL,0,bces_rulearray+BCESFieldIndexOverNightFee);	/* ��ҹ�� */
		AddField((void*)&OverNightFeeType,sizeof(OverNightFeeType),NULL,0,bces_rulearray+BCESFieldIndexOverNightFeeType);	/* ��ҹ������ */
		AddField((void*)&PriceMultiply,sizeof(PriceMultiply),NULL,0,bces_rulearray+BCESFieldIndexPriceMultiply);	/* ���۳��� */
		AddField((void*)&FeeFlag,sizeof(FeeFlag),NULL,0,bces_rulearray+BCESFieldIndexFeeFlag);	/* �շ����� */
		AddField((void*)&EachQtyLimt,sizeof(EachQtyLimt),NULL,0,bces_rulearray+BCESFieldIndexEachQtyLimt);	/* ÿ�ʳֲ����� */
		AddField((void*)&TotalQtyLimt,sizeof(TotalQtyLimt),NULL,0,bces_rulearray+BCESFieldIndexTotalQtyLimt);	/* �ֲܳ����� */
		AddField((void*)GoodsName,sizeof(GoodsName),NULL,0,bces_rulearray+BCESFieldIndexGoodsName);	/* Ʒ�ִ��� */
		AddField((void*)PlateName,sizeof(PlateName),NULL,0,bces_rulearray+BCESFieldIndexPlateName);	/* ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&InstrumentType,sizeof(InstrumentType),NULL,0,bces_rulearray+BCESFieldIndexInstrumentType);	/* ��Ʒ���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Instrument),0x00,sizeof(CBCESFieldsInstrument)-sizeof(CBMLFields)-sizeof(m_fieldarray_Instrument));
	}

	BML_FIELD_INFO m_fieldarray_Instrument[24];

	// Field
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
class CBCESFieldsMinDataQueryReq:public CBMLFields
{
public:
	CBCESFieldsMinDataQueryReq()
	{
		m_fieldarray=m_fieldarray_MinDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_MinDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsMinDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsMinDataQueryReq(const CBCESFieldsMinDataQueryReq& MinDataQueryReq){
		m_fieldarray=m_fieldarray_MinDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_MinDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&MinDataQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsMinDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsMinDataQueryReq& operator=(const CBCESFieldsMinDataQueryReq& MinDataQueryReq){
		m_fieldarray=m_fieldarray_MinDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_MinDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&MinDataQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsMinDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_MinDataQueryReq),0x00,sizeof(CBCESFieldsMinDataQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_MinDataQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_MinDataQueryReq[4];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTimeFrom;	/* ��ʼ����ʱ�� */
	BCESFieldTypeDateTime DateTimeTo;	/* ��������ʱ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ���� */
class CBCESFieldsMinData:public CBMLFields
{
public:
	CBCESFieldsMinData()
	{
		m_fieldarray=m_fieldarray_MinData;
		m_fieldsize=sizeof(m_fieldarray_MinData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsMinData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsMinData(const CBCESFieldsMinData& MinData){
		m_fieldarray=m_fieldarray_MinData;
		m_fieldsize=sizeof(m_fieldarray_MinData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&MinData+sizeof(CBMLFields),sizeof(CBCESFieldsMinData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsMinData& operator=(const CBCESFieldsMinData& MinData){
		m_fieldarray=m_fieldarray_MinData;
		m_fieldsize=sizeof(m_fieldarray_MinData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&MinData+sizeof(CBMLFields),sizeof(CBCESFieldsMinData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_MinData),0x00,sizeof(CBCESFieldsMinData)-sizeof(CBMLFields)-sizeof(m_fieldarray_MinData));
	}

	BML_FIELD_INFO m_fieldarray_MinData[10];

	// Field
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
class CBCESFieldsDayDataQueryReq:public CBMLFields
{
public:
	CBCESFieldsDayDataQueryReq()
	{
		m_fieldarray=m_fieldarray_DayDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_DayDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDayDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsDayDataQueryReq(const CBCESFieldsDayDataQueryReq& DayDataQueryReq){
		m_fieldarray=m_fieldarray_DayDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_DayDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DayDataQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsDayDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsDayDataQueryReq& operator=(const CBCESFieldsDayDataQueryReq& DayDataQueryReq){
		m_fieldarray=m_fieldarray_DayDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_DayDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DayDataQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsDayDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DayDataQueryReq),0x00,sizeof(CBCESFieldsDayDataQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_DayDataQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_DayDataQueryReq[4];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* ���� */
class CBCESFieldsDayData:public CBMLFields
{
public:
	CBCESFieldsDayData()
	{
		m_fieldarray=m_fieldarray_DayData;
		m_fieldsize=sizeof(m_fieldarray_DayData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDayData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)Date,sizeof(Date),NULL,0,bces_rulearray+BCESFieldIndexDate);	/* ���� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsDayData(const CBCESFieldsDayData& DayData){
		m_fieldarray=m_fieldarray_DayData;
		m_fieldsize=sizeof(m_fieldarray_DayData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DayData+sizeof(CBMLFields),sizeof(CBCESFieldsDayData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)Date,sizeof(Date),NULL,0,bces_rulearray+BCESFieldIndexDate);	/* ���� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsDayData& operator=(const CBCESFieldsDayData& DayData){
		m_fieldarray=m_fieldarray_DayData;
		m_fieldsize=sizeof(m_fieldarray_DayData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DayData+sizeof(CBMLFields),sizeof(CBCESFieldsDayData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)Date,sizeof(Date),NULL,0,bces_rulearray+BCESFieldIndexDate);	/* ���� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DayData),0x00,sizeof(CBCESFieldsDayData)-sizeof(CBMLFields)-sizeof(m_fieldarray_DayData));
	}

	BML_FIELD_INFO m_fieldarray_DayData[10];

	// Field
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
class CBCESFieldsTradeDetailDataQueryReq:public CBMLFields
{
public:
	CBCESFieldsTradeDetailDataQueryReq()
	{
		m_fieldarray=m_fieldarray_TradeDetailDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeDetailDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeDetailDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsTradeDetailDataQueryReq(const CBCESFieldsTradeDetailDataQueryReq& TradeDetailDataQueryReq){
		m_fieldarray=m_fieldarray_TradeDetailDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeDetailDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeDetailDataQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeDetailDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsTradeDetailDataQueryReq& operator=(const CBCESFieldsTradeDetailDataQueryReq& TradeDetailDataQueryReq){
		m_fieldarray=m_fieldarray_TradeDetailDataQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeDetailDataQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeDetailDataQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeDetailDataQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeDetailDataQueryReq),0x00,sizeof(CBCESFieldsTradeDetailDataQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeDetailDataQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_TradeDetailDataQueryReq[3];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate TradeDate;	/* �������� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* �ɽ���ϸ */
class CBCESFieldsTradeDetailData:public CBMLFields
{
public:
	CBCESFieldsTradeDetailData()
	{
		m_fieldarray=m_fieldarray_TradeDetailData;
		m_fieldsize=sizeof(m_fieldarray_TradeDetailData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeDetailData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)Date,sizeof(Date),NULL,0,bces_rulearray+BCESFieldIndexDate);	/* ���� */
		AddField((void*)Time,sizeof(Time),NULL,0,bces_rulearray+BCESFieldIndexTime);	/* ʱ�� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ɽ��� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsTradeDetailData(const CBCESFieldsTradeDetailData& TradeDetailData){
		m_fieldarray=m_fieldarray_TradeDetailData;
		m_fieldsize=sizeof(m_fieldarray_TradeDetailData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeDetailData+sizeof(CBMLFields),sizeof(CBCESFieldsTradeDetailData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)Date,sizeof(Date),NULL,0,bces_rulearray+BCESFieldIndexDate);	/* ���� */
		AddField((void*)Time,sizeof(Time),NULL,0,bces_rulearray+BCESFieldIndexTime);	/* ʱ�� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ɽ��� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsTradeDetailData& operator=(const CBCESFieldsTradeDetailData& TradeDetailData){
		m_fieldarray=m_fieldarray_TradeDetailData;
		m_fieldsize=sizeof(m_fieldarray_TradeDetailData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeDetailData+sizeof(CBMLFields),sizeof(CBCESFieldsTradeDetailData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)MatchID,sizeof(MatchID),NULL,0,bces_rulearray+BCESFieldIndexMatchID);	/* �ɽ��� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)Date,sizeof(Date),NULL,0,bces_rulearray+BCESFieldIndexDate);	/* ���� */
		AddField((void*)Time,sizeof(Time),NULL,0,bces_rulearray+BCESFieldIndexTime);	/* ʱ�� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ɽ��� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeDetailData),0x00,sizeof(CBCESFieldsTradeDetailData)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeDetailData));
	}

	BML_FIELD_INFO m_fieldarray_TradeDetailData[7];

	// Field
	BCESFieldTypeMatchID MatchID;	/* �ɽ��� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate Date;	/* ���� */
	BCESFieldTypeTime Time;	/* ʱ�� */
	BCESFieldTypeQty Qty;	/* �ɽ��� */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* ֹӮֹ���������� */
class CBCESFieldsProfitLossStopSetReq:public CBMLFields
{
public:
	CBCESFieldsProfitLossStopSetReq()
	{
		m_fieldarray=m_fieldarray_ProfitLossStopSetReq;
		m_fieldsize=sizeof(m_fieldarray_ProfitLossStopSetReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsProfitLossStopSetReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
	}
	CBCESFieldsProfitLossStopSetReq(const CBCESFieldsProfitLossStopSetReq& ProfitLossStopSetReq){
		m_fieldarray=m_fieldarray_ProfitLossStopSetReq;
		m_fieldsize=sizeof(m_fieldarray_ProfitLossStopSetReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ProfitLossStopSetReq+sizeof(CBMLFields),sizeof(CBCESFieldsProfitLossStopSetReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
	}
	CBCESFieldsProfitLossStopSetReq& operator=(const CBCESFieldsProfitLossStopSetReq& ProfitLossStopSetReq){
		m_fieldarray=m_fieldarray_ProfitLossStopSetReq;
		m_fieldsize=sizeof(m_fieldarray_ProfitLossStopSetReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ProfitLossStopSetReq+sizeof(CBMLFields),sizeof(CBCESFieldsProfitLossStopSetReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ProfitLossStopSetReq),0x00,sizeof(CBCESFieldsProfitLossStopSetReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_ProfitLossStopSetReq));
	}

	BML_FIELD_INFO m_fieldarray_ProfitLossStopSetReq[5];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
};

/* ֹӮֹ������Ӧ�� */
class CBCESFieldsProfitLossStopSetRsp:public CBMLFields
{
public:
	CBCESFieldsProfitLossStopSetRsp()
	{
		m_fieldarray=m_fieldarray_ProfitLossStopSetRsp;
		m_fieldsize=sizeof(m_fieldarray_ProfitLossStopSetRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsProfitLossStopSetRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
	}
	CBCESFieldsProfitLossStopSetRsp(const CBCESFieldsProfitLossStopSetRsp& ProfitLossStopSetRsp){
		m_fieldarray=m_fieldarray_ProfitLossStopSetRsp;
		m_fieldsize=sizeof(m_fieldarray_ProfitLossStopSetRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ProfitLossStopSetRsp+sizeof(CBMLFields),sizeof(CBCESFieldsProfitLossStopSetRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
	}
	CBCESFieldsProfitLossStopSetRsp& operator=(const CBCESFieldsProfitLossStopSetRsp& ProfitLossStopSetRsp){
		m_fieldarray=m_fieldarray_ProfitLossStopSetRsp;
		m_fieldsize=sizeof(m_fieldarray_ProfitLossStopSetRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ProfitLossStopSetRsp+sizeof(CBMLFields),sizeof(CBCESFieldsProfitLossStopSetRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)PosiID,sizeof(PosiID),NULL,0,bces_rulearray+BCESFieldIndexPosiID);	/* �ֲֺ� */
		AddField((void*)&ProfitStopPrice,sizeof(ProfitStopPrice),NULL,0,bces_rulearray+BCESFieldIndexProfitStopPrice);	/* ֹӮ�� */
		AddField((void*)&LossStopPrice,sizeof(LossStopPrice),NULL,0,bces_rulearray+BCESFieldIndexLossStopPrice);	/* ֹ��� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ProfitLossStopSetRsp),0x00,sizeof(CBCESFieldsProfitLossStopSetRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_ProfitLossStopSetRsp));
	}

	BML_FIELD_INFO m_fieldarray_ProfitLossStopSetRsp[5];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypePosiID PosiID;	/* �ֲֺ� */
	BCESFieldTypePrice ProfitStopPrice;	/* ֹӮ�� */
	BCESFieldTypePrice LossStopPrice;	/* ֹ��� */
};

/* ���� */
class CBCESFieldsBulletin:public CBMLFields
{
public:
	CBCESFieldsBulletin()
	{
		m_fieldarray=m_fieldarray_Bulletin;
		m_fieldsize=sizeof(m_fieldarray_Bulletin)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsBulletin)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)BulletinID,sizeof(BulletinID),NULL,0,bces_rulearray+BCESFieldIndexBulletinID);	/* ������ */
		AddField((void*)Title,sizeof(Title),NULL,0,bces_rulearray+BCESFieldIndexTitle);	/* ������� */
		AddField((void*)Content,sizeof(Content),NULL,0,bces_rulearray+BCESFieldIndexContent);	/* �������� */
		AddField((void*)PublishDate,sizeof(PublishDate),NULL,0,bces_rulearray+BCESFieldIndexPublishDate);	/* �������� */
		AddField((void*)PublishTime,sizeof(PublishTime),NULL,0,bces_rulearray+BCESFieldIndexPublishTime);	/* ����ʱ�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&PublishMethod,sizeof(PublishMethod),NULL,0,bces_rulearray+BCESFieldIndexPublishMethod);	/* ������ʽ */
		AddField((void*)PublishUserID,sizeof(PublishUserID),NULL,0,bces_rulearray+BCESFieldIndexPublishUserID);	/* ������ */
	}
	CBCESFieldsBulletin(const CBCESFieldsBulletin& Bulletin){
		m_fieldarray=m_fieldarray_Bulletin;
		m_fieldsize=sizeof(m_fieldarray_Bulletin)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Bulletin+sizeof(CBMLFields),sizeof(CBCESFieldsBulletin)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)BulletinID,sizeof(BulletinID),NULL,0,bces_rulearray+BCESFieldIndexBulletinID);	/* ������ */
		AddField((void*)Title,sizeof(Title),NULL,0,bces_rulearray+BCESFieldIndexTitle);	/* ������� */
		AddField((void*)Content,sizeof(Content),NULL,0,bces_rulearray+BCESFieldIndexContent);	/* �������� */
		AddField((void*)PublishDate,sizeof(PublishDate),NULL,0,bces_rulearray+BCESFieldIndexPublishDate);	/* �������� */
		AddField((void*)PublishTime,sizeof(PublishTime),NULL,0,bces_rulearray+BCESFieldIndexPublishTime);	/* ����ʱ�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&PublishMethod,sizeof(PublishMethod),NULL,0,bces_rulearray+BCESFieldIndexPublishMethod);	/* ������ʽ */
		AddField((void*)PublishUserID,sizeof(PublishUserID),NULL,0,bces_rulearray+BCESFieldIndexPublishUserID);	/* ������ */
	}
	CBCESFieldsBulletin& operator=(const CBCESFieldsBulletin& Bulletin){
		m_fieldarray=m_fieldarray_Bulletin;
		m_fieldsize=sizeof(m_fieldarray_Bulletin)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Bulletin+sizeof(CBMLFields),sizeof(CBCESFieldsBulletin)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)BulletinID,sizeof(BulletinID),NULL,0,bces_rulearray+BCESFieldIndexBulletinID);	/* ������ */
		AddField((void*)Title,sizeof(Title),NULL,0,bces_rulearray+BCESFieldIndexTitle);	/* ������� */
		AddField((void*)Content,sizeof(Content),NULL,0,bces_rulearray+BCESFieldIndexContent);	/* �������� */
		AddField((void*)PublishDate,sizeof(PublishDate),NULL,0,bces_rulearray+BCESFieldIndexPublishDate);	/* �������� */
		AddField((void*)PublishTime,sizeof(PublishTime),NULL,0,bces_rulearray+BCESFieldIndexPublishTime);	/* ����ʱ�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&PublishMethod,sizeof(PublishMethod),NULL,0,bces_rulearray+BCESFieldIndexPublishMethod);	/* ������ʽ */
		AddField((void*)PublishUserID,sizeof(PublishUserID),NULL,0,bces_rulearray+BCESFieldIndexPublishUserID);	/* ������ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Bulletin),0x00,sizeof(CBCESFieldsBulletin)-sizeof(CBMLFields)-sizeof(m_fieldarray_Bulletin));
	}

	BML_FIELD_INFO m_fieldarray_Bulletin[10];

	// Field
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
class CBCESFieldsBulletinQueryReq:public CBMLFields
{
public:
	CBCESFieldsBulletinQueryReq()
	{
		m_fieldarray=m_fieldarray_BulletinQueryReq;
		m_fieldsize=sizeof(m_fieldarray_BulletinQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsBulletinQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsBulletinQueryReq(const CBCESFieldsBulletinQueryReq& BulletinQueryReq){
		m_fieldarray=m_fieldarray_BulletinQueryReq;
		m_fieldsize=sizeof(m_fieldarray_BulletinQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&BulletinQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsBulletinQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsBulletinQueryReq& operator=(const CBCESFieldsBulletinQueryReq& BulletinQueryReq){
		m_fieldarray=m_fieldarray_BulletinQueryReq;
		m_fieldsize=sizeof(m_fieldarray_BulletinQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&BulletinQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsBulletinQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_BulletinQueryReq),0x00,sizeof(CBCESFieldsBulletinQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_BulletinQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_BulletinQueryReq[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ֪ͨ��ѯ���� */
class CBCESFieldsNoticeQueryReq:public CBMLFields
{
public:
	CBCESFieldsNoticeQueryReq()
	{
		m_fieldarray=m_fieldarray_NoticeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_NoticeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsNoticeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsNoticeQueryReq(const CBCESFieldsNoticeQueryReq& NoticeQueryReq){
		m_fieldarray=m_fieldarray_NoticeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_NoticeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&NoticeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsNoticeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsNoticeQueryReq& operator=(const CBCESFieldsNoticeQueryReq& NoticeQueryReq){
		m_fieldarray=m_fieldarray_NoticeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_NoticeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&NoticeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsNoticeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_NoticeQueryReq),0x00,sizeof(CBCESFieldsNoticeQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_NoticeQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_NoticeQueryReq[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ֪ͨ */
class CBCESFieldsNotice:public CBMLFields
{
public:
	CBCESFieldsNotice()
	{
		m_fieldarray=m_fieldarray_Notice;
		m_fieldsize=sizeof(m_fieldarray_Notice)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsNotice)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)NoticeID,sizeof(NoticeID),NULL,0,bces_rulearray+BCESFieldIndexNoticeID);	/* ֪ͨ��� */
		AddField((void*)Title,sizeof(Title),NULL,0,bces_rulearray+BCESFieldIndexTitle);	/* ֪ͨ���� */
		AddField((void*)Content,sizeof(Content),NULL,0,bces_rulearray+BCESFieldIndexContent);	/* ֪ͨ���� */
		AddField((void*)PublishDate,sizeof(PublishDate),NULL,0,bces_rulearray+BCESFieldIndexPublishDate);	/* �������� */
		AddField((void*)PublishTime,sizeof(PublishTime),NULL,0,bces_rulearray+BCESFieldIndexPublishTime);	/* ����ʱ�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&PublishMethod,sizeof(PublishMethod),NULL,0,bces_rulearray+BCESFieldIndexPublishMethod);	/* ������ʽ */
		AddField((void*)PublishUserID,sizeof(PublishUserID),NULL,0,bces_rulearray+BCESFieldIndexPublishUserID);	/* ������ */
	}
	CBCESFieldsNotice(const CBCESFieldsNotice& Notice){
		m_fieldarray=m_fieldarray_Notice;
		m_fieldsize=sizeof(m_fieldarray_Notice)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Notice+sizeof(CBMLFields),sizeof(CBCESFieldsNotice)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)NoticeID,sizeof(NoticeID),NULL,0,bces_rulearray+BCESFieldIndexNoticeID);	/* ֪ͨ��� */
		AddField((void*)Title,sizeof(Title),NULL,0,bces_rulearray+BCESFieldIndexTitle);	/* ֪ͨ���� */
		AddField((void*)Content,sizeof(Content),NULL,0,bces_rulearray+BCESFieldIndexContent);	/* ֪ͨ���� */
		AddField((void*)PublishDate,sizeof(PublishDate),NULL,0,bces_rulearray+BCESFieldIndexPublishDate);	/* �������� */
		AddField((void*)PublishTime,sizeof(PublishTime),NULL,0,bces_rulearray+BCESFieldIndexPublishTime);	/* ����ʱ�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&PublishMethod,sizeof(PublishMethod),NULL,0,bces_rulearray+BCESFieldIndexPublishMethod);	/* ������ʽ */
		AddField((void*)PublishUserID,sizeof(PublishUserID),NULL,0,bces_rulearray+BCESFieldIndexPublishUserID);	/* ������ */
	}
	CBCESFieldsNotice& operator=(const CBCESFieldsNotice& Notice){
		m_fieldarray=m_fieldarray_Notice;
		m_fieldsize=sizeof(m_fieldarray_Notice)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Notice+sizeof(CBMLFields),sizeof(CBCESFieldsNotice)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)NoticeID,sizeof(NoticeID),NULL,0,bces_rulearray+BCESFieldIndexNoticeID);	/* ֪ͨ��� */
		AddField((void*)Title,sizeof(Title),NULL,0,bces_rulearray+BCESFieldIndexTitle);	/* ֪ͨ���� */
		AddField((void*)Content,sizeof(Content),NULL,0,bces_rulearray+BCESFieldIndexContent);	/* ֪ͨ���� */
		AddField((void*)PublishDate,sizeof(PublishDate),NULL,0,bces_rulearray+BCESFieldIndexPublishDate);	/* �������� */
		AddField((void*)PublishTime,sizeof(PublishTime),NULL,0,bces_rulearray+BCESFieldIndexPublishTime);	/* ����ʱ�� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&PublishMethod,sizeof(PublishMethod),NULL,0,bces_rulearray+BCESFieldIndexPublishMethod);	/* ������ʽ */
		AddField((void*)PublishUserID,sizeof(PublishUserID),NULL,0,bces_rulearray+BCESFieldIndexPublishUserID);	/* ������ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Notice),0x00,sizeof(CBCESFieldsNotice)-sizeof(CBMLFields)-sizeof(m_fieldarray_Notice));
	}

	BML_FIELD_INFO m_fieldarray_Notice[10];

	// Field
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
class CBCESFieldsElectronicFundIOReq:public CBMLFields
{
public:
	CBCESFieldsElectronicFundIOReq()
	{
		m_fieldarray=m_fieldarray_ElectronicFundIOReq;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIOReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsElectronicFundIOReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
	}
	CBCESFieldsElectronicFundIOReq(const CBCESFieldsElectronicFundIOReq& ElectronicFundIOReq){
		m_fieldarray=m_fieldarray_ElectronicFundIOReq;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIOReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ElectronicFundIOReq+sizeof(CBMLFields),sizeof(CBCESFieldsElectronicFundIOReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
	}
	CBCESFieldsElectronicFundIOReq& operator=(const CBCESFieldsElectronicFundIOReq& ElectronicFundIOReq){
		m_fieldarray=m_fieldarray_ElectronicFundIOReq;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIOReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ElectronicFundIOReq+sizeof(CBMLFields),sizeof(CBCESFieldsElectronicFundIOReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ElectronicFundIOReq),0x00,sizeof(CBCESFieldsElectronicFundIOReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_ElectronicFundIOReq));
	}

	BML_FIELD_INFO m_fieldarray_ElectronicFundIOReq[6];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag FundIODirection;	/* ������� */
	BCESFieldTypeAmount Amount;	/* ��� */
	BCESFieldTypeBankAccountID ReceiveAccountID;	/* �տ��ʺ� */
	BCESFieldTypeBankAccountName ReceiveAccountName;	/* �տ�� */
	BCESFieldTypeBankID ReceiveBankID;	/* �տ��к� */
};

/* ���ӳ������Ӧ */
class CBCESFieldsElectronicFundIORsp:public CBMLFields
{
public:
	CBCESFieldsElectronicFundIORsp()
	{
		m_fieldarray=m_fieldarray_ElectronicFundIORsp;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIORsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsElectronicFundIORsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)PayURL,sizeof(PayURL),NULL,0,bces_rulearray+BCESFieldIndexPayURL);	/* ֧������ */
	}
	CBCESFieldsElectronicFundIORsp(const CBCESFieldsElectronicFundIORsp& ElectronicFundIORsp){
		m_fieldarray=m_fieldarray_ElectronicFundIORsp;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIORsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ElectronicFundIORsp+sizeof(CBMLFields),sizeof(CBCESFieldsElectronicFundIORsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)PayURL,sizeof(PayURL),NULL,0,bces_rulearray+BCESFieldIndexPayURL);	/* ֧������ */
	}
	CBCESFieldsElectronicFundIORsp& operator=(const CBCESFieldsElectronicFundIORsp& ElectronicFundIORsp){
		m_fieldarray=m_fieldarray_ElectronicFundIORsp;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIORsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ElectronicFundIORsp+sizeof(CBMLFields),sizeof(CBCESFieldsElectronicFundIORsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)PayURL,sizeof(PayURL),NULL,0,bces_rulearray+BCESFieldIndexPayURL);	/* ֧������ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ElectronicFundIORsp),0x00,sizeof(CBCESFieldsElectronicFundIORsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_ElectronicFundIORsp));
	}

	BML_FIELD_INFO m_fieldarray_ElectronicFundIORsp[14];

	// Field
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
class CBCESFieldsElectronicFundIONty:public CBMLFields
{
public:
	CBCESFieldsElectronicFundIONty()
	{
		m_fieldarray=m_fieldarray_ElectronicFundIONty;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIONty)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsElectronicFundIONty)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)PayURL,sizeof(PayURL),NULL,0,bces_rulearray+BCESFieldIndexPayURL);	/* ֧������ */
	}
	CBCESFieldsElectronicFundIONty(const CBCESFieldsElectronicFundIONty& ElectronicFundIONty){
		m_fieldarray=m_fieldarray_ElectronicFundIONty;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIONty)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ElectronicFundIONty+sizeof(CBMLFields),sizeof(CBCESFieldsElectronicFundIONty)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)PayURL,sizeof(PayURL),NULL,0,bces_rulearray+BCESFieldIndexPayURL);	/* ֧������ */
	}
	CBCESFieldsElectronicFundIONty& operator=(const CBCESFieldsElectronicFundIONty& ElectronicFundIONty){
		m_fieldarray=m_fieldarray_ElectronicFundIONty;
		m_fieldsize=sizeof(m_fieldarray_ElectronicFundIONty)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ElectronicFundIONty+sizeof(CBMLFields),sizeof(CBCESFieldsElectronicFundIONty)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)PayURL,sizeof(PayURL),NULL,0,bces_rulearray+BCESFieldIndexPayURL);	/* ֧������ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ElectronicFundIONty),0x00,sizeof(CBCESFieldsElectronicFundIONty)-sizeof(CBMLFields)-sizeof(m_fieldarray_ElectronicFundIONty));
	}

	BML_FIELD_INFO m_fieldarray_ElectronicFundIONty[15];

	// Field
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
class CBCESFieldsFundIODetail:public CBMLFields
{
public:
	CBCESFieldsFundIODetail()
	{
		m_fieldarray=m_fieldarray_FundIODetail;
		m_fieldsize=sizeof(m_fieldarray_FundIODetail)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsFundIODetail)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)&FundIOMethod,sizeof(FundIOMethod),NULL,0,bces_rulearray+BCESFieldIndexFundIOMethod);	/* �����ʽ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)PaySeqno,sizeof(PaySeqno),NULL,0,bces_rulearray+BCESFieldIndexPaySeqno);	/* ֧����ˮ�� */
	}
	CBCESFieldsFundIODetail(const CBCESFieldsFundIODetail& FundIODetail){
		m_fieldarray=m_fieldarray_FundIODetail;
		m_fieldsize=sizeof(m_fieldarray_FundIODetail)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FundIODetail+sizeof(CBMLFields),sizeof(CBCESFieldsFundIODetail)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)&FundIOMethod,sizeof(FundIOMethod),NULL,0,bces_rulearray+BCESFieldIndexFundIOMethod);	/* �����ʽ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)PaySeqno,sizeof(PaySeqno),NULL,0,bces_rulearray+BCESFieldIndexPaySeqno);	/* ֧����ˮ�� */
	}
	CBCESFieldsFundIODetail& operator=(const CBCESFieldsFundIODetail& FundIODetail){
		m_fieldarray=m_fieldarray_FundIODetail;
		m_fieldsize=sizeof(m_fieldarray_FundIODetail)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FundIODetail+sizeof(CBMLFields),sizeof(CBCESFieldsFundIODetail)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TradeDate,sizeof(TradeDate),NULL,0,bces_rulearray+BCESFieldIndexTradeDate);	/* �������� */
		AddField((void*)FundIOSeqno,sizeof(FundIOSeqno),NULL,0,bces_rulearray+BCESFieldIndexFundIOSeqno);	/* �������ˮ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&FundIODirection,sizeof(FundIODirection),NULL,0,bces_rulearray+BCESFieldIndexFundIODirection);	/* ������� */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* ��� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)&FundIOStatus,sizeof(FundIOStatus),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatus);	/* �����״̬ */
		AddField((void*)CreateDate,sizeof(CreateDate),NULL,0,bces_rulearray+BCESFieldIndexCreateDate);	/* �������� */
		AddField((void*)CreateTime,sizeof(CreateTime),NULL,0,bces_rulearray+BCESFieldIndexCreateTime);	/* ����ʱ�� */
		AddField((void*)CompleteDate,sizeof(CompleteDate),NULL,0,bces_rulearray+BCESFieldIndexCompleteDate);	/* ������� */
		AddField((void*)CompleteTime,sizeof(CompleteTime),NULL,0,bces_rulearray+BCESFieldIndexCompleteTime);	/* ���ʱ�� */
		AddField((void*)&FundIOMethod,sizeof(FundIOMethod),NULL,0,bces_rulearray+BCESFieldIndexFundIOMethod);	/* �����ʽ */
		AddField((void*)FundIOStatusDesc,sizeof(FundIOStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexFundIOStatusDesc);	/* �����״̬���� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)PaySeqno,sizeof(PaySeqno),NULL,0,bces_rulearray+BCESFieldIndexPaySeqno);	/* ֧����ˮ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_FundIODetail),0x00,sizeof(CBCESFieldsFundIODetail)-sizeof(CBMLFields)-sizeof(m_fieldarray_FundIODetail));
	}

	BML_FIELD_INFO m_fieldarray_FundIODetail[17];

	// Field
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
class CBCESFieldsFundIODetailQueryReq:public CBMLFields
{
public:
	CBCESFieldsFundIODetailQueryReq()
	{
		m_fieldarray=m_fieldarray_FundIODetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_FundIODetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsFundIODetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
	}
	CBCESFieldsFundIODetailQueryReq(const CBCESFieldsFundIODetailQueryReq& FundIODetailQueryReq){
		m_fieldarray=m_fieldarray_FundIODetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_FundIODetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FundIODetailQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsFundIODetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
	}
	CBCESFieldsFundIODetailQueryReq& operator=(const CBCESFieldsFundIODetailQueryReq& FundIODetailQueryReq){
		m_fieldarray=m_fieldarray_FundIODetailQueryReq;
		m_fieldsize=sizeof(m_fieldarray_FundIODetailQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&FundIODetailQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsFundIODetailQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_FundIODetailQueryReq),0x00,sizeof(CBCESFieldsFundIODetailQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_FundIODetailQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_FundIODetailQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* ��ʼ���� */
};

/* �����ѯ���� */
class CBCESFieldsReportQueryReq:public CBMLFields
{
public:
	CBCESFieldsReportQueryReq()
	{
		m_fieldarray=m_fieldarray_ReportQueryReq;
		m_fieldsize=sizeof(m_fieldarray_ReportQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsReportQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsReportQueryReq(const CBCESFieldsReportQueryReq& ReportQueryReq){
		m_fieldarray=m_fieldarray_ReportQueryReq;
		m_fieldsize=sizeof(m_fieldarray_ReportQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ReportQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsReportQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsReportQueryReq& operator=(const CBCESFieldsReportQueryReq& ReportQueryReq){
		m_fieldarray=m_fieldarray_ReportQueryReq;
		m_fieldsize=sizeof(m_fieldarray_ReportQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&ReportQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsReportQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_ReportQueryReq),0x00,sizeof(CBCESFieldsReportQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_ReportQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_ReportQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ���� */
class CBCESFieldsReport:public CBMLFields
{
public:
	CBCESFieldsReport()
	{
		m_fieldarray=m_fieldarray_Report;
		m_fieldsize=sizeof(m_fieldarray_Report)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsReport)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)ReportData,sizeof(ReportData),NULL,0,bces_rulearray+BCESFieldIndexReportData);	/* �������� */
	}
	CBCESFieldsReport(const CBCESFieldsReport& Report){
		m_fieldarray=m_fieldarray_Report;
		m_fieldsize=sizeof(m_fieldarray_Report)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Report+sizeof(CBMLFields),sizeof(CBCESFieldsReport)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)ReportData,sizeof(ReportData),NULL,0,bces_rulearray+BCESFieldIndexReportData);	/* �������� */
	}
	CBCESFieldsReport& operator=(const CBCESFieldsReport& Report){
		m_fieldarray=m_fieldarray_Report;
		m_fieldsize=sizeof(m_fieldarray_Report)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Report+sizeof(CBMLFields),sizeof(CBCESFieldsReport)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)ReportData,sizeof(ReportData),NULL,0,bces_rulearray+BCESFieldIndexReportData);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Report),0x00,sizeof(CBCESFieldsReport)-sizeof(CBMLFields)-sizeof(m_fieldarray_Report));
	}

	BML_FIELD_INFO m_fieldarray_Report[1];

	// Field
	BCESFieldTypeReportData ReportData;	/* �������� */
};

/* ��ʷ������ѯ���� */
class CBCESFieldsHisOrderQueryReq:public CBMLFields
{
public:
	CBCESFieldsHisOrderQueryReq()
	{
		m_fieldarray=m_fieldarray_HisOrderQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisOrderQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsHisOrderQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsHisOrderQueryReq(const CBCESFieldsHisOrderQueryReq& HisOrderQueryReq){
		m_fieldarray=m_fieldarray_HisOrderQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisOrderQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisOrderQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisOrderQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsHisOrderQueryReq& operator=(const CBCESFieldsHisOrderQueryReq& HisOrderQueryReq){
		m_fieldarray=m_fieldarray_HisOrderQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisOrderQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisOrderQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisOrderQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_HisOrderQueryReq),0x00,sizeof(CBCESFieldsHisOrderQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_HisOrderQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_HisOrderQueryReq[4];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ��ʷ�ɽ���ѯ���� */
class CBCESFieldsHisTradeQueryReq:public CBMLFields
{
public:
	CBCESFieldsHisTradeQueryReq()
	{
		m_fieldarray=m_fieldarray_HisTradeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisTradeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsHisTradeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsHisTradeQueryReq(const CBCESFieldsHisTradeQueryReq& HisTradeQueryReq){
		m_fieldarray=m_fieldarray_HisTradeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisTradeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisTradeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisTradeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsHisTradeQueryReq& operator=(const CBCESFieldsHisTradeQueryReq& HisTradeQueryReq){
		m_fieldarray=m_fieldarray_HisTradeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisTradeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisTradeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisTradeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_HisTradeQueryReq),0x00,sizeof(CBCESFieldsHisTradeQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_HisTradeQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_HisTradeQueryReq[4];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* ��ʷ�����ѯ���� */
class CBCESFieldsHisBulletinQueryReq:public CBMLFields
{
public:
	CBCESFieldsHisBulletinQueryReq()
	{
		m_fieldarray=m_fieldarray_HisBulletinQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisBulletinQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsHisBulletinQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
	}
	CBCESFieldsHisBulletinQueryReq(const CBCESFieldsHisBulletinQueryReq& HisBulletinQueryReq){
		m_fieldarray=m_fieldarray_HisBulletinQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisBulletinQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisBulletinQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisBulletinQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
	}
	CBCESFieldsHisBulletinQueryReq& operator=(const CBCESFieldsHisBulletinQueryReq& HisBulletinQueryReq){
		m_fieldarray=m_fieldarray_HisBulletinQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisBulletinQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisBulletinQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisBulletinQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_HisBulletinQueryReq),0x00,sizeof(CBCESFieldsHisBulletinQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_HisBulletinQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_HisBulletinQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* ��ʼ���� */
};

/* ��ʷ֪ͨ��ѯ���� */
class CBCESFieldsHisNoticeQueryReq:public CBMLFields
{
public:
	CBCESFieldsHisNoticeQueryReq()
	{
		m_fieldarray=m_fieldarray_HisNoticeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisNoticeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsHisNoticeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
	}
	CBCESFieldsHisNoticeQueryReq(const CBCESFieldsHisNoticeQueryReq& HisNoticeQueryReq){
		m_fieldarray=m_fieldarray_HisNoticeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisNoticeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisNoticeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisNoticeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
	}
	CBCESFieldsHisNoticeQueryReq& operator=(const CBCESFieldsHisNoticeQueryReq& HisNoticeQueryReq){
		m_fieldarray=m_fieldarray_HisNoticeQueryReq;
		m_fieldsize=sizeof(m_fieldarray_HisNoticeQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&HisNoticeQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsHisNoticeQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* ��ʼ���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_HisNoticeQueryReq),0x00,sizeof(CBCESFieldsHisNoticeQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_HisNoticeQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_HisNoticeQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* ��ʼ���� */
};

/* Ͷ�������� */
class CBCESFieldsInvestorRanking:public CBMLFields
{
public:
	CBCESFieldsInvestorRanking()
	{
		m_fieldarray=m_fieldarray_InvestorRanking;
		m_fieldsize=sizeof(m_fieldarray_InvestorRanking)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInvestorRanking)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentName,sizeof(InstrumentName),NULL,0,bces_rulearray+BCESFieldIndexInstrumentName);	/* ��Լ�� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
	}
	CBCESFieldsInvestorRanking(const CBCESFieldsInvestorRanking& InvestorRanking){
		m_fieldarray=m_fieldarray_InvestorRanking;
		m_fieldsize=sizeof(m_fieldarray_InvestorRanking)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorRanking+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorRanking)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentName,sizeof(InstrumentName),NULL,0,bces_rulearray+BCESFieldIndexInstrumentName);	/* ��Լ�� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
	}
	CBCESFieldsInvestorRanking& operator=(const CBCESFieldsInvestorRanking& InvestorRanking){
		m_fieldarray=m_fieldarray_InvestorRanking;
		m_fieldsize=sizeof(m_fieldarray_InvestorRanking)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorRanking+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorRanking)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentName,sizeof(InstrumentName),NULL,0,bces_rulearray+BCESFieldIndexInstrumentName);	/* ��Լ�� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_InvestorRanking),0x00,sizeof(CBCESFieldsInvestorRanking)-sizeof(CBMLFields)-sizeof(m_fieldarray_InvestorRanking));
	}

	BML_FIELD_INFO m_fieldarray_InvestorRanking[4];

	// Field
	BCESFieldTypeInstrumentName InstrumentName;	/* ��Լ�� */
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeRankingNum RankingNum;	/* ���� */
};

/* ��ѯͶ������������ */
class CBCESFieldsInvestorRankingQueryReq:public CBMLFields
{
public:
	CBCESFieldsInvestorRankingQueryReq()
	{
		m_fieldarray=m_fieldarray_InvestorRankingQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InvestorRankingQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInvestorRankingQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsInvestorRankingQueryReq(const CBCESFieldsInvestorRankingQueryReq& InvestorRankingQueryReq){
		m_fieldarray=m_fieldarray_InvestorRankingQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InvestorRankingQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorRankingQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorRankingQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsInvestorRankingQueryReq& operator=(const CBCESFieldsInvestorRankingQueryReq& InvestorRankingQueryReq){
		m_fieldarray=m_fieldarray_InvestorRankingQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InvestorRankingQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorRankingQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorRankingQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_InvestorRankingQueryReq),0x00,sizeof(CBCESFieldsInvestorRankingQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_InvestorRankingQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_InvestorRankingQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* �������� */
class CBCESFieldsTradeSettings:public CBMLFields
{
public:
	CBCESFieldsTradeSettings()
	{
		m_fieldarray=m_fieldarray_TradeSettings;
		m_fieldsize=sizeof(m_fieldarray_TradeSettings)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettings)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
	}
	CBCESFieldsTradeSettings(const CBCESFieldsTradeSettings& TradeSettings){
		m_fieldarray=m_fieldarray_TradeSettings;
		m_fieldsize=sizeof(m_fieldarray_TradeSettings)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettings+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettings)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
	}
	CBCESFieldsTradeSettings& operator=(const CBCESFieldsTradeSettings& TradeSettings){
		m_fieldarray=m_fieldarray_TradeSettings;
		m_fieldsize=sizeof(m_fieldarray_TradeSettings)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettings+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettings)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettings),0x00,sizeof(CBCESFieldsTradeSettings)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettings));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettings[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag TradeAction;	/* ������Ϊ */
};

/* ���������������� */
class CBCESFieldsTradeSettingsAddReq:public CBMLFields
{
public:
	CBCESFieldsTradeSettingsAddReq()
	{
		m_fieldarray=m_fieldarray_TradeSettingsAddReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsAddReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettingsAddReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
	}
	CBCESFieldsTradeSettingsAddReq(const CBCESFieldsTradeSettingsAddReq& TradeSettingsAddReq){
		m_fieldarray=m_fieldarray_TradeSettingsAddReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsAddReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsAddReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsAddReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
	}
	CBCESFieldsTradeSettingsAddReq& operator=(const CBCESFieldsTradeSettingsAddReq& TradeSettingsAddReq){
		m_fieldarray=m_fieldarray_TradeSettingsAddReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsAddReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsAddReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsAddReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettingsAddReq),0x00,sizeof(CBCESFieldsTradeSettingsAddReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettingsAddReq));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettingsAddReq[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag TradeAction;	/* ������Ϊ */
};

/* ������������Ӧ�� */
class CBCESFieldsTradeSettingsAddRsp:public CBMLFields
{
public:
	CBCESFieldsTradeSettingsAddRsp()
	{
		m_fieldarray=m_fieldarray_TradeSettingsAddRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsAddRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettingsAddRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsAddRsp(const CBCESFieldsTradeSettingsAddRsp& TradeSettingsAddRsp){
		m_fieldarray=m_fieldarray_TradeSettingsAddRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsAddRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsAddRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsAddRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsAddRsp& operator=(const CBCESFieldsTradeSettingsAddRsp& TradeSettingsAddRsp){
		m_fieldarray=m_fieldarray_TradeSettingsAddRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsAddRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsAddRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsAddRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettingsAddRsp),0x00,sizeof(CBCESFieldsTradeSettingsAddRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettingsAddRsp));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettingsAddRsp[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ���������޸����� */
class CBCESFieldsTradeSettingsModifyReq:public CBMLFields
{
public:
	CBCESFieldsTradeSettingsModifyReq()
	{
		m_fieldarray=m_fieldarray_TradeSettingsModifyReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettingsModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
	}
	CBCESFieldsTradeSettingsModifyReq(const CBCESFieldsTradeSettingsModifyReq& TradeSettingsModifyReq){
		m_fieldarray=m_fieldarray_TradeSettingsModifyReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsModifyReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
	}
	CBCESFieldsTradeSettingsModifyReq& operator=(const CBCESFieldsTradeSettingsModifyReq& TradeSettingsModifyReq){
		m_fieldarray=m_fieldarray_TradeSettingsModifyReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsModifyReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&TradeAction,sizeof(TradeAction),NULL,0,bces_rulearray+BCESFieldIndexTradeAction);	/* ������Ϊ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettingsModifyReq),0x00,sizeof(CBCESFieldsTradeSettingsModifyReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettingsModifyReq));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettingsModifyReq[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag TradeAction;	/* ������Ϊ */
};

/* ���������޸�Ӧ�� */
class CBCESFieldsTradeSettingsModifyRsp:public CBMLFields
{
public:
	CBCESFieldsTradeSettingsModifyRsp()
	{
		m_fieldarray=m_fieldarray_TradeSettingsModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettingsModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsModifyRsp(const CBCESFieldsTradeSettingsModifyRsp& TradeSettingsModifyRsp){
		m_fieldarray=m_fieldarray_TradeSettingsModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsModifyRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsModifyRsp& operator=(const CBCESFieldsTradeSettingsModifyRsp& TradeSettingsModifyRsp){
		m_fieldarray=m_fieldarray_TradeSettingsModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsModifyRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettingsModifyRsp),0x00,sizeof(CBCESFieldsTradeSettingsModifyRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettingsModifyRsp));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettingsModifyRsp[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ��������ɾ������ */
class CBCESFieldsTradeSettingsDeleteReq:public CBMLFields
{
public:
	CBCESFieldsTradeSettingsDeleteReq()
	{
		m_fieldarray=m_fieldarray_TradeSettingsDeleteReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsDeleteReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettingsDeleteReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsDeleteReq(const CBCESFieldsTradeSettingsDeleteReq& TradeSettingsDeleteReq){
		m_fieldarray=m_fieldarray_TradeSettingsDeleteReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsDeleteReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsDeleteReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsDeleteReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsDeleteReq& operator=(const CBCESFieldsTradeSettingsDeleteReq& TradeSettingsDeleteReq){
		m_fieldarray=m_fieldarray_TradeSettingsDeleteReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsDeleteReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsDeleteReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsDeleteReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettingsDeleteReq),0x00,sizeof(CBCESFieldsTradeSettingsDeleteReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettingsDeleteReq));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettingsDeleteReq[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ��������ɾ��Ӧ�� */
class CBCESFieldsTradeSettingsDeleteRsp:public CBMLFields
{
public:
	CBCESFieldsTradeSettingsDeleteRsp()
	{
		m_fieldarray=m_fieldarray_TradeSettingsDeleteRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsDeleteRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettingsDeleteRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsDeleteRsp(const CBCESFieldsTradeSettingsDeleteRsp& TradeSettingsDeleteRsp){
		m_fieldarray=m_fieldarray_TradeSettingsDeleteRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsDeleteRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsDeleteRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsDeleteRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsDeleteRsp& operator=(const CBCESFieldsTradeSettingsDeleteRsp& TradeSettingsDeleteRsp){
		m_fieldarray=m_fieldarray_TradeSettingsDeleteRsp;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsDeleteRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsDeleteRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsDeleteRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettingsDeleteRsp),0x00,sizeof(CBCESFieldsTradeSettingsDeleteRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettingsDeleteRsp));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettingsDeleteRsp[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* �������ò�ѯ���� */
class CBCESFieldsTradeSettingsQueryReq:public CBMLFields
{
public:
	CBCESFieldsTradeSettingsQueryReq()
	{
		m_fieldarray=m_fieldarray_TradeSettingsQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeSettingsQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsQueryReq(const CBCESFieldsTradeSettingsQueryReq& TradeSettingsQueryReq){
		m_fieldarray=m_fieldarray_TradeSettingsQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsTradeSettingsQueryReq& operator=(const CBCESFieldsTradeSettingsQueryReq& TradeSettingsQueryReq){
		m_fieldarray=m_fieldarray_TradeSettingsQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TradeSettingsQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeSettingsQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTradeSettingsQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeSettingsQueryReq),0x00,sizeof(CBCESFieldsTradeSettingsQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeSettingsQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_TradeSettingsQueryReq[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ǩԼ��Ϣ */
class CBCESFieldsAccountBind:public CBMLFields
{
public:
	CBCESFieldsAccountBind()
	{
		m_fieldarray=m_fieldarray_AccountBind;
		m_fieldsize=sizeof(m_fieldarray_AccountBind)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsAccountBind)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)ReceiveProvice,sizeof(ReceiveProvice),NULL,0,bces_rulearray+BCESFieldIndexReceiveProvice);	/* ����ʡ�� */
		AddField((void*)ReceiveCity,sizeof(ReceiveCity),NULL,0,bces_rulearray+BCESFieldIndexReceiveCity);	/* ������ */
		AddField((void*)&AccountBindStatus,sizeof(AccountBindStatus),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatus);	/* ǩԼ״̬ */
		AddField((void*)AccountBindStatusDesc,sizeof(AccountBindStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatusDesc);	/* ǩԼ״̬���� */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
	}
	CBCESFieldsAccountBind(const CBCESFieldsAccountBind& AccountBind){
		m_fieldarray=m_fieldarray_AccountBind;
		m_fieldsize=sizeof(m_fieldarray_AccountBind)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBind+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBind)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)ReceiveProvice,sizeof(ReceiveProvice),NULL,0,bces_rulearray+BCESFieldIndexReceiveProvice);	/* ����ʡ�� */
		AddField((void*)ReceiveCity,sizeof(ReceiveCity),NULL,0,bces_rulearray+BCESFieldIndexReceiveCity);	/* ������ */
		AddField((void*)&AccountBindStatus,sizeof(AccountBindStatus),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatus);	/* ǩԼ״̬ */
		AddField((void*)AccountBindStatusDesc,sizeof(AccountBindStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatusDesc);	/* ǩԼ״̬���� */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
	}
	CBCESFieldsAccountBind& operator=(const CBCESFieldsAccountBind& AccountBind){
		m_fieldarray=m_fieldarray_AccountBind;
		m_fieldsize=sizeof(m_fieldarray_AccountBind)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBind+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBind)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)ReceiveProvice,sizeof(ReceiveProvice),NULL,0,bces_rulearray+BCESFieldIndexReceiveProvice);	/* ����ʡ�� */
		AddField((void*)ReceiveCity,sizeof(ReceiveCity),NULL,0,bces_rulearray+BCESFieldIndexReceiveCity);	/* ������ */
		AddField((void*)&AccountBindStatus,sizeof(AccountBindStatus),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatus);	/* ǩԼ״̬ */
		AddField((void*)AccountBindStatusDesc,sizeof(AccountBindStatusDesc),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatusDesc);	/* ǩԼ״̬���� */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_AccountBind),0x00,sizeof(CBCESFieldsAccountBind)-sizeof(CBMLFields)-sizeof(m_fieldarray_AccountBind));
	}

	BML_FIELD_INFO m_fieldarray_AccountBind[11];

	// Field
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
class CBCESFieldsAccountBindReq:public CBMLFields
{
public:
	CBCESFieldsAccountBindReq()
	{
		m_fieldarray=m_fieldarray_AccountBindReq;
		m_fieldsize=sizeof(m_fieldarray_AccountBindReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsAccountBindReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)ReceiveProvice,sizeof(ReceiveProvice),NULL,0,bces_rulearray+BCESFieldIndexReceiveProvice);	/* ����ʡ�� */
		AddField((void*)ReceiveCity,sizeof(ReceiveCity),NULL,0,bces_rulearray+BCESFieldIndexReceiveCity);	/* ������ */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
	}
	CBCESFieldsAccountBindReq(const CBCESFieldsAccountBindReq& AccountBindReq){
		m_fieldarray=m_fieldarray_AccountBindReq;
		m_fieldsize=sizeof(m_fieldarray_AccountBindReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBindReq+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBindReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)ReceiveProvice,sizeof(ReceiveProvice),NULL,0,bces_rulearray+BCESFieldIndexReceiveProvice);	/* ����ʡ�� */
		AddField((void*)ReceiveCity,sizeof(ReceiveCity),NULL,0,bces_rulearray+BCESFieldIndexReceiveCity);	/* ������ */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
	}
	CBCESFieldsAccountBindReq& operator=(const CBCESFieldsAccountBindReq& AccountBindReq){
		m_fieldarray=m_fieldarray_AccountBindReq;
		m_fieldsize=sizeof(m_fieldarray_AccountBindReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBindReq+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBindReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)ReceiveAccountID,sizeof(ReceiveAccountID),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountID);	/* �տ��ʺ� */
		AddField((void*)ReceiveAccountName,sizeof(ReceiveAccountName),NULL,0,bces_rulearray+BCESFieldIndexReceiveAccountName);	/* �տ�� */
		AddField((void*)ReceiveBankID,sizeof(ReceiveBankID),NULL,0,bces_rulearray+BCESFieldIndexReceiveBankID);	/* �տ��к� */
		AddField((void*)ReceiveBranchName,sizeof(ReceiveBranchName),NULL,0,bces_rulearray+BCESFieldIndexReceiveBranchName);	/* ֧������ */
		AddField((void*)ReceiveProvice,sizeof(ReceiveProvice),NULL,0,bces_rulearray+BCESFieldIndexReceiveProvice);	/* ����ʡ�� */
		AddField((void*)ReceiveCity,sizeof(ReceiveCity),NULL,0,bces_rulearray+BCESFieldIndexReceiveCity);	/* ������ */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_AccountBindReq),0x00,sizeof(CBCESFieldsAccountBindReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_AccountBindReq));
	}

	BML_FIELD_INFO m_fieldarray_AccountBindReq[9];

	// Field
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
class CBCESFieldsAccountBindQueryReq:public CBMLFields
{
public:
	CBCESFieldsAccountBindQueryReq()
	{
		m_fieldarray=m_fieldarray_AccountBindQueryReq;
		m_fieldsize=sizeof(m_fieldarray_AccountBindQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsAccountBindQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsAccountBindQueryReq(const CBCESFieldsAccountBindQueryReq& AccountBindQueryReq){
		m_fieldarray=m_fieldarray_AccountBindQueryReq;
		m_fieldsize=sizeof(m_fieldarray_AccountBindQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBindQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBindQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
	}
	CBCESFieldsAccountBindQueryReq& operator=(const CBCESFieldsAccountBindQueryReq& AccountBindQueryReq){
		m_fieldarray=m_fieldarray_AccountBindQueryReq;
		m_fieldsize=sizeof(m_fieldarray_AccountBindQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBindQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBindQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_AccountBindQueryReq),0x00,sizeof(CBCESFieldsAccountBindQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_AccountBindQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_AccountBindQueryReq[1];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
};

/* ǩԼӦ�� */
class CBCESFieldsAccountBindRsp:public CBMLFields
{
public:
	CBCESFieldsAccountBindRsp()
	{
		m_fieldarray=m_fieldarray_AccountBindRsp;
		m_fieldsize=sizeof(m_fieldarray_AccountBindRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsAccountBindRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AccountBindURL,sizeof(AccountBindURL),NULL,0,bces_rulearray+BCESFieldIndexAccountBindURL);	/* ��ַ */
		AddField((void*)&AccountBindStatus,sizeof(AccountBindStatus),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatus);	/* ǩԼ״̬ */
	}
	CBCESFieldsAccountBindRsp(const CBCESFieldsAccountBindRsp& AccountBindRsp){
		m_fieldarray=m_fieldarray_AccountBindRsp;
		m_fieldsize=sizeof(m_fieldarray_AccountBindRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBindRsp+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBindRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AccountBindURL,sizeof(AccountBindURL),NULL,0,bces_rulearray+BCESFieldIndexAccountBindURL);	/* ��ַ */
		AddField((void*)&AccountBindStatus,sizeof(AccountBindStatus),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatus);	/* ǩԼ״̬ */
	}
	CBCESFieldsAccountBindRsp& operator=(const CBCESFieldsAccountBindRsp& AccountBindRsp){
		m_fieldarray=m_fieldarray_AccountBindRsp;
		m_fieldsize=sizeof(m_fieldarray_AccountBindRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&AccountBindRsp+sizeof(CBMLFields),sizeof(CBCESFieldsAccountBindRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AccountBindURL,sizeof(AccountBindURL),NULL,0,bces_rulearray+BCESFieldIndexAccountBindURL);	/* ��ַ */
		AddField((void*)&AccountBindStatus,sizeof(AccountBindStatus),NULL,0,bces_rulearray+BCESFieldIndexAccountBindStatus);	/* ǩԼ״̬ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_AccountBindRsp),0x00,sizeof(CBCESFieldsAccountBindRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_AccountBindRsp));
	}

	BML_FIELD_INFO m_fieldarray_AccountBindRsp[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeURL AccountBindURL;	/* ��ַ */
	BCESFieldTypeFlag AccountBindStatus;	/* ǩԼ״̬ */
};

/* ���������޸����� */
class CBCESFieldsTestSettingsModifyReq:public CBMLFields
{
public:
	CBCESFieldsTestSettingsModifyReq()
	{
		m_fieldarray=m_fieldarray_TestSettingsModifyReq;
		m_fieldsize=sizeof(m_fieldarray_TestSettingsModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTestSettingsModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)UserID,sizeof(UserID),NULL,0,bces_rulearray+BCESFieldIndexUserID);	/* �û��� */
		AddField((void*)&ErrNetTradeSec,sizeof(ErrNetTradeSec),NULL,0,bces_rulearray+BCESFieldIndexErrNetTradeSec);	/* ������ϳɽ��ӳ� */
		AddField((void*)&ErrNetRemindSec,sizeof(ErrNetRemindSec),NULL,0,bces_rulearray+BCESFieldIndexErrNetRemindSec);	/* ������������ӳ� */
		AddField((void*)ErrNetRemindTxt,sizeof(ErrNetRemindTxt),NULL,0,bces_rulearray+BCESFieldIndexErrNetRemindTxt);	/* �������������Ϣ */
		AddField((void*)&ErrSeverTradePort,sizeof(ErrSeverTradePort),NULL,0,bces_rulearray+BCESFieldIndexErrSeverTradePort);	/* ���������ϳɽ���� */
		AddField((void*)&ErrSeverRemindPort,sizeof(ErrSeverRemindPort),NULL,0,bces_rulearray+BCESFieldIndexErrSeverRemindPort);	/* �������������ѵ�� */
		AddField((void*)ErrSeverRemindTxt,sizeof(ErrSeverRemindTxt),NULL,0,bces_rulearray+BCESFieldIndexErrSeverRemindTxt);	/* ����������������Ϣ */
	}
	CBCESFieldsTestSettingsModifyReq(const CBCESFieldsTestSettingsModifyReq& TestSettingsModifyReq){
		m_fieldarray=m_fieldarray_TestSettingsModifyReq;
		m_fieldsize=sizeof(m_fieldarray_TestSettingsModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TestSettingsModifyReq+sizeof(CBMLFields),sizeof(CBCESFieldsTestSettingsModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)UserID,sizeof(UserID),NULL,0,bces_rulearray+BCESFieldIndexUserID);	/* �û��� */
		AddField((void*)&ErrNetTradeSec,sizeof(ErrNetTradeSec),NULL,0,bces_rulearray+BCESFieldIndexErrNetTradeSec);	/* ������ϳɽ��ӳ� */
		AddField((void*)&ErrNetRemindSec,sizeof(ErrNetRemindSec),NULL,0,bces_rulearray+BCESFieldIndexErrNetRemindSec);	/* ������������ӳ� */
		AddField((void*)ErrNetRemindTxt,sizeof(ErrNetRemindTxt),NULL,0,bces_rulearray+BCESFieldIndexErrNetRemindTxt);	/* �������������Ϣ */
		AddField((void*)&ErrSeverTradePort,sizeof(ErrSeverTradePort),NULL,0,bces_rulearray+BCESFieldIndexErrSeverTradePort);	/* ���������ϳɽ���� */
		AddField((void*)&ErrSeverRemindPort,sizeof(ErrSeverRemindPort),NULL,0,bces_rulearray+BCESFieldIndexErrSeverRemindPort);	/* �������������ѵ�� */
		AddField((void*)ErrSeverRemindTxt,sizeof(ErrSeverRemindTxt),NULL,0,bces_rulearray+BCESFieldIndexErrSeverRemindTxt);	/* ����������������Ϣ */
	}
	CBCESFieldsTestSettingsModifyReq& operator=(const CBCESFieldsTestSettingsModifyReq& TestSettingsModifyReq){
		m_fieldarray=m_fieldarray_TestSettingsModifyReq;
		m_fieldsize=sizeof(m_fieldarray_TestSettingsModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TestSettingsModifyReq+sizeof(CBMLFields),sizeof(CBCESFieldsTestSettingsModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)UserID,sizeof(UserID),NULL,0,bces_rulearray+BCESFieldIndexUserID);	/* �û��� */
		AddField((void*)&ErrNetTradeSec,sizeof(ErrNetTradeSec),NULL,0,bces_rulearray+BCESFieldIndexErrNetTradeSec);	/* ������ϳɽ��ӳ� */
		AddField((void*)&ErrNetRemindSec,sizeof(ErrNetRemindSec),NULL,0,bces_rulearray+BCESFieldIndexErrNetRemindSec);	/* ������������ӳ� */
		AddField((void*)ErrNetRemindTxt,sizeof(ErrNetRemindTxt),NULL,0,bces_rulearray+BCESFieldIndexErrNetRemindTxt);	/* �������������Ϣ */
		AddField((void*)&ErrSeverTradePort,sizeof(ErrSeverTradePort),NULL,0,bces_rulearray+BCESFieldIndexErrSeverTradePort);	/* ���������ϳɽ���� */
		AddField((void*)&ErrSeverRemindPort,sizeof(ErrSeverRemindPort),NULL,0,bces_rulearray+BCESFieldIndexErrSeverRemindPort);	/* �������������ѵ�� */
		AddField((void*)ErrSeverRemindTxt,sizeof(ErrSeverRemindTxt),NULL,0,bces_rulearray+BCESFieldIndexErrSeverRemindTxt);	/* ����������������Ϣ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TestSettingsModifyReq),0x00,sizeof(CBCESFieldsTestSettingsModifyReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TestSettingsModifyReq));
	}

	BML_FIELD_INFO m_fieldarray_TestSettingsModifyReq[7];

	// Field
	BCESFieldTypeUserID UserID;	/* �û��� */
	BCESFieldTypePoints ErrNetTradeSec;	/* ������ϳɽ��ӳ� */
	BCESFieldTypePoints ErrNetRemindSec;	/* ������������ӳ� */
	BCESFieldTypeRspDesc ErrNetRemindTxt;	/* �������������Ϣ */
	BCESFieldTypePoints ErrSeverTradePort;	/* ���������ϳɽ���� */
	BCESFieldTypePoints ErrSeverRemindPort;	/* �������������ѵ�� */
	BCESFieldTypeRspDesc ErrSeverRemindTxt;	/* ����������������Ϣ */
};

/* ���������޸�Ӧ�� */
class CBCESFieldsTestSettingsModifyRsp:public CBMLFields
{
public:
	CBCESFieldsTestSettingsModifyRsp()
	{
		m_fieldarray=m_fieldarray_TestSettingsModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_TestSettingsModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTestSettingsModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)UserID,sizeof(UserID),NULL,0,bces_rulearray+BCESFieldIndexUserID);	/* �û��� */
	}
	CBCESFieldsTestSettingsModifyRsp(const CBCESFieldsTestSettingsModifyRsp& TestSettingsModifyRsp){
		m_fieldarray=m_fieldarray_TestSettingsModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_TestSettingsModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TestSettingsModifyRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTestSettingsModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)UserID,sizeof(UserID),NULL,0,bces_rulearray+BCESFieldIndexUserID);	/* �û��� */
	}
	CBCESFieldsTestSettingsModifyRsp& operator=(const CBCESFieldsTestSettingsModifyRsp& TestSettingsModifyRsp){
		m_fieldarray=m_fieldarray_TestSettingsModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_TestSettingsModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TestSettingsModifyRsp+sizeof(CBMLFields),sizeof(CBCESFieldsTestSettingsModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)UserID,sizeof(UserID),NULL,0,bces_rulearray+BCESFieldIndexUserID);	/* �û��� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TestSettingsModifyRsp),0x00,sizeof(CBCESFieldsTestSettingsModifyRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_TestSettingsModifyRsp));
	}

	BML_FIELD_INFO m_fieldarray_TestSettingsModifyRsp[1];

	// Field
	BCESFieldTypeUserID UserID;	/* �û��� */
};

/* �ҵ���������ѯ���� */
class CBCESFieldsTopInvestorQueryReq:public CBMLFields
{
public:
	CBCESFieldsTopInvestorQueryReq()
	{
		m_fieldarray=m_fieldarray_TopInvestorQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TopInvestorQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTopInvestorQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsTopInvestorQueryReq(const CBCESFieldsTopInvestorQueryReq& TopInvestorQueryReq){
		m_fieldarray=m_fieldarray_TopInvestorQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TopInvestorQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TopInvestorQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTopInvestorQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
	}
	CBCESFieldsTopInvestorQueryReq& operator=(const CBCESFieldsTopInvestorQueryReq& TopInvestorQueryReq){
		m_fieldarray=m_fieldarray_TopInvestorQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TopInvestorQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TopInvestorQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTopInvestorQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TopInvestorQueryReq),0x00,sizeof(CBCESFieldsTopInvestorQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TopInvestorQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_TopInvestorQueryReq[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
};

/* �ҵ������� */
class CBCESFieldsTopInvestor:public CBMLFields
{
public:
	CBCESFieldsTopInvestor()
	{
		m_fieldarray=m_fieldarray_TopInvestor;
		m_fieldsize=sizeof(m_fieldarray_TopInvestor)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTopInvestor)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ҵ��� */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
	}
	CBCESFieldsTopInvestor(const CBCESFieldsTopInvestor& TopInvestor){
		m_fieldarray=m_fieldarray_TopInvestor;
		m_fieldsize=sizeof(m_fieldarray_TopInvestor)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TopInvestor+sizeof(CBMLFields),sizeof(CBCESFieldsTopInvestor)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ҵ��� */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
	}
	CBCESFieldsTopInvestor& operator=(const CBCESFieldsTopInvestor& TopInvestor){
		m_fieldarray=m_fieldarray_TopInvestor;
		m_fieldsize=sizeof(m_fieldarray_TopInvestor)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TopInvestor+sizeof(CBMLFields),sizeof(CBCESFieldsTopInvestor)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ҵ��� */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TopInvestor),0x00,sizeof(CBCESFieldsTopInvestor)-sizeof(CBMLFields)-sizeof(m_fieldarray_TopInvestor));
	}

	BML_FIELD_INFO m_fieldarray_TopInvestor[5];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeQty Qty;	/* �ҵ��� */
	BCESFieldTypeRankingNum RankingNum;	/* ���� */
};

/* Ͷ���߹ҵ���ѯ���� */
class CBCESFieldsInvestorQuotQueryReq:public CBMLFields
{
public:
	CBCESFieldsInvestorQuotQueryReq()
	{
		m_fieldarray=m_fieldarray_InvestorQuotQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InvestorQuotQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInvestorQuotQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)RankingInvestorID,sizeof(RankingInvestorID),NULL,0,bces_rulearray+BCESFieldIndexRankingInvestorID);	/* ����Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsInvestorQuotQueryReq(const CBCESFieldsInvestorQuotQueryReq& InvestorQuotQueryReq){
		m_fieldarray=m_fieldarray_InvestorQuotQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InvestorQuotQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorQuotQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorQuotQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)RankingInvestorID,sizeof(RankingInvestorID),NULL,0,bces_rulearray+BCESFieldIndexRankingInvestorID);	/* ����Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsInvestorQuotQueryReq& operator=(const CBCESFieldsInvestorQuotQueryReq& InvestorQuotQueryReq){
		m_fieldarray=m_fieldarray_InvestorQuotQueryReq;
		m_fieldsize=sizeof(m_fieldarray_InvestorQuotQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorQuotQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorQuotQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)RankingInvestorID,sizeof(RankingInvestorID),NULL,0,bces_rulearray+BCESFieldIndexRankingInvestorID);	/* ����Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_InvestorQuotQueryReq),0x00,sizeof(CBCESFieldsInvestorQuotQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_InvestorQuotQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_InvestorQuotQueryReq[4];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeInvestorID RankingInvestorID;	/* ����Ͷ���ߺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* Ͷ���߹ҵ� */
class CBCESFieldsInvestorQuot:public CBMLFields
{
public:
	CBCESFieldsInvestorQuot()
	{
		m_fieldarray=m_fieldarray_InvestorQuot;
		m_fieldsize=sizeof(m_fieldarray_InvestorQuot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInvestorQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ҵ��� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
	}
	CBCESFieldsInvestorQuot(const CBCESFieldsInvestorQuot& InvestorQuot){
		m_fieldarray=m_fieldarray_InvestorQuot;
		m_fieldsize=sizeof(m_fieldarray_InvestorQuot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorQuot+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ҵ��� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
	}
	CBCESFieldsInvestorQuot& operator=(const CBCESFieldsInvestorQuot& InvestorQuot){
		m_fieldarray=m_fieldarray_InvestorQuot;
		m_fieldsize=sizeof(m_fieldarray_InvestorQuot)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&InvestorQuot+sizeof(CBMLFields),sizeof(CBCESFieldsInvestorQuot)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* �ҵ��� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&RankingNum,sizeof(RankingNum),NULL,0,bces_rulearray+BCESFieldIndexRankingNum);	/* ���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_InvestorQuot),0x00,sizeof(CBCESFieldsInvestorQuot)-sizeof(CBMLFields)-sizeof(m_fieldarray_InvestorQuot));
	}

	BML_FIELD_INFO m_fieldarray_InvestorQuot[6];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeQty Qty;	/* �ҵ��� */
	BCESFieldTypePrice Price;	/* �۸� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeRankingNum RankingNum;	/* ���� */
};

/* ����ʱ�� */
class CBCESFieldsTradeTime:public CBMLFields
{
public:
	CBCESFieldsTradeTime()
	{
		m_fieldarray=m_fieldarray_TradeTime;
		m_fieldsize=sizeof(m_fieldarray_TradeTime)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTradeTime)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TimeBegin,sizeof(TimeBegin),NULL,0,bces_rulearray+BCESFieldIndexTimeBegin);	/* ��ʼʱ�� */
		AddField((void*)TimeEnd,sizeof(TimeEnd),NULL,0,bces_rulearray+BCESFieldIndexTimeEnd);	/* ����ʱ�� */
		AddField((void*)&MarketStatus,sizeof(MarketStatus),NULL,0,bces_rulearray+BCESFieldIndexMarketStatus);	/* �г�״̬ */
	}
	CBCESFieldsTradeTime(const CBCESFieldsTradeTime& TradeTime){
		m_fieldarray=m_fieldarray_TradeTime;
		m_fieldsize=sizeof(m_fieldarray_TradeTime)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeTime+sizeof(CBMLFields),sizeof(CBCESFieldsTradeTime)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TimeBegin,sizeof(TimeBegin),NULL,0,bces_rulearray+BCESFieldIndexTimeBegin);	/* ��ʼʱ�� */
		AddField((void*)TimeEnd,sizeof(TimeEnd),NULL,0,bces_rulearray+BCESFieldIndexTimeEnd);	/* ����ʱ�� */
		AddField((void*)&MarketStatus,sizeof(MarketStatus),NULL,0,bces_rulearray+BCESFieldIndexMarketStatus);	/* �г�״̬ */
	}
	CBCESFieldsTradeTime& operator=(const CBCESFieldsTradeTime& TradeTime){
		m_fieldarray=m_fieldarray_TradeTime;
		m_fieldsize=sizeof(m_fieldarray_TradeTime)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TradeTime+sizeof(CBMLFields),sizeof(CBCESFieldsTradeTime)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)TimeBegin,sizeof(TimeBegin),NULL,0,bces_rulearray+BCESFieldIndexTimeBegin);	/* ��ʼʱ�� */
		AddField((void*)TimeEnd,sizeof(TimeEnd),NULL,0,bces_rulearray+BCESFieldIndexTimeEnd);	/* ����ʱ�� */
		AddField((void*)&MarketStatus,sizeof(MarketStatus),NULL,0,bces_rulearray+BCESFieldIndexMarketStatus);	/* �г�״̬ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TradeTime),0x00,sizeof(CBCESFieldsTradeTime)-sizeof(CBMLFields)-sizeof(m_fieldarray_TradeTime));
	}

	BML_FIELD_INFO m_fieldarray_TradeTime[3];

	// Field
	BCESFieldTypeTime TimeBegin;	/* ��ʼʱ�� */
	BCESFieldTypeTime TimeEnd;	/* ����ʱ�� */
	BCESFieldTypeFlag MarketStatus;	/* �г�״̬ */
};

/* ���ս������� */
class CBCESFieldsDeliveryApply:public CBMLFields
{
public:
	CBCESFieldsDeliveryApply()
	{
		m_fieldarray=m_fieldarray_DeliveryApply;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApply)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApply)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsDeliveryApply(const CBCESFieldsDeliveryApply& DeliveryApply){
		m_fieldarray=m_fieldarray_DeliveryApply;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApply)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApply+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApply)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsDeliveryApply& operator=(const CBCESFieldsDeliveryApply& DeliveryApply){
		m_fieldarray=m_fieldarray_DeliveryApply;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApply)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApply+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApply)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApply),0x00,sizeof(CBCESFieldsDeliveryApply)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApply));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApply[24];

	// Field
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
class CBCESFieldsDeliveryApplyQueryReq:public CBMLFields
{
public:
	CBCESFieldsDeliveryApplyQueryReq()
	{
		m_fieldarray=m_fieldarray_DeliveryApplyQueryReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApplyQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
	}
	CBCESFieldsDeliveryApplyQueryReq(const CBCESFieldsDeliveryApplyQueryReq& DeliveryApplyQueryReq){
		m_fieldarray=m_fieldarray_DeliveryApplyQueryReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
	}
	CBCESFieldsDeliveryApplyQueryReq& operator=(const CBCESFieldsDeliveryApplyQueryReq& DeliveryApplyQueryReq){
		m_fieldarray=m_fieldarray_DeliveryApplyQueryReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApplyQueryReq),0x00,sizeof(CBCESFieldsDeliveryApplyQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApplyQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApplyQueryReq[6];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
	BCESFieldTypeFlag DeliveryStatus;	/* ���ս���״̬ */
};

/* ���ս��������������� */
class CBCESFieldsDeliveryApplyAddReq:public CBMLFields
{
public:
	CBCESFieldsDeliveryApplyAddReq()
	{
		m_fieldarray=m_fieldarray_DeliveryApplyAddReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyAddReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApplyAddReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsDeliveryApplyAddReq(const CBCESFieldsDeliveryApplyAddReq& DeliveryApplyAddReq){
		m_fieldarray=m_fieldarray_DeliveryApplyAddReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyAddReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyAddReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyAddReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsDeliveryApplyAddReq& operator=(const CBCESFieldsDeliveryApplyAddReq& DeliveryApplyAddReq){
		m_fieldarray=m_fieldarray_DeliveryApplyAddReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyAddReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyAddReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyAddReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApplyAddReq),0x00,sizeof(CBCESFieldsDeliveryApplyAddReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApplyAddReq));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApplyAddReq[23];

	// Field
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
class CBCESFieldsDeliveryApplyAddRsp:public CBMLFields
{
public:
	CBCESFieldsDeliveryApplyAddRsp()
	{
		m_fieldarray=m_fieldarray_DeliveryApplyAddRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyAddRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApplyAddRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
	}
	CBCESFieldsDeliveryApplyAddRsp(const CBCESFieldsDeliveryApplyAddRsp& DeliveryApplyAddRsp){
		m_fieldarray=m_fieldarray_DeliveryApplyAddRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyAddRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyAddRsp+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyAddRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
	}
	CBCESFieldsDeliveryApplyAddRsp& operator=(const CBCESFieldsDeliveryApplyAddRsp& DeliveryApplyAddRsp){
		m_fieldarray=m_fieldarray_DeliveryApplyAddRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyAddRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyAddRsp+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyAddRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApplyAddRsp),0x00,sizeof(CBCESFieldsDeliveryApplyAddRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApplyAddRsp));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApplyAddRsp[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDeliveryID DeliveryApplyID;	/* ���ս��������� */
};

/* ���ս��������޸����� */
class CBCESFieldsDeliveryApplyModifyReq:public CBMLFields
{
public:
	CBCESFieldsDeliveryApplyModifyReq()
	{
		m_fieldarray=m_fieldarray_DeliveryApplyModifyReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApplyModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsDeliveryApplyModifyReq(const CBCESFieldsDeliveryApplyModifyReq& DeliveryApplyModifyReq){
		m_fieldarray=m_fieldarray_DeliveryApplyModifyReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyModifyReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsDeliveryApplyModifyReq& operator=(const CBCESFieldsDeliveryApplyModifyReq& DeliveryApplyModifyReq){
		m_fieldarray=m_fieldarray_DeliveryApplyModifyReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyModifyReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyModifyReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyModifyReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DeliveryAddress,sizeof(DeliveryAddress),NULL,0,bces_rulearray+BCESFieldIndexDeliveryAddress);	/* ���ս����ַ */
		AddField((void*)LiaisonName,sizeof(LiaisonName),NULL,0,bces_rulearray+BCESFieldIndexLiaisonName);	/* ��ϵ������ */
		AddField((void*)LiaisonNumber,sizeof(LiaisonNumber),NULL,0,bces_rulearray+BCESFieldIndexLiaisonNumber);	/* ��ϵ�绰 */
		AddField((void*)&CredentialType,sizeof(CredentialType),NULL,0,bces_rulearray+BCESFieldIndexCredentialType);	/* ֤������ */
		AddField((void*)CredentialNo,sizeof(CredentialNo),NULL,0,bces_rulearray+BCESFieldIndexCredentialNo);	/* ֤���� */
		AddField((void*)LiaisonAddress,sizeof(LiaisonAddress),NULL,0,bces_rulearray+BCESFieldIndexLiaisonAddress);	/* ��ϵ��ַ */
		AddField((void*)PostCode,sizeof(PostCode),NULL,0,bces_rulearray+BCESFieldIndexPostCode);	/* �ʱ� */
		AddField((void*)CompanyName,sizeof(CompanyName),NULL,0,bces_rulearray+BCESFieldIndexCompanyName);	/* ��ҵ���� */
		AddField((void*)CompanyAddress,sizeof(CompanyAddress),NULL,0,bces_rulearray+BCESFieldIndexCompanyAddress);	/* ��˾��ַ */
		AddField((void*)CompanyNumber,sizeof(CompanyNumber),NULL,0,bces_rulearray+BCESFieldIndexCompanyNumber);	/* ��˾�绰 */
		AddField((void*)BankNameAccountID,sizeof(BankNameAccountID),NULL,0,bces_rulearray+BCESFieldIndexBankNameAccountID);	/* �������Ƽ��˺� */
		AddField((void*)TaxNo,sizeof(TaxNo),NULL,0,bces_rulearray+BCESFieldIndexTaxNo);	/* ˰��ǼǺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		AddField((void*)&DeliveryStatus,sizeof(DeliveryStatus),NULL,0,bces_rulearray+BCESFieldIndexDeliveryStatus);	/* ���ս���״̬ */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* �۸� */
		AddField((void*)&Qty,sizeof(Qty),NULL,0,bces_rulearray+BCESFieldIndexQty);	/* ���� */
		AddField((void*)ApplyDate,sizeof(ApplyDate),NULL,0,bces_rulearray+BCESFieldIndexApplyDate);	/* �������� */
		AddField((void*)&InvoiceFlag,sizeof(InvoiceFlag),NULL,0,bces_rulearray+BCESFieldIndexInvoiceFlag);	/* ��Ʊ��ʶ */
		AddField((void*)&InvoiceType,sizeof(InvoiceType),NULL,0,bces_rulearray+BCESFieldIndexInvoiceType);	/* ��Ʊ���� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApplyModifyReq),0x00,sizeof(CBCESFieldsDeliveryApplyModifyReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApplyModifyReq));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApplyModifyReq[24];

	// Field
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
class CBCESFieldsDeliveryApplyModifyRsp:public CBMLFields
{
public:
	CBCESFieldsDeliveryApplyModifyRsp()
	{
		m_fieldarray=m_fieldarray_DeliveryApplyModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApplyModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsDeliveryApplyModifyRsp(const CBCESFieldsDeliveryApplyModifyRsp& DeliveryApplyModifyRsp){
		m_fieldarray=m_fieldarray_DeliveryApplyModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyModifyRsp+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsDeliveryApplyModifyRsp& operator=(const CBCESFieldsDeliveryApplyModifyRsp& DeliveryApplyModifyRsp){
		m_fieldarray=m_fieldarray_DeliveryApplyModifyRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyModifyRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyModifyRsp+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyModifyRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApplyModifyRsp),0x00,sizeof(CBCESFieldsDeliveryApplyModifyRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApplyModifyRsp));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApplyModifyRsp[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* ���ս�������ɾ������ */
class CBCESFieldsDeliveryApplyDeleteReq:public CBMLFields
{
public:
	CBCESFieldsDeliveryApplyDeleteReq()
	{
		m_fieldarray=m_fieldarray_DeliveryApplyDeleteReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyDeleteReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApplyDeleteReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
	}
	CBCESFieldsDeliveryApplyDeleteReq(const CBCESFieldsDeliveryApplyDeleteReq& DeliveryApplyDeleteReq){
		m_fieldarray=m_fieldarray_DeliveryApplyDeleteReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyDeleteReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyDeleteReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyDeleteReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
	}
	CBCESFieldsDeliveryApplyDeleteReq& operator=(const CBCESFieldsDeliveryApplyDeleteReq& DeliveryApplyDeleteReq){
		m_fieldarray=m_fieldarray_DeliveryApplyDeleteReq;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyDeleteReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyDeleteReq+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyDeleteReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)DeliveryApplyID,sizeof(DeliveryApplyID),NULL,0,bces_rulearray+BCESFieldIndexDeliveryApplyID);	/* ���ս��������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApplyDeleteReq),0x00,sizeof(CBCESFieldsDeliveryApplyDeleteReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApplyDeleteReq));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApplyDeleteReq[1];

	// Field
	BCESFieldTypeDeliveryID DeliveryApplyID;	/* ���ս��������� */
};

/* ���ս�������ɾ��Ӧ�� */
class CBCESFieldsDeliveryApplyDeleteRsp:public CBMLFields
{
public:
	CBCESFieldsDeliveryApplyDeleteRsp()
	{
		m_fieldarray=m_fieldarray_DeliveryApplyDeleteRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyDeleteRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsDeliveryApplyDeleteRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsDeliveryApplyDeleteRsp(const CBCESFieldsDeliveryApplyDeleteRsp& DeliveryApplyDeleteRsp){
		m_fieldarray=m_fieldarray_DeliveryApplyDeleteRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyDeleteRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyDeleteRsp+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyDeleteRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
	}
	CBCESFieldsDeliveryApplyDeleteRsp& operator=(const CBCESFieldsDeliveryApplyDeleteRsp& DeliveryApplyDeleteRsp){
		m_fieldarray=m_fieldarray_DeliveryApplyDeleteRsp;
		m_fieldsize=sizeof(m_fieldarray_DeliveryApplyDeleteRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&DeliveryApplyDeleteRsp+sizeof(CBMLFields),sizeof(CBCESFieldsDeliveryApplyDeleteRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)&BSFlag,sizeof(BSFlag),NULL,0,bces_rulearray+BCESFieldIndexBSFlag);	/* ������־ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_DeliveryApplyDeleteRsp),0x00,sizeof(CBCESFieldsDeliveryApplyDeleteRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_DeliveryApplyDeleteRsp));
	}

	BML_FIELD_INFO m_fieldarray_DeliveryApplyDeleteRsp[2];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeFlag BSFlag;	/* ������־ */
};

/* �����������/�ش����� */
class CBCESFieldsQuotAdviserQuesAnswReq:public CBMLFields
{
public:
	CBCESFieldsQuotAdviserQuesAnswReq()
	{
		m_fieldarray=m_fieldarray_QuotAdviserQuesAnswReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesAnswReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotAdviserQuesAnswReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&QuesAnswFlag,sizeof(QuesAnswFlag),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswFlag);	/* ���ʻش��־ */
		AddField((void*)QuesAnswContent,sizeof(QuesAnswContent),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswContent);	/* ����/�ش����� */
		AddField((void*)QuesAnswDate,sizeof(QuesAnswDate),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswDate);	/* ����/�ش����� */
		AddField((void*)QuesAnswTime,sizeof(QuesAnswTime),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswTime);	/* ����/�ش�ʱ�� */
	}
	CBCESFieldsQuotAdviserQuesAnswReq(const CBCESFieldsQuotAdviserQuesAnswReq& QuotAdviserQuesAnswReq){
		m_fieldarray=m_fieldarray_QuotAdviserQuesAnswReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesAnswReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesAnswReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesAnswReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&QuesAnswFlag,sizeof(QuesAnswFlag),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswFlag);	/* ���ʻش��־ */
		AddField((void*)QuesAnswContent,sizeof(QuesAnswContent),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswContent);	/* ����/�ش����� */
		AddField((void*)QuesAnswDate,sizeof(QuesAnswDate),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswDate);	/* ����/�ش����� */
		AddField((void*)QuesAnswTime,sizeof(QuesAnswTime),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswTime);	/* ����/�ش�ʱ�� */
	}
	CBCESFieldsQuotAdviserQuesAnswReq& operator=(const CBCESFieldsQuotAdviserQuesAnswReq& QuotAdviserQuesAnswReq){
		m_fieldarray=m_fieldarray_QuotAdviserQuesAnswReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesAnswReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesAnswReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesAnswReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&QuesAnswFlag,sizeof(QuesAnswFlag),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswFlag);	/* ���ʻش��־ */
		AddField((void*)QuesAnswContent,sizeof(QuesAnswContent),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswContent);	/* ����/�ش����� */
		AddField((void*)QuesAnswDate,sizeof(QuesAnswDate),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswDate);	/* ����/�ش����� */
		AddField((void*)QuesAnswTime,sizeof(QuesAnswTime),NULL,0,bces_rulearray+BCESFieldIndexQuesAnswTime);	/* ����/�ش�ʱ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotAdviserQuesAnswReq),0x00,sizeof(CBCESFieldsQuotAdviserQuesAnswReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotAdviserQuesAnswReq));
	}

	BML_FIELD_INFO m_fieldarray_QuotAdviserQuesAnswReq[7];

	// Field
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
	BCESFieldTypeFlag QuesAnswFlag;	/* ���ʻش��־ */
	BCESFieldTypeQuesAnswContent QuesAnswContent;	/* ����/�ش����� */
	BCESFieldTypeDate QuesAnswDate;	/* ����/�ش����� */
	BCESFieldTypeTime QuesAnswTime;	/* ����/�ش�ʱ�� */
};

/* �����������/�ش�Ӧ�� */
class CBCESFieldsQuotAdviserQuesAnswRsp:public CBMLFields
{
public:
	CBCESFieldsQuotAdviserQuesAnswRsp()
	{
		m_fieldarray=m_fieldarray_QuotAdviserQuesAnswRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesAnswRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotAdviserQuesAnswRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
	}
	CBCESFieldsQuotAdviserQuesAnswRsp(const CBCESFieldsQuotAdviserQuesAnswRsp& QuotAdviserQuesAnswRsp){
		m_fieldarray=m_fieldarray_QuotAdviserQuesAnswRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesAnswRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesAnswRsp+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesAnswRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
	}
	CBCESFieldsQuotAdviserQuesAnswRsp& operator=(const CBCESFieldsQuotAdviserQuesAnswRsp& QuotAdviserQuesAnswRsp){
		m_fieldarray=m_fieldarray_QuotAdviserQuesAnswRsp;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesAnswRsp)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesAnswRsp+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesAnswRsp)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotAdviserQuesAnswRsp),0x00,sizeof(CBCESFieldsQuotAdviserQuesAnswRsp)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotAdviserQuesAnswRsp));
	}

	BML_FIELD_INFO m_fieldarray_QuotAdviserQuesAnswRsp[3];

	// Field
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
};

/* ����������ʲ�ѯ���� */
class CBCESFieldsQuotAdviserQuesQueryReq:public CBMLFields
{
public:
	CBCESFieldsQuotAdviserQuesQueryReq()
	{
		m_fieldarray=m_fieldarray_QuotAdviserQuesQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotAdviserQuesQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&InvestorAdviserFlag,sizeof(InvestorAdviserFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorAdviserFlag);	/* Ͷ���߹��ʱ�־ */
	}
	CBCESFieldsQuotAdviserQuesQueryReq(const CBCESFieldsQuotAdviserQuesQueryReq& QuotAdviserQuesQueryReq){
		m_fieldarray=m_fieldarray_QuotAdviserQuesQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&InvestorAdviserFlag,sizeof(InvestorAdviserFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorAdviserFlag);	/* Ͷ���߹��ʱ�־ */
	}
	CBCESFieldsQuotAdviserQuesQueryReq& operator=(const CBCESFieldsQuotAdviserQuesQueryReq& QuotAdviserQuesQueryReq){
		m_fieldarray=m_fieldarray_QuotAdviserQuesQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)&InvestorAdviserFlag,sizeof(InvestorAdviserFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorAdviserFlag);	/* Ͷ���߹��ʱ�־ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotAdviserQuesQueryReq),0x00,sizeof(CBCESFieldsQuotAdviserQuesQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotAdviserQuesQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_QuotAdviserQuesQueryReq[4];

	// Field
	BCESFieldTypeQuestionID QuestionID;	/* ���ʱ�� */
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeAdviserID AdviserID;	/* ���ʺ� */
	BCESFieldTypeFlag InvestorAdviserFlag;	/* Ͷ���߹��ʱ�־ */
};

/* ����������ʲ�ѯӦ�� */
class CBCESFieldsQuotAdviserQuesQuery:public CBMLFields
{
public:
	CBCESFieldsQuotAdviserQuesQuery()
	{
		m_fieldarray=m_fieldarray_QuotAdviserQuesQuery;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesQuery)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotAdviserQuesQuery)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)QuestionContent,sizeof(QuestionContent),NULL,0,bces_rulearray+BCESFieldIndexQuestionContent);	/* �������� */
		AddField((void*)QuestionDate,sizeof(QuestionDate),NULL,0,bces_rulearray+BCESFieldIndexQuestionDate);	/* �������� */
		AddField((void*)QuestionTime,sizeof(QuestionTime),NULL,0,bces_rulearray+BCESFieldIndexQuestionTime);	/* ����ʱ�� */
		AddField((void*)AnswerContent,sizeof(AnswerContent),NULL,0,bces_rulearray+BCESFieldIndexAnswerContent);	/* �ش����� */
		AddField((void*)AnswerDate,sizeof(AnswerDate),NULL,0,bces_rulearray+BCESFieldIndexAnswerDate);	/* �ش����� */
		AddField((void*)AnswerTime,sizeof(AnswerTime),NULL,0,bces_rulearray+BCESFieldIndexAnswerTime);	/* �ش�ʱ�� */
	}
	CBCESFieldsQuotAdviserQuesQuery(const CBCESFieldsQuotAdviserQuesQuery& QuotAdviserQuesQuery){
		m_fieldarray=m_fieldarray_QuotAdviserQuesQuery;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesQuery)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesQuery+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesQuery)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)QuestionContent,sizeof(QuestionContent),NULL,0,bces_rulearray+BCESFieldIndexQuestionContent);	/* �������� */
		AddField((void*)QuestionDate,sizeof(QuestionDate),NULL,0,bces_rulearray+BCESFieldIndexQuestionDate);	/* �������� */
		AddField((void*)QuestionTime,sizeof(QuestionTime),NULL,0,bces_rulearray+BCESFieldIndexQuestionTime);	/* ����ʱ�� */
		AddField((void*)AnswerContent,sizeof(AnswerContent),NULL,0,bces_rulearray+BCESFieldIndexAnswerContent);	/* �ش����� */
		AddField((void*)AnswerDate,sizeof(AnswerDate),NULL,0,bces_rulearray+BCESFieldIndexAnswerDate);	/* �ش����� */
		AddField((void*)AnswerTime,sizeof(AnswerTime),NULL,0,bces_rulearray+BCESFieldIndexAnswerTime);	/* �ش�ʱ�� */
	}
	CBCESFieldsQuotAdviserQuesQuery& operator=(const CBCESFieldsQuotAdviserQuesQuery& QuotAdviserQuesQuery){
		m_fieldarray=m_fieldarray_QuotAdviserQuesQuery;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesQuery)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesQuery+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesQuery)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)QuestionContent,sizeof(QuestionContent),NULL,0,bces_rulearray+BCESFieldIndexQuestionContent);	/* �������� */
		AddField((void*)QuestionDate,sizeof(QuestionDate),NULL,0,bces_rulearray+BCESFieldIndexQuestionDate);	/* �������� */
		AddField((void*)QuestionTime,sizeof(QuestionTime),NULL,0,bces_rulearray+BCESFieldIndexQuestionTime);	/* ����ʱ�� */
		AddField((void*)AnswerContent,sizeof(AnswerContent),NULL,0,bces_rulearray+BCESFieldIndexAnswerContent);	/* �ش����� */
		AddField((void*)AnswerDate,sizeof(AnswerDate),NULL,0,bces_rulearray+BCESFieldIndexAnswerDate);	/* �ش����� */
		AddField((void*)AnswerTime,sizeof(AnswerTime),NULL,0,bces_rulearray+BCESFieldIndexAnswerTime);	/* �ش�ʱ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotAdviserQuesQuery),0x00,sizeof(CBCESFieldsQuotAdviserQuesQuery)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotAdviserQuesQuery));
	}

	BML_FIELD_INFO m_fieldarray_QuotAdviserQuesQuery[9];

	// Field
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
class CBCESFieldsQuotAdviserQuesHisQueryReq:public CBMLFields
{
public:
	CBCESFieldsQuotAdviserQuesHisQueryReq()
	{
		m_fieldarray=m_fieldarray_QuotAdviserQuesHisQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesHisQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotAdviserQuesHisQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsQuotAdviserQuesHisQueryReq(const CBCESFieldsQuotAdviserQuesHisQueryReq& QuotAdviserQuesHisQueryReq){
		m_fieldarray=m_fieldarray_QuotAdviserQuesHisQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesHisQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesHisQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesHisQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
	}
	CBCESFieldsQuotAdviserQuesHisQueryReq& operator=(const CBCESFieldsQuotAdviserQuesHisQueryReq& QuotAdviserQuesHisQueryReq){
		m_fieldarray=m_fieldarray_QuotAdviserQuesHisQueryReq;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesHisQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesHisQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesHisQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)DateFrom,sizeof(DateFrom),NULL,0,bces_rulearray+BCESFieldIndexDateFrom);	/* ��ʼ���� */
		AddField((void*)DateTo,sizeof(DateTo),NULL,0,bces_rulearray+BCESFieldIndexDateTo);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotAdviserQuesHisQueryReq),0x00,sizeof(CBCESFieldsQuotAdviserQuesHisQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotAdviserQuesHisQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_QuotAdviserQuesHisQueryReq[3];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypeDate DateFrom;	/* ��ʼ���� */
	BCESFieldTypeDate DateTo;	/* �������� */
};

/* �������������ʷ��ѯӦ�� */
class CBCESFieldsQuotAdviserQuesHis:public CBMLFields
{
public:
	CBCESFieldsQuotAdviserQuesHis()
	{
		m_fieldarray=m_fieldarray_QuotAdviserQuesHis;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesHis)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsQuotAdviserQuesHis)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)QuestionContent,sizeof(QuestionContent),NULL,0,bces_rulearray+BCESFieldIndexQuestionContent);	/* �������� */
		AddField((void*)QuestionDate,sizeof(QuestionDate),NULL,0,bces_rulearray+BCESFieldIndexQuestionDate);	/* �������� */
		AddField((void*)QuestionTime,sizeof(QuestionTime),NULL,0,bces_rulearray+BCESFieldIndexQuestionTime);	/* ����ʱ�� */
		AddField((void*)AnswerContent,sizeof(AnswerContent),NULL,0,bces_rulearray+BCESFieldIndexAnswerContent);	/* �ش����� */
		AddField((void*)AnswerDate,sizeof(AnswerDate),NULL,0,bces_rulearray+BCESFieldIndexAnswerDate);	/* �ش����� */
		AddField((void*)AnswerTime,sizeof(AnswerTime),NULL,0,bces_rulearray+BCESFieldIndexAnswerTime);	/* �ش�ʱ�� */
	}
	CBCESFieldsQuotAdviserQuesHis(const CBCESFieldsQuotAdviserQuesHis& QuotAdviserQuesHis){
		m_fieldarray=m_fieldarray_QuotAdviserQuesHis;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesHis)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesHis+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesHis)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)QuestionContent,sizeof(QuestionContent),NULL,0,bces_rulearray+BCESFieldIndexQuestionContent);	/* �������� */
		AddField((void*)QuestionDate,sizeof(QuestionDate),NULL,0,bces_rulearray+BCESFieldIndexQuestionDate);	/* �������� */
		AddField((void*)QuestionTime,sizeof(QuestionTime),NULL,0,bces_rulearray+BCESFieldIndexQuestionTime);	/* ����ʱ�� */
		AddField((void*)AnswerContent,sizeof(AnswerContent),NULL,0,bces_rulearray+BCESFieldIndexAnswerContent);	/* �ش����� */
		AddField((void*)AnswerDate,sizeof(AnswerDate),NULL,0,bces_rulearray+BCESFieldIndexAnswerDate);	/* �ش����� */
		AddField((void*)AnswerTime,sizeof(AnswerTime),NULL,0,bces_rulearray+BCESFieldIndexAnswerTime);	/* �ش�ʱ�� */
	}
	CBCESFieldsQuotAdviserQuesHis& operator=(const CBCESFieldsQuotAdviserQuesHis& QuotAdviserQuesHis){
		m_fieldarray=m_fieldarray_QuotAdviserQuesHis;
		m_fieldsize=sizeof(m_fieldarray_QuotAdviserQuesHis)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&QuotAdviserQuesHis+sizeof(CBMLFields),sizeof(CBCESFieldsQuotAdviserQuesHis)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)QuestionID,sizeof(QuestionID),NULL,0,bces_rulearray+BCESFieldIndexQuestionID);	/* ���ʱ�� */
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)AdviserID,sizeof(AdviserID),NULL,0,bces_rulearray+BCESFieldIndexAdviserID);	/* ���ʺ� */
		AddField((void*)QuestionContent,sizeof(QuestionContent),NULL,0,bces_rulearray+BCESFieldIndexQuestionContent);	/* �������� */
		AddField((void*)QuestionDate,sizeof(QuestionDate),NULL,0,bces_rulearray+BCESFieldIndexQuestionDate);	/* �������� */
		AddField((void*)QuestionTime,sizeof(QuestionTime),NULL,0,bces_rulearray+BCESFieldIndexQuestionTime);	/* ����ʱ�� */
		AddField((void*)AnswerContent,sizeof(AnswerContent),NULL,0,bces_rulearray+BCESFieldIndexAnswerContent);	/* �ش����� */
		AddField((void*)AnswerDate,sizeof(AnswerDate),NULL,0,bces_rulearray+BCESFieldIndexAnswerDate);	/* �ش����� */
		AddField((void*)AnswerTime,sizeof(AnswerTime),NULL,0,bces_rulearray+BCESFieldIndexAnswerTime);	/* �ش�ʱ�� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_QuotAdviserQuesHis),0x00,sizeof(CBCESFieldsQuotAdviserQuesHis)-sizeof(CBMLFields)-sizeof(m_fieldarray_QuotAdviserQuesHis));
	}

	BML_FIELD_INFO m_fieldarray_QuotAdviserQuesHis[9];

	// Field
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
class CBCESFieldsInvestor:public CBMLFields
{
public:
	CBCESFieldsInvestor()
	{
		m_fieldarray=m_fieldarray_Investor;
		m_fieldsize=sizeof(m_fieldarray_Investor)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsInvestor)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorPassword,sizeof(InvestorPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorPassword);	/* �տ�� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)&InvestorFlag,sizeof(InvestorFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorFlag);	/* Ͷ���߱�־ */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
	}
	CBCESFieldsInvestor(const CBCESFieldsInvestor& Investor){
		m_fieldarray=m_fieldarray_Investor;
		m_fieldsize=sizeof(m_fieldarray_Investor)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Investor+sizeof(CBMLFields),sizeof(CBCESFieldsInvestor)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorPassword,sizeof(InvestorPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorPassword);	/* �տ�� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)&InvestorFlag,sizeof(InvestorFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorFlag);	/* Ͷ���߱�־ */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
	}
	CBCESFieldsInvestor& operator=(const CBCESFieldsInvestor& Investor){
		m_fieldarray=m_fieldarray_Investor;
		m_fieldsize=sizeof(m_fieldarray_Investor)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&Investor+sizeof(CBMLFields),sizeof(CBCESFieldsInvestor)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InvestorID,sizeof(InvestorID),NULL,0,bces_rulearray+BCESFieldIndexInvestorID);	/* Ͷ���ߺ� */
		AddField((void*)InvestorPassword,sizeof(InvestorPassword),NULL,0,bces_rulearray+BCESFieldIndexInvestorPassword);	/* �տ�� */
		AddField((void*)InvestorName,sizeof(InvestorName),NULL,0,bces_rulearray+BCESFieldIndexInvestorName);	/* Ͷ�������� */
		AddField((void*)&InvestorFlag,sizeof(InvestorFlag),NULL,0,bces_rulearray+BCESFieldIndexInvestorFlag);	/* Ͷ���߱�־ */
		AddField((void*)AccountID,sizeof(AccountID),NULL,0,bces_rulearray+BCESFieldIndexAccountID);	/* �����˺� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_Investor),0x00,sizeof(CBCESFieldsInvestor)-sizeof(CBMLFields)-sizeof(m_fieldarray_Investor));
	}

	BML_FIELD_INFO m_fieldarray_Investor[5];

	// Field
	BCESFieldTypeInvestorID InvestorID;	/* Ͷ���ߺ� */
	BCESFieldTypePassword InvestorPassword;	/* �տ�� */
	BCESFieldTypeName InvestorName;	/* Ͷ�������� */
	BCESFieldTypeFlag InvestorFlag;	/* Ͷ���߱�־ */
	BCESFieldTypeAccountID AccountID;	/* �����˺� */
};

/* K�߲�ѯ���� */
class CBCESFieldsKLineQueryReq:public CBMLFields
{
public:
	CBCESFieldsKLineQueryReq()
	{
		m_fieldarray=m_fieldarray_KLineQueryReq;
		m_fieldsize=sizeof(m_fieldarray_KLineQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsKLineQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&KLineType,sizeof(KLineType),NULL,0,bces_rulearray+BCESFieldIndexKLineType);	/* K������ */
		AddField((void*)&BarFrom,sizeof(BarFrom),NULL,0,bces_rulearray+BCESFieldIndexBarFrom);	/* ��ʼBar */
		AddField((void*)&BarCount,sizeof(BarCount),NULL,0,bces_rulearray+BCESFieldIndexBarCount);	/* Bar���� */
	}
	CBCESFieldsKLineQueryReq(const CBCESFieldsKLineQueryReq& KLineQueryReq){
		m_fieldarray=m_fieldarray_KLineQueryReq;
		m_fieldsize=sizeof(m_fieldarray_KLineQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&KLineQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsKLineQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&KLineType,sizeof(KLineType),NULL,0,bces_rulearray+BCESFieldIndexKLineType);	/* K������ */
		AddField((void*)&BarFrom,sizeof(BarFrom),NULL,0,bces_rulearray+BCESFieldIndexBarFrom);	/* ��ʼBar */
		AddField((void*)&BarCount,sizeof(BarCount),NULL,0,bces_rulearray+BCESFieldIndexBarCount);	/* Bar���� */
	}
	CBCESFieldsKLineQueryReq& operator=(const CBCESFieldsKLineQueryReq& KLineQueryReq){
		m_fieldarray=m_fieldarray_KLineQueryReq;
		m_fieldsize=sizeof(m_fieldarray_KLineQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&KLineQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsKLineQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&KLineType,sizeof(KLineType),NULL,0,bces_rulearray+BCESFieldIndexKLineType);	/* K������ */
		AddField((void*)&BarFrom,sizeof(BarFrom),NULL,0,bces_rulearray+BCESFieldIndexBarFrom);	/* ��ʼBar */
		AddField((void*)&BarCount,sizeof(BarCount),NULL,0,bces_rulearray+BCESFieldIndexBarCount);	/* Bar���� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_KLineQueryReq),0x00,sizeof(CBCESFieldsKLineQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_KLineQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_KLineQueryReq[7];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTimeFrom;	/* ��ʼ����ʱ�� */
	BCESFieldTypeDateTime DateTimeTo;	/* ��������ʱ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
	BCESFieldTypeFlag KLineType;	/* K������ */
	BCESFieldTypeRequestID BarFrom;	/* ��ʼBar */
	BCESFieldTypeRequestID BarCount;	/* Bar���� */
};

/* K�� */
class CBCESFieldsKLineData:public CBMLFields
{
public:
	CBCESFieldsKLineData()
	{
		m_fieldarray=m_fieldarray_KLineData;
		m_fieldsize=sizeof(m_fieldarray_KLineData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsKLineData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&KLineType,sizeof(KLineType),NULL,0,bces_rulearray+BCESFieldIndexKLineType);	/* K������ */
	}
	CBCESFieldsKLineData(const CBCESFieldsKLineData& KLineData){
		m_fieldarray=m_fieldarray_KLineData;
		m_fieldsize=sizeof(m_fieldarray_KLineData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&KLineData+sizeof(CBMLFields),sizeof(CBCESFieldsKLineData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&KLineType,sizeof(KLineType),NULL,0,bces_rulearray+BCESFieldIndexKLineType);	/* K������ */
	}
	CBCESFieldsKLineData& operator=(const CBCESFieldsKLineData& KLineData){
		m_fieldarray=m_fieldarray_KLineData;
		m_fieldsize=sizeof(m_fieldarray_KLineData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&KLineData+sizeof(CBMLFields),sizeof(CBCESFieldsKLineData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&OpenPrice,sizeof(OpenPrice),NULL,0,bces_rulearray+BCESFieldIndexOpenPrice);	/* ���̼� */
		AddField((void*)&HighestPrice,sizeof(HighestPrice),NULL,0,bces_rulearray+BCESFieldIndexHighestPrice);	/* ��߼� */
		AddField((void*)&LowestPrice,sizeof(LowestPrice),NULL,0,bces_rulearray+BCESFieldIndexLowestPrice);	/* ��ͼ� */
		AddField((void*)&ClosePrice,sizeof(ClosePrice),NULL,0,bces_rulearray+BCESFieldIndexClosePrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&KLineType,sizeof(KLineType),NULL,0,bces_rulearray+BCESFieldIndexKLineType);	/* K������ */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_KLineData),0x00,sizeof(CBCESFieldsKLineData)-sizeof(CBMLFields)-sizeof(m_fieldarray_KLineData));
	}

	BML_FIELD_INFO m_fieldarray_KLineData[11];

	// Field
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
class CBCESFieldsTickLineQueryReq:public CBMLFields
{
public:
	CBCESFieldsTickLineQueryReq()
	{
		m_fieldarray=m_fieldarray_TickLineQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TickLineQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTickLineQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsTickLineQueryReq(const CBCESFieldsTickLineQueryReq& TickLineQueryReq){
		m_fieldarray=m_fieldarray_TickLineQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TickLineQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TickLineQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTickLineQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
	}
	CBCESFieldsTickLineQueryReq& operator=(const CBCESFieldsTickLineQueryReq& TickLineQueryReq){
		m_fieldarray=m_fieldarray_TickLineQueryReq;
		m_fieldsize=sizeof(m_fieldarray_TickLineQueryReq)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TickLineQueryReq+sizeof(CBMLFields),sizeof(CBCESFieldsTickLineQueryReq)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTimeFrom,sizeof(DateTimeFrom),NULL,0,bces_rulearray+BCESFieldIndexDateTimeFrom);	/* ��ʼ����ʱ�� */
		AddField((void*)DateTimeTo,sizeof(DateTimeTo),NULL,0,bces_rulearray+BCESFieldIndexDateTimeTo);	/* ��������ʱ�� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TickLineQueryReq),0x00,sizeof(CBCESFieldsTickLineQueryReq)-sizeof(CBMLFields)-sizeof(m_fieldarray_TickLineQueryReq));
	}

	BML_FIELD_INFO m_fieldarray_TickLineQueryReq[4];

	// Field
	BCESFieldTypeInstrumentID InstrumentID;	/* ��Լ�� */
	BCESFieldTypeDateTime DateTimeFrom;	/* ��ʼ����ʱ�� */
	BCESFieldTypeDateTime DateTimeTo;	/* ��������ʱ�� */
	BCESFieldTypeExchangeID ExchangeID;	/* �������� */
};

/* Tick�� */
class CBCESFieldsTickLineData:public CBMLFields
{
public:
	CBCESFieldsTickLineData()
	{
		m_fieldarray=m_fieldarray_TickLineData;
		m_fieldsize=sizeof(m_fieldarray_TickLineData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memset((char*)this+sizeof(CBMLFields),0x00,sizeof(CBCESFieldsTickLineData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
	}
	CBCESFieldsTickLineData(const CBCESFieldsTickLineData& TickLineData){
		m_fieldarray=m_fieldarray_TickLineData;
		m_fieldsize=sizeof(m_fieldarray_TickLineData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TickLineData+sizeof(CBMLFields),sizeof(CBCESFieldsTickLineData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
	}
	CBCESFieldsTickLineData& operator=(const CBCESFieldsTickLineData& TickLineData){
		m_fieldarray=m_fieldarray_TickLineData;
		m_fieldsize=sizeof(m_fieldarray_TickLineData)/sizeof(BML_FIELD_INFO);
		m_fieldcount=0;
		memcpy((char*)this+sizeof(CBMLFields),(char*)&TickLineData+sizeof(CBMLFields),sizeof(CBCESFieldsTickLineData)-sizeof(CBMLFields));

		// Field Info
		AddField((void*)InstrumentID,sizeof(InstrumentID),NULL,0,bces_rulearray+BCESFieldIndexInstrumentID);	/* ��Լ�� */
		AddField((void*)DateTime,sizeof(DateTime),NULL,0,bces_rulearray+BCESFieldIndexDateTime);	/* ����ʱ�� */
		AddField((void*)&Price,sizeof(Price),NULL,0,bces_rulearray+BCESFieldIndexPrice);	/* ���̼� */
		AddField((void*)&QtyTotal,sizeof(QtyTotal),NULL,0,bces_rulearray+BCESFieldIndexQtyTotal);	/* �ɽ��� */
		AddField((void*)&OI,sizeof(OI),NULL,0,bces_rulearray+BCESFieldIndexOI);	/* ������ */
		AddField((void*)&Amount,sizeof(Amount),NULL,0,bces_rulearray+BCESFieldIndexAmount);	/* �ɽ��� */
		AddField((void*)ExchangeID,sizeof(ExchangeID),NULL,0,bces_rulearray+BCESFieldIndexExchangeID);	/* �������� */
		AddField((void*)&BidPrice,sizeof(BidPrice),NULL,0,bces_rulearray+BCESFieldIndexBidPrice);	/* ����� */
		AddField((void*)&BidQty,sizeof(BidQty),NULL,0,bces_rulearray+BCESFieldIndexBidQty);	/* ������ */
		AddField((void*)&AskPrice,sizeof(AskPrice),NULL,0,bces_rulearray+BCESFieldIndexAskPrice);	/* ������ */
		AddField((void*)&AskQty,sizeof(AskQty),NULL,0,bces_rulearray+BCESFieldIndexAskQty);	/* ������ */
		AddField((void*)&HighLimit,sizeof(HighLimit),NULL,0,bces_rulearray+BCESFieldIndexHighLimit);	/* ��ͣ��� */
		AddField((void*)&LowLimit,sizeof(LowLimit),NULL,0,bces_rulearray+BCESFieldIndexLowLimit);	/* ��ͣ��� */
		return *this;
	}
	void Clean(){
		memset((char*)this+sizeof(CBMLFields)+sizeof(m_fieldarray_TickLineData),0x00,sizeof(CBCESFieldsTickLineData)-sizeof(CBMLFields)-sizeof(m_fieldarray_TickLineData));
	}

	BML_FIELD_INFO m_fieldarray_TickLineData[13];

	// Field
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


#endif /* __BCES_FIELD_DEFINE_H__ */
