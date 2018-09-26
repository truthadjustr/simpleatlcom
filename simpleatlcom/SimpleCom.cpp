// SimpleCom.cpp : Implementation of CSimpleCom

#include "stdafx.h"
#include "SimpleCom.h"


// CSimpleCom

STDMETHODIMP CSimpleCom::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ISimpleCom
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CSimpleCom::Calculate(BOOL a_bFireEvent, LONG* a_lTotalMarks)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CSimpleCom::get_ComMarks(LONG* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CSimpleCom::put_ComMarks(LONG newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CSimpleCom::get_AtlMarks(LONG* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CSimpleCom::put_AtlMarks(LONG newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CSimpleCom::get_StudentName(BSTR* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CSimpleCom::put_StudentName(BSTR newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}
