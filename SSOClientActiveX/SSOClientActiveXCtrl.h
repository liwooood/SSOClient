#pragma once

// SSOClientActiveXCtrl.h : CSSOClientActiveXCtrl ActiveX �ؼ����������


// CSSOClientActiveXCtrl : �й�ʵ�ֵ���Ϣ������� SSOClientActiveXCtrl.cpp��

class CSSOClientActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSSOClientActiveXCtrl)

// ���캯��
public:
	CSSOClientActiveXCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CSSOClientActiveXCtrl();

	DECLARE_OLECREATE_EX(CSSOClientActiveXCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CSSOClientActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSSOClientActiveXCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CSSOClientActiveXCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
	};
};

