// SSOClientActiveX.cpp : CSSOClientActiveXApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "SSOClientActiveX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CSSOClientActiveXApp theApp;

const GUID CDECL _tlid = { 0x6F2D4A6A, 0x281B, 0x4959, { 0x8C, 0x45, 0xBC, 0xBD, 0x94, 0xFD, 0x13, 0x50 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CSSOClientActiveXApp::InitInstance - DLL ��ʼ��

BOOL CSSOClientActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CSSOClientActiveXApp::ExitInstance - DLL ��ֹ

int CSSOClientActiveXApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
