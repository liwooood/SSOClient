// SSOClientActiveXPropPage.cpp : CSSOClientActiveXPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "SSOClientActiveX.h"
#include "SSOClientActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSSOClientActiveXPropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSSOClientActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSSOClientActiveXPropPage, "SSOCLIENTACTIV.SSOClientActivPropPage.1",
	0xa05f8a42, 0xbe9b, 0x4630, 0xa7, 0x1e, 0xd9, 0x7e, 0xd5, 0x8b, 0x12, 0xaf)

// CSSOClientActiveXPropPage::CSSOClientActiveXPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSSOClientActiveXPropPage ��ϵͳע�����

BOOL CSSOClientActiveXPropPage::CSSOClientActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_SSOCLIENTACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CSSOClientActiveXPropPage::CSSOClientActiveXPropPage - ���캯��

CSSOClientActiveXPropPage::CSSOClientActiveXPropPage() :
	COlePropertyPage(IDD, IDS_SSOCLIENTACTIVEX_PPG_CAPTION)
{
}

// CSSOClientActiveXPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CSSOClientActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CSSOClientActiveXPropPage ��Ϣ�������
