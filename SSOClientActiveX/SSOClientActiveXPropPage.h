#pragma once

// SSOClientActiveXPropPage.h : CSSOClientActiveXPropPage 属性页类的声明。


// CSSOClientActiveXPropPage : 有关实现的信息，请参阅 SSOClientActiveXPropPage.cpp。

class CSSOClientActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSSOClientActiveXPropPage)
	DECLARE_OLECREATE_EX(CSSOClientActiveXPropPage)

// 构造函数
public:
	CSSOClientActiveXPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_SSOCLIENTACTIVEX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

