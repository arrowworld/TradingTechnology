#ifndef __BCES_FIELDTYPE_DEFINE_H__
#define __BCES_FIELDTYPE_DEFINE_H__

#include "OSTypeDefine.h"

/* TypeDefine */
typedef CHAR            BCESFieldTypeTableName[51];                /*����*/
typedef CHAR            BCESFieldTypeTableOperation;           /*�����*/
typedef USHORT          BCESFieldTypeServiceNo;                /*ָ�����*/
typedef UINT            BCESFieldTypeRequestID;                /*������*/
typedef UINT            BCESFieldTypeEndFlag;                  /*�������*/
typedef UINT            BCESFieldTypeFlowID;                   /*�����*/
typedef UINT            BCESFieldTypePkgNo;                    /*�������*/
typedef CHAR            BCESFieldTypeInvestorID[16];               /*Ͷ���ߺ�*/
typedef CHAR            BCESFieldTypePassword[21];                 /*����*/
typedef CHAR            BCESFieldTypeOrderID[31];                  /*������*/
typedef CHAR            BCESFieldTypeMatchID[31];                  /*�ɽ���*/
typedef CHAR            BCESFieldTypePosiID[31];                   /*�ֲֺ�*/
typedef CHAR            BCESFieldTypeInstrumentID[16];             /*��Լ��*/
typedef DOUBLE          BCESFieldTypePrice;                    /*�۸�*/
typedef UINT            BCESFieldTypeQty;                      /*����*/
typedef USHORT          BCESFieldTypeRspNo;                    /*Ӧ�����*/
typedef CHAR            BCESFieldTypeRspDesc[257];                  /*Ӧ������*/
typedef CHAR            BCESFieldTypeDate[11];                     /*����*/
typedef CHAR            BCESFieldTypeTime[9];                     /*ʱ��*/
typedef CHAR            BCESFieldTypeDescription[65];              /*����*/
typedef CHAR            BCESFieldTypeFlag;                     /*��־*/
typedef ULONG           BCESFieldTypeQtyTotal;                 /*����*/
typedef CHAR            BCESFieldTypeVarietyID[11];                /*Ʒ�ִ���*/
typedef DOUBLE          BCESFieldTypeAmount;                   /*���*/
typedef DOUBLE          BCESFieldTypeRate;                     /*����*/
typedef CHAR            BCESFieldTypeInstrumentName[31];           /*��Լ����*/
typedef CHAR            BCESFieldTypeMarketStatusDesc[31];         /*�г�״̬����*/
typedef CHAR            BCESFieldTypeOrderStatusDesc[31];          /*�г�״̬����*/
typedef CHAR            BCESFieldTypeDateTime[20];                 /*����ʱ��*/
typedef UINT            BCESFieldTypePoints;                   /*���*/
typedef CHAR            BCESFieldTypeTitle[101];                    /*����*/
typedef CHAR            BCESFieldTypeBulletinID[16];               /*������*/
typedef CHAR            BCESFieldTypeNoticeID[16];                 /*֪ͨ���*/
typedef CHAR            BCESFieldTypeContent[501];                  /*����*/
typedef CHAR            BCESFieldTypeUserID[16];                   /*�û���*/
typedef CHAR            BCESFieldTypeURL[1025];                      /*��ַ*/
typedef CHAR            BCESFieldTypeFundIOStatusDesc[257];         /*�����״̬����*/
typedef CHAR            BCESFieldTypeFundIOSeqno[31];              /*�������ˮ��*/
typedef CHAR            BCESFieldTypeBankID[11];                   /*���д���*/
typedef CHAR            BCESFieldTypeBankAccountID[41];            /*�����˺�*/
typedef CHAR            BCESFieldTypeBankAccountName[101];          /*���л���*/
typedef CHAR            BCESFieldTypeBankNameAccountID[141];        /*���л������˺�*/
typedef CHAR            BCESFieldTypeReportData[1001];               /*��������*/
typedef CHAR            BCESFieldTypeName[51];                     /*����*/
typedef UINT            BCESFieldTypeRankingNum;               /*����*/
typedef CHAR            BCESFieldTypeAddress[101];                  /*��ַ*/
typedef CHAR            BCESFieldTypeIP[101];                       /*IP��ַ*/
typedef CHAR            BCESFieldTypeGoodsName[31];                /*Ʒ�ִ���*/
typedef UINT            BCESFieldTypeVersionNo;                /*�汾��*/
typedef CHAR            BCESFieldTypeDeliveryID[31];               /*���ս�����*/
typedef CHAR            BCESFieldTypeTaxNo[31];                    /*˰��ǼǺ�*/
typedef CHAR            BCESFieldTypePhoneNo[21];                  /*�绰����*/
typedef CHAR            BCESFieldTypeCredentialNo[51];             /*֤����*/
typedef CHAR            BCESFieldTypePostCode[21];                 /*�ʱ�*/
typedef CHAR            BCESFieldTypeEmail[51];                    /*��������*/
typedef CHAR            BCESFieldTypeAdviserID[16];                /*���ʺ�*/
typedef CHAR            BCESFieldTypeQuesAnswContent[1025];          /*��������/�ش�����*/
typedef CHAR            BCESFieldTypeQuestionID[31];               /*���ʱ��*/
typedef CHAR            BCESFieldTypePlateName[31];                /*���*/
typedef CHAR            BCESFieldTypeExchangeID[17];               /*��������*/
typedef ULONG           BCESFieldTypeSessionID;                /*�Ự���*/
typedef CHAR            BCESFieldTypeOrderRef[31];                 /*��������*/
typedef CHAR            BCESFieldTypePaySeqno[31];                 /*֧����ˮ��*/
typedef CHAR            BCESFieldTypeAccountID[31];                /*�ʽ��˺�*/
typedef CHAR            BCESFieldTypeOrderSysID[31];               /*������������*/
typedef UINT            BCESFieldTypeCTPFrontID;               /*CTPǰ�ñ��*/
typedef UINT            BCESFieldTypeCTPSessionID;             /*CTP�Ự���*/
typedef CHAR            BCESFieldTypeCTPOrderRef[31];              /*CTP��������*/
typedef UINT            BCESFieldTypeAppNo;                    /*Ӧ�ñ��*/

