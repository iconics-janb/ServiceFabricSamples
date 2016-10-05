// DcomModule.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "DcomModule_i.h"
#include "xdlldata.h"


using namespace ATL;


class CDcomModuleModule : public ATL::CAtlExeModuleT< CDcomModuleModule >
{
public :
	DECLARE_LIBID(LIBID_DcomModuleLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DCOMMODULE, "{A398C2DA-58A4-4F18-8720-6A2E8410B373}")
	};

CDcomModuleModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

