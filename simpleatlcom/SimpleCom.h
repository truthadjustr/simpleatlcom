// SimpleCom.h : Declaration of the CSimpleCom

#pragma once
#include "resource.h"       // main symbols



#include "simpleatlcom_i.h"
#include "_ISimpleComEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CSimpleCom

class ATL_NO_VTABLE CSimpleCom :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSimpleCom, &CLSID_SimpleCom>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CSimpleCom>,
	public CProxy_ISimpleComEvents<CSimpleCom>,
	public IDispatchImpl<ISimpleCom, &IID_ISimpleCom, &LIBID_simpleatlcomLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CSimpleCom()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SIMPLECOM)


BEGIN_COM_MAP(CSimpleCom)
	COM_INTERFACE_ENTRY(ISimpleCom)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CSimpleCom)
	CONNECTION_POINT_ENTRY(__uuidof(_ISimpleComEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

private:
    long m_lComMarks,m_lATLMarks,m_lTotalMarks;
    CComBSTR m_bstStudName;
public:



	STDMETHOD(Calculate)(BOOL a_bFireEvent, LONG* a_lTotalMarks);
	STDMETHOD(get_ComMarks)(LONG* pVal);
	STDMETHOD(put_ComMarks)(LONG newVal);
	STDMETHOD(get_AtlMarks)(LONG* pVal);
	STDMETHOD(put_AtlMarks)(LONG newVal);
	STDMETHOD(get_StudentName)(BSTR* pVal);
	STDMETHOD(put_StudentName)(BSTR newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(SimpleCom), CSimpleCom)