/* ConstDefine */
/* ����� */
#define BCESConstFlowIDOnline                          0                    /*������*/
#define BCESConstCommentFlowIDOnline                          "������"
#define BCESConstFlowIDPrivate                          1                    /*˽����*/
#define BCESConstCommentFlowIDPrivate                          "˽����"
#define BCESConstFlowIDPublic                          2                    /*������*/
#define BCESConstCommentFlowIDPublic                          "������"

/* ������� */
#define BCESConstEndFlagNotEOF                         1                    /*δ����*/
#define BCESConstCommentEndFlagNotEOF                         "δ����"
#define BCESConstEndFlagEOF                         0                    /*�ѽ���*/
#define BCESConstCommentEndFlagEOF                         "�ѽ���"

/* ����� */
#define BCESConstTableOperationInsert                  1                    /*����*/
#define BCESConstCommentTableOperationInsert                  "����"
#define BCESConstTableOperationUpdate                  2                    /*����*/
#define BCESConstCommentTableOperationUpdate                  "����"
#define BCESConstTableOperationDelete                  3                    /*ɾ��*/
#define BCESConstCommentTableOperationDelete                  "ɾ��"

/* Ӧ����� */
#define BCESConstRspNoSucceed                           0                    /*�ɹ�*/
#define BCESConstCommentRspNoSucceed                           "�ɹ�"
#define BCESConstRspNoServiceNotSupported                           1000                 /*���ṩ�˷���*/
#define BCESConstCommentRspNoServiceNotSupported                           "���ṩ�˷���"
#define BCESConstRspNoNetworkProblem                           1001                 /*ϵͳͨѶ���ϣ����Ժ�����*/
#define BCESConstCommentRspNoNetworkProblem                           "ϵͳͨѶ���ϣ����Ժ�����"
#define BCESConstRspNoNotLogined                           1002                 /*δ��¼*/
#define BCESConstCommentRspNoNotLogined                           "δ��¼"
#define BCESConstRspNoDupLogin                           1003                 /*�ظ���¼*/
#define BCESConstCommentRspNoDupLogin                           "�ظ���¼"
#define BCESConstRspNoPasswordWrong                           1004                 /*�������*/
#define BCESConstCommentRspNoPasswordWrong                           "�������"
#define BCESConstRspNoUserPasswordWrong                           1005                 /*�û������������*/
#define BCESConstCommentRspNoUserPasswordWrong                           "�û������������"
#define BCESConstRspNoInstrumentNotExists                           1006                 /*��Լ������*/
#define BCESConstCommentRspNoInstrumentNotExists                           "��Լ������"
#define BCESConstRspNoInvalidOrderParam                           1007                 /*���������д�*/
#define BCESConstCommentRspNoInvalidOrderParam                           "���������д�"
#define BCESConstRspNoPositionNotExists                           1008                 /*�ֲֲ�����*/
#define BCESConstCommentRspNoPositionNotExists                           "�ֲֲ�����"
#define BCESConstRspNoPositionQtyNotEnough                           1009                 /*�ֲֲ���*/
#define BCESConstCommentRspNoPositionQtyNotEnough                           "�ֲֲ���"
#define BCESConstRspNoOrderNotExists                           1010                 /*����������*/
#define BCESConstCommentRspNoOrderNotExists                           "����������"
#define BCESConstRspNoOrderFilledOrCanceled                           1011                 /*�����ѳɽ����ѳ���*/
#define BCESConstCommentRspNoOrderFilledOrCanceled                           "�����ѳɽ����ѳ���"
#define BCESConstRspNoPositionClosed                           1012                 /*��ȫ��ƽ��*/
#define BCESConstCommentRspNoPositionClosed                           "��ȫ��ƽ��"
#define BCESConstRspNoInvalidProfitLossStopParam                           1013                 /*ֹӮֹ���������*/
#define BCESConstCommentRspNoInvalidProfitLossStopParam                           "ֹӮֹ���������"
#define BCESConstRspNoFundNotEnough                           1014                 /*�ʽ���*/
#define BCESConstCommentRspNoFundNotEnough                           "�ʽ���"
#define BCESConstRspNoMarketNotTrading                           1015                 /*��ǰ״̬��������*/
#define BCESConstCommentRspNoMarketNotTrading                           "��ǰ״̬��������"
#define BCESConstRspNoNoRights                           1016                 /*δ��ͨ��Ʒ����Ȩ��*/
#define BCESConstCommentRspNoNoRights                           "δ��ͨ��Ʒ����Ȩ��"

