// dllmain.h : Declaration of module class.

class CsimpleatlcomModule : public ATL::CAtlDllModuleT< CsimpleatlcomModule >
{
public :
	DECLARE_LIBID(LIBID_simpleatlcomLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIMPLEATLCOM, "{21C46DDE-C082-4DF8-9A47-0DB1B83BF47E}")
};

extern class CsimpleatlcomModule _AtlModule;
