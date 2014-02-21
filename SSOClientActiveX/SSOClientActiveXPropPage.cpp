// SSOClientActiveXPropPage.cpp : CSSOClientActiveXPropPage 属性页类的实现。

#include "stdafx.h"
#include "SSOClientActiveX.h"
#include "SSOClientActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSSOClientActiveXPropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(CSSOClientActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSSOClientActiveXPropPage, "SSOCLIENTACTIV.SSOClientActivPropPage.1",
	0xa05f8a42, 0xbe9b, 0x4630, 0xa7, 0x1e, 0xd9, 0x7e, 0xd5, 0x8b, 0x12, 0xaf)

// CSSOClientActiveXPropPage::CSSOClientActiveXPropPageFactory::UpdateRegistry -
// 添加或移除 CSSOClientActiveXPropPage 的系统注册表项

BOOL CSSOClientActiveXPropPage::CSSOClientActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_SSOCLIENTACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CSSOClientActiveXPropPage::CSSOClientActiveXPropPage - 构造函数

CSSOClientActiveXPropPage::CSSOClientActiveXPropPage() :
	COlePropertyPage(IDD, IDS_SSOCLIENTACTIVEX_PPG_CAPTION)
{
}

// CSSOClientActiveXPropPage::DoDataExchange - 在页和属性间移动数据

void CSSOClientActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CSSOClientActiveXPropPage 消息处理程序
