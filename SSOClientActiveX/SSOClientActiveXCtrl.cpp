// SSOClientActiveXCtrl.cpp : CSSOClientActiveXCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "SSOClientActiveX.h"
#include "SSOClientActiveXCtrl.h"
#include "SSOClientActiveXPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSSOClientActiveXCtrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CSSOClientActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CSSOClientActiveXCtrl, COleControl)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CSSOClientActiveXCtrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CSSOClientActiveXCtrl, 1)
	PROPPAGEID(CSSOClientActiveXPropPage::guid)
END_PROPPAGEIDS(CSSOClientActiveXCtrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSSOClientActiveXCtrl, "SSOCLIENTACTIVEX.SSOClientActiveXCtrl.1",
	0x1f1a35d3, 0xae6b, 0x44f4, 0xad, 0xf5, 0xe3, 0x79, 0xa1, 0x48, 0xd, 0x62)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CSSOClientActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_DSSOClientActiveX = { 0x3AD217DA, 0x46BF, 0x4571, { 0x81, 0xA3, 0x9, 0x5, 0xFA, 0x37, 0x69, 0x78 } };
const IID IID_DSSOClientActiveXEvents = { 0x14D1D9DA, 0x2375, 0x4943, { 0x9D, 0x47, 0x17, 0xB5, 0xB7, 0xD2, 0xB0, 0x90 } };

// 控件类型信息

static const DWORD _dwSSOClientActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSSOClientActiveXCtrl, IDS_SSOCLIENTACTIVEX, _dwSSOClientActiveXOleMisc)

// CSSOClientActiveXCtrl::CSSOClientActiveXCtrlFactory::UpdateRegistry -
// 添加或移除 CSSOClientActiveXCtrl 的系统注册表项

BOOL CSSOClientActiveXCtrl::CSSOClientActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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


// CSSOClientActiveXCtrl::CSSOClientActiveXCtrl - 构造函数

CSSOClientActiveXCtrl::CSSOClientActiveXCtrl()
{
	InitializeIIDs(&IID_DSSOClientActiveX, &IID_DSSOClientActiveXEvents);
	// TODO: 在此初始化控件的实例数据。
}

// CSSOClientActiveXCtrl::~CSSOClientActiveXCtrl - 析构函数

CSSOClientActiveXCtrl::~CSSOClientActiveXCtrl()
{
	// TODO: 在此清理控件的实例数据。
}

// CSSOClientActiveXCtrl::OnDraw - 绘图函数

void CSSOClientActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CSSOClientActiveXCtrl::DoPropExchange - 持久性支持

void CSSOClientActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// CSSOClientActiveXCtrl::OnResetState - 将控件重置为默认状态

void CSSOClientActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}


// CSSOClientActiveXCtrl 消息处理程序
