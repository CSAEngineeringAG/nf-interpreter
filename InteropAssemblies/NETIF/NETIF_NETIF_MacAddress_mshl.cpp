//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "NETIF.h"
#include "NETIF_NETIF_MacAddress.h"

using namespace NETIF;


HRESULT Library_NETIF_NETIF_MacAddress::NativeUpdate___STATIC__BOOLEAN__SZARRAY_U1( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_TypedArray_UINT8 param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ARRAY( stack, 0, param0 ) );

        bool retVal = MacAddress::NativeUpdate( param0, hr );
        NANOCLR_CHECK_HRESULT( hr );
        SetResult_bool( stack, retVal );

    }
    NANOCLR_NOCLEANUP();
}