/* ������־ */
#define BCESConstBSFlagBuy                          'B'                  /*��*/
#define BCESConstCommentBSFlagBuy                          "��"
#define BCESConstBSFlagSell                          'S'                  /*��*/
#define BCESConstCommentBSFlagSell                          "��"
#define BCESConstBSFlagExecute                          'X'                  /*��Ȩ*/
#define BCESConstCommentBSFlagExecute                          "��Ȩ"

/* ��ƽ��־ */
#define BCESConstOCFlagOpen                          'O'                  /*��*/
#define BCESConstCommentOCFlagOpen                          "��"
#define BCESConstOCFlagClose                          'C'                  /*ƽ*/
#define BCESConstCommentOCFlagClose                          "ƽ"
#define BCESConstOCFlagCloseToday                          'T'                  /*ƽ��*/
#define BCESConstCommentOCFlagCloseToday                          "ƽ��"
#define BCESConstOCFlagForceClose                          'F'                  /*ǿƽ*/
#define BCESConstCommentOCFlagForceClose                          "ǿƽ"

/* �۸����� */
#define BCESConstPriceTypeNormal                       'N'                  /*�޼�*/
#define BCESConstCommentPriceTypeNormal                       "�޼�"
#define BCESConstPriceTypeMarket                       'M'                  /*�м�*/
#define BCESConstCommentPriceTypeMarket                       "�м�"
#define BCESConstPriceTypeStop                       'S'                  /*Stop*/
#define BCESConstCommentPriceTypeStop                       "Stop"
#define BCESConstPriceTypeLimit                       'L'                  /*Limit*/
#define BCESConstCommentPriceTypeLimit                       "Limit"

