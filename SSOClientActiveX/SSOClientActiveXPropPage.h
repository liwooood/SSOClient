#pragma once

// SSOClientActiveXPropPage.h : CSSOClientActiveXPropPage ����ҳ���������


// CSSOClientActiveXPropPage : �й�ʵ�ֵ���Ϣ������� SSOClientActiveXPropPage.cpp��

class CSSOClientActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSSOClientActiveXPropPage)
	DECLARE_OLECREATE_EX(CSSOClientActiveXPropPage)

// ���캯��
public:
	CSSOClientActiveXPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_SSOCLIENTACTIVEX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

