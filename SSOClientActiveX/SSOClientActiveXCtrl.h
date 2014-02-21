#pragma once

// SSOClientActiveXCtrl.h : CSSOClientActiveXCtrl ActiveX 控件类的声明。


// CSSOClientActiveXCtrl : 有关实现的信息，请参阅 SSOClientActiveXCtrl.cpp。

class CSSOClientActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSSOClientActiveXCtrl)

// 构造函数
public:
	CSSOClientActiveXCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CSSOClientActiveXCtrl();

	DECLARE_OLECREATE_EX(CSSOClientActiveXCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CSSOClientActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSSOClientActiveXCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CSSOClientActiveXCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
};