/* ����״̬ */
#define BCESConstOrderStatusInserting                     'A'                  /*�걨��*/
#define BCESConstCommentOrderStatusInserting                     "�걨��"
#define BCESConstOrderStatusInserted                     'I'                  /*�ѱ���*/
#define BCESConstCommentOrderStatusInserted                     "�ѱ���"
#define BCESConstOrderStatusFilled                     'F'                  /*ȫ���ɽ�*/
#define BCESConstCommentOrderStatusFilled                     "ȫ���ɽ�"
#define BCESConstOrderStatusPartialFilled                     'P'                  /*���ֳɽ�*/
#define BCESConstCommentOrderStatusPartialFilled                     "���ֳɽ�"
#define BCESConstOrderStatusCanceled                     'C'                  /*�ѳ���*/
#define BCESConstCommentOrderStatusCanceled                     "�ѳ���"
#define BCESConstOrderStatusWaiting                     'W'                  /*δ����*/
#define BCESConstCommentOrderStatusWaiting                     "δ����"

/* ��Լ���� */
#define BCESConstInstrumentTypeSpot                  'S'                  /*�ֻ�*/
#define BCESConstCommentInstrumentTypeSpot                  "�ֻ�"
#define BCESConstInstrumentTypeFutures                  'F'                  /*�ڻ�*/
#define BCESConstCommentInstrumentTypeFutures                  "�ڻ�"
#define BCESConstInstrumentTypeOptions                  'O'                  /*��Ȩ*/
#define BCESConstCommentInstrumentTypeOptions                  "��Ȩ"
#define BCESConstInstrumentTypeEquity                  'E'                  /*��Ʊ*/
#define BCESConstCommentInstrumentTypeEquity                  "��Ʊ"

/* �г�״̬ */
#define BCESConstMarketStatusNotOpen                    '0'                  /*δ����*/
#define BCESConstCommentMarketStatusNotOpen                    "δ����"
#define BCESConstMarketStatusOpen                    '1'                  /*����*/
#define BCESConstCommentMarketStatusOpen                    "����"
#define BCESConstMarketStatusBegin                    '2'                  /*����*/
#define BCESConstCommentMarketStatusBegin                    "����"
#define BCESConstMarketStatusEnd                    '3'                  /*����*/
#define BCESConstCommentMarketStatusEnd                    "����"
#define BCESConstMarketStatusClose                    '4'                  /*����*/
#define BCESConstCommentMarketStatusClose                    "����"
#define BCESConstMarketStatusSectionEnd                    '5'                  /*������*/
#define BCESConstCommentMarketStatusSectionEnd                    "������"
#define BCESConstMarketStatusAuctionApply                    '6'                  /*���Ͼ����걨*/
#define BCESConstCommentMarketStatusAuctionApply                    "���Ͼ����걨"
#define BCESConstMarketStatusAuctionMatch                    '7'                  /*���Ͼ��۴��*/
#define BCESConstCommentMarketStatusAuctionMatch                    "���Ͼ��۴��"

