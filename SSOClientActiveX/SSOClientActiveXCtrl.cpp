// SSOClientActiveXCtrl.cpp : CSSOClientActiveXCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "SSOClientActiveX.h"
#include "SSOClientActiveXCtrl.h"
#include "SSOClientActiveXPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSSOClientActiveXCtrl, COleControl)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSSOClientActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(CSSOClientActiveXCtrl, COleControl)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CSSOClientActiveXCtrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CSSOClientActiveXCtrl, 1)
	PROPPAGEID(CSSOClientActiveXPropPage::guid)
END_PROPPAGEIDS(CSSOClientActiveXCtrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSSOClientActiveXCtrl, "SSOCLIENTACTIVEX.SSOClientActiveXCtrl.1",
	0x1f1a35d3, 0xae6b, 0x44f4, 0xad, 0xf5, 0xe3, 0x79, 0xa1, 0x48, 0xd, 0x62)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CSSOClientActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_DSSOClientActiveX = { 0x3AD217DA, 0x46BF, 0x4571, { 0x81, 0xA3, 0x9, 0x5, 0xFA, 0x37, 0x69, 0x78 } };
const IID IID_DSSOClientActiveXEvents = { 0x14D1D9DA, 0x2375, 0x4943, { 0x9D, 0x47, 0x17, 0xB5, 0xB7, 0xD2, 0xB0, 0x90 } };

// �ؼ�������Ϣ

static const DWORD _dwSSOClientActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSSOClientActiveXCtrl, IDS_SSOCLIENTACTIVEX, _dwSSOClientActiveXOleMisc)

// CSSOClientActiveXCtrl::CSSOClientActiveXCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSSOClientActiveXCtrl ��ϵͳע�����

BOOL CSSOClientActiveXCtrl::CSSOClientActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_SSOCLIENTACTIVEX,
			IDB_SSOCLIENTACTIVEX,
			afxRegApartmentThreading,
			_dwSSOClientActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CSSOClientActiveXCtrl::CSSOClientActiveXCtrl - ���캯��

CSSOClientActiveXCtrl::CSSOClientActiveXCtrl()
{
	InitializeIIDs(&IID_DSSOClientActiveX, &IID_DSSOClientActiveXEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// CSSOClientActiveXCtrl::~CSSOClientActiveXCtrl - ��������

CSSOClientActiveXCtrl::~CSSOClientActiveXCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}

// CSSOClientActiveXCtrl::OnDraw - ��ͼ����

void CSSOClientActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CSSOClientActiveXCtrl::DoPropExchange - �־���֧��

void CSSOClientActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CSSOClientActiveXCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CSSOClientActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}


// CSSOClientActiveXCtrl ��Ϣ�������
