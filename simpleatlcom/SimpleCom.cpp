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


STDMETHODIMP CSimpleCom::Calculate(VARIANT_BOOL a_bFireEvent, LONG* a_lTotalMarks)
{
    *a_lTotalMarks = m_lATLMarks + m_lComMarks;
    if (a_bFireEvent == VARIANT_TRUE)
        Fire_TotalMarks(*a_lTotalMarks);

	return S_OK;
}


STDMETHODIMP CSimpleCom::get_ComMarks(LONG* pVal)
{
    *pVal = m_lComMarks;
	return S_OK;
}


STDMETHODIMP CSimpleCom::put_ComMarks(LONG newVal)
{
    m_lComMarks = newVal;
	return S_OK;
}


STDMETHODIMP CSimpleCom::get_AtlMarks(LONG* pVal)
{
    *pVal = m_lATLMarks;
	return S_OK;
}


STDMETHODIMP CSimpleCom::put_AtlMarks(LONG newVal)
{
    m_lATLMarks = newVal;
	return S_OK;
}


STDMETHODIMP CSimpleCom::get_StudentName(BSTR* pVal)
{
    *pVal = m_bstStudName.Copy();
	return S_OK;
}


STDMETHODIMP CSimpleCom::put_StudentName(BSTR newVal)
{
    m_bstStudName = newVal;
	return S_OK;
}