/* ��Լ״̬ */
#define BCESConstInstrumentStatusTrading                'T'                  /*������*/
#define BCESConstCommentInstrumentStatusTrading                "������"
#define BCESConstInstrumentStatusSuspended                'S'                  /*ͣ��*/
#define BCESConstCommentInstrumentStatusSuspended                "ͣ��"
#define BCESConstInstrumentStatusClosed                'C'                  /*����*/
#define BCESConstCommentInstrumentStatusClosed                "����"

/* ���۵�λ */
#define BCESConstPriceUnitGram                       '0'                  /*��*/
#define BCESConstCommentPriceUnitGram                       "��"
#define BCESConstPriceUnitKilogram                       '1'                  /*ǧ��*/
#define BCESConstCommentPriceUnitKilogram                       "ǧ��"
#define BCESConstPriceUnitTon                       '2'                  /*��*/
#define BCESConstCommentPriceUnitTon                       "��"
#define BCESConstPriceUnitBucket                       '3'                  /*Ͱ*/
#define BCESConstCommentPriceUnitBucket                       "Ͱ"
#define BCESConstPriceUnitTon2                       '4'                  /*2��*/
#define BCESConstCommentPriceUnitTon2                       "2��"

/* ���������� */
#define BCESConstFeeTypeAmount                         'A'                  /*�̶����*/
#define BCESConstCommentFeeTypeAmount                         "�̶����"
#define BCESConstFeeTypeRatio                         'R'                  /*������*/
#define BCESConstCommentFeeTypeRatio                         "������"

/* ������� */
#define BCESConstFundIODirectionIn                 '0'                  /*���*/
#define BCESConstCommentFundIODirectionIn                 "���"
#define BCESConstFundIODirectionOut                 '1'                  /*����*/
#define BCESConstCommentFundIODirectionOut                 "����"

/* �����״̬ */
#define BCESConstFundIOStatusInserted                    '0'                  /*������*/
#define BCESConstCommentFundIOStatusInserted                    "������"
#define BCESConstFundIOStatusComplete                    '1'                  /*�ɹ�*/
#define BCESConstCommentFundIOStatusComplete                    "�ɹ�"
#define BCESConstFundIOStatusCanceled                    '2'                  /*ʧ��*/
#define BCESConstCommentFundIOStatusCanceled                    "ʧ��"
#define BCESConstFundIOStatusVerifing                    '3'                  /*�����*/
#define BCESConstCommentFundIOStatusVerifing                    "�����"

/* ֧������ */
#define BCESConstPayDirectionIn                    '0'                  /*�տ�*/
#define BCESConstCommentPayDirectionIn                    "�տ�"
#define BCESConstPayDirectionOut                    '1'                  /*����*/
#define BCESConstCommentPayDirectionOut                    "����"

/* �����ʽ */
#define BCESConstFundIOMethodAuto                    '0'                  /*�Զ�*/
#define BCESConstCommentFundIOMethodAuto                    "�Զ�"
#define BCESConstFundIOMethodManual                    '1'                  /*�ֹ�*/
#define BCESConstCommentFundIOMethodManual                    "�ֹ�"

/* ������Ϊ */
#define BCESConstTradeActionPoints                     '0'                  /*���������ϳɽ�����*/
#define BCESConstCommentTradeActionPoints                     "���������ϳɽ�����"
#define BCESConstTradeActionPointsTxt                     '4'                  /*�������������Ѳ���*/
#define BCESConstCommentTradeActionPointsTxt                     "�������������Ѳ���"
#define BCESConstTradeActionWaitSeconds                     '1'                  /*������ϳɽ�����*/
#define BCESConstCommentTradeActionWaitSeconds                     "������ϳɽ�����"
#define BCESConstTradeActionWaitSecondsTxt                     '5'                  /*����������Ѳ���*/
#define BCESConstCommentTradeActionWaitSecondsTxt                     "����������Ѳ���"
#define BCESConstTradeActionSilent                     '2'                  /*�������������Ӧ����*/
#define BCESConstCommentTradeActionSilent                     "�������������Ӧ����"
#define BCESConstTradeActionTransfer                     '3'                  /*�Գ�*/
#define BCESConstCommentTradeActionTransfer                     "�Գ�"

