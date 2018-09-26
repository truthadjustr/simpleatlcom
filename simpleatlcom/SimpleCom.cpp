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