/* ���� */
#define BCESConstCurrencyRMB                        '0'                  /*�����*/
#define BCESConstCommentCurrencyRMB                        "�����"
#define BCESConstCurrencyUSD                        '1'                  /*��Ԫ*/
#define BCESConstCommentCurrencyUSD                        "��Ԫ"

/* ��֤�������� */
#define BCESConstMarginRateTypeAmount                  'A'                  /*�̶����*/
#define BCESConstCommentMarginRateTypeAmount                  "�̶����"
#define BCESConstMarginRateTypeRatio                  'R'                  /*������*/
#define BCESConstCommentMarginRateTypeRatio                  "������"

/* ��ҹ������ */
#define BCESConstOverNightFeeTypeAmount                'A'                  /*�̶����*/
#define BCESConstCommentOverNightFeeTypeAmount                "�̶����"
#define BCESConstOverNightFeeTypeRatio                'R'                  /*������*/
#define BCESConstCommentOverNightFeeTypeRatio                "������"

/* �շ����� */
#define BCESConstFeeFlagSingle                         'S'                  /*����*/
#define BCESConstCommentFeeFlagSingle                         "����"
#define BCESConstFeeFlagdouble                         'D'                  /*˫��*/
#define BCESConstCommentFeeFlagdouble                         "˫��"

/* ϵͳģʽ */
#define BCESConstSysModeMarket                         '0'                  /*����*/
#define BCESConstCommentSysModeMarket                         "����"
#define BCESConstSysModeMatch                         '1'                  /*���*/
#define BCESConstCommentSysModeMatch                         "���"
#define BCESConstSysModeMarketMatch                         '2'                  /*���д��*/
#define BCESConstCommentSysModeMarketMatch                         "���д��"

/* �������� */
#define BCESConstConditionTypePrice                   'P'                  /*�ּ�*/
#define BCESConstCommentConditionTypePrice                   "�ּ�"
#define BCESConstConditionTypeBid                   'B'                  /*�����*/
#define BCESConstCommentConditionTypeBid                   "�����"
#define BCESConstConditionTypeAsk                   'A'                  /*������*/
#define BCESConstCommentConditionTypeAsk                   "������"

/* �������� */
#define BCESConstConditionMethodEqual                 '0'                  /*����*/
#define BCESConstCommentConditionMethodEqual                 "����"
#define BCESConstConditionMethodMore                 '1'                  /*����*/
#define BCESConstCommentConditionMethodMore                 "����"
#define BCESConstConditionMethodMoreEqual                 '2'                  /*���ڵ���*/
#define BCESConstCommentConditionMethodMoreEqual                 "���ڵ���"
#define BCESConstConditionMethodLess                 '3'                  /*С��*/
#define BCESConstCommentConditionMethodLess                 "С��"
#define BCESConstConditionMethodLessEqual                 '4'                  /*С�ڵ���*/
#define BCESConstCommentConditionMethodLessEqual                 "С�ڵ���"
#define BCESConstConditionMethodNone                 '5'                  /*��*/
#define BCESConstCommentConditionMethodNone                 "��"

/* ǩԼ״̬ */
#define BCESConstAccountBindStatusProcessing               '0'                  /*������*/
#define BCESConstCommentAccountBindStatusProcessing               "������"
#define BCESConstAccountBindStatusSucceeded               '1'                  /*�ɹ�*/
#define BCESConstCommentAccountBindStatusSucceeded               "�ɹ�"
#define BCESConstAccountBindStatusFailed               '2'                  /*ʧ��*/
#define BCESConstCommentAccountBindStatusFailed               "ʧ��"

/* ��Ʒ��� */
#define BCESConstProductTypeTradeClient                     '0'                  /*���׿ͻ���*/
#define BCESConstCommentProductTypeTradeClient                     "���׿ͻ���"
#define BCESConstProductTypeQuotClient                     '1'                  /*����ͻ���*/
#define BCESConstCommentProductTypeQuotClient                     "����ͻ���"
#define BCESConstProductTypeQuickClient                     '2'                  /*�����µ��ͻ���*/
#define BCESConstCommentProductTypeQuickClient                     "�����µ��ͻ���"
#define BCESConstProductTypeAdminClient                     '3'                  /*����ͻ���*/
#define BCESConstCommentProductTypeAdminClient                     "����ͻ���"
#define BCESConstProductTypeAgentClient                     '4'                  /*�����̿ͻ���*/
#define BCESConstCommentProductTypeAgentClient                     "�����̿ͻ���"
#define BCESConstProductTypeMarketClient                     '5'                  /*�����̲��Թ���*/
#define BCESConstCommentProductTypeMarketClient                     "�����̲��Թ���"
#define BCESConstProductTypeAnonymousClient                     '6'                  /*�����ͻ���*/
#define BCESConstCommentProductTypeAnonymousClient                     "�����ͻ���"
#define BCESConstProductTypeQuotProduct                     '7'                  /*�����Ʒ*/
#define BCESConstCommentProductTypeQuotProduct                     "�����Ʒ"

/* ���ս���״̬ */
#define BCESConstDeliveryStatusApplyed                  '0'                  /*������*/
#define BCESConstCommentDeliveryStatusApplyed                  "������"
#define BCESConstDeliveryStatusVerifed                  '1'                  /*��ȷ��*/
#define BCESConstCommentDeliveryStatusVerifed                  "��ȷ��"
#define BCESConstDeliveryStatusPayed                  '2'                  /*�Ѹ���*/
#define BCESConstCommentDeliveryStatusPayed                  "�Ѹ���"
#define BCESConstDeliveryStatusCompleted                  '3'                  /*�ѳɽ�*/
#define BCESConstCommentDeliveryStatusCompleted                  "�ѳɽ�"

/* ��Ʊ��ʶ */
#define BCESConstInvoiceFlagYES                     '1'                  /*��*/
#define BCESConstCommentInvoiceFlagYES                     "��"
#define BCESConstInvoiceFlagNO                     '0'                  /*��*/
#define BCESConstCommentInvoiceFlagNO                     "��"

/* ��Ʊ���� */
#define BCESConstInvoiceTypeVAT                     '0'                  /*��ֵ˰*/
#define BCESConstCommentInvoiceTypeVAT                     "��ֵ˰"
#define BCESConstInvoiceTypeCommon                     '1'                  /*��ͨ*/
#define BCESConstCommentInvoiceTypeCommon                     "��ͨ"
#define BCESConstInvoiceTypeSpecial                     '2'                  /*ר��*/
#define BCESConstCommentInvoiceTypeSpecial                     "ר��"

/* ֤������ */
#define BCESConstCredentialTypeID                  '0'                  /*���֤*/
#define BCESConstCommentCredentialTypeID                  "���֤"
#define BCESConstCredentialTypePassport                  '1'                  /*����*/
#define BCESConstCommentCredentialTypePassport                  "����"

/* ֧���������� */
#define BCESConstPayServerTypeEcpss                   '0'                  /*�㳱֧��*/
#define BCESConstCommentPayServerTypeEcpss                   "�㳱֧��"
#define BCESConstPayServerTypeAllPayIn                   '1'                  /*ͨ��֧��*/
#define BCESConstCommentPayServerTypeAllPayIn                   "ͨ��֧��"
#define BCESConstPayServerTypeABC                   '2'                  /*ũ��*/
#define BCESConstCommentPayServerTypeABC                   "ũ��"

/* ����/�ش��־ */
#define BCESConstQuesAnswFlagQuestion                    'Q'                  /*����*/
#define BCESConstCommentQuesAnswFlagQuestion                    "����"
#define BCESConstQuesAnswFlagAnswer                    'A'                  /*�ش�*/
#define BCESConstCommentQuesAnswFlagAnswer                    "�ش�"

/* Ͷ���߹��ʱ�־ */
#define BCESConstInvestorAdviserFlagInvestor             'I'                  /*Ͷ����*/
#define BCESConstCommentInvestorAdviserFlagInvestor             "Ͷ����"
#define BCESConstInvestorAdviserFlagAdviser             'A'                  /*����*/
#define BCESConstCommentInvestorAdviserFlagAdviser             "����"

/* �������� */
#define BCESConstExchangeIDNONE                      ""                   /*������*/
#define BCESConstCommentExchangeIDNONE                      "������"
#define BCESConstExchangeIDSHFE                      "SHFE"               /*�Ϻ��ڻ�������*/
#define BCESConstCommentExchangeIDSHFE                      "�Ϻ��ڻ�������"
#define BCESConstExchangeIDDCE                      "DCE"                /*������Ʒ������*/
#define BCESConstCommentExchangeIDDCE                      "������Ʒ������"
#define BCESConstExchangeIDCZCE                      "CZCE"               /*֣����Ʒ������*/
#define BCESConstCommentExchangeIDCZCE                      "֣����Ʒ������"
#define BCESConstExchangeIDCFFEX                      "CFFEX"              /*�й������ڻ�������*/
#define BCESConstCommentExchangeIDCFFEX                      "�й������ڻ�������"
#define BCESConstExchangeIDINE                      "INE"                /*�Ϻ�������Դ��������*/
#define BCESConstCommentExchangeIDINE                      "�Ϻ�������Դ��������"

/* Ͷ���߽�ɫ */
#define BCESConstInvestorRoleAdviser                    'A'                  /*����*/
#define BCESConstCommentInvestorRoleAdviser                    "����"
#define BCESConstInvestorRoleStudent                    'S'                  /*ѧԱ*/
#define BCESConstCommentInvestorRoleStudent                    "ѧԱ"
#define BCESConstInvestorRoleInvestor                    'I'                  /*Ͷ����*/
#define BCESConstCommentInvestorRoleInvestor                    "Ͷ����"

/* Ͷ���߱�־ */
#define BCESConstInvestorFlagImportant                    'I'                  /*��Ҫ*/
#define BCESConstCommentInvestorFlagImportant                    "��Ҫ"
#define BCESConstInvestorFlagCommon                    'C'                  /*��ͨ*/
#define BCESConstCommentInvestorFlagCommon                    "��ͨ"

/* K������ */
#define BCESConstKLineType1S                       '0'                  /*1����*/
#define BCESConstCommentKLineType1S                       "1����"
#define BCESConstKLineType5S                       '1'                  /*5����*/
#define BCESConstCommentKLineType5S                       "5����"
#define BCESConstKLineType15S                       '2'                  /*15����*/
#define BCESConstCommentKLineType15S                       "15����"
#define BCESConstKLineType1D                       '3'                  /*1����*/
#define BCESConstCommentKLineType1D                       "1����"
#define BCESConstKLineType1M                       '4'                  /*1����*/
#define BCESConstCommentKLineType1M                       "1����"
#define BCESConstKLineType5M                       '5'                  /*5����*/
#define BCESConstCommentKLineType5M                       "5����"
#define BCESConstKLineType15M                       '6'                  /*15����*/
#define BCESConstCommentKLineType15M                       "15����"


/* MacroDefine */
#define BCESMacroBCESPackageSize                7000                 /*BCES���ݰ���С*/
#define BCESMacroAPIPackageSize                 8192                 /*API���ݰ���С*/
#define BCESMacroFlowResumeMethodRestart        1                    /*�ӽ����տ�ʼ�ش�*/
#define BCESMacroFlowResumeMethodResume         2                    /*���ϴζϵ�����*/
#define BCESMacroFlowResumeMethodQuick          3                    /*�����µ㴫��*/

#endif /* __BCES_FIELDTYPE_DEFINE_H__ */
