//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------
#ifndef _MFUPDATE_MFUPDATE_MFNATIVEUPDATE_H_
#define _MFUPDATE_MFUPDATE_MFNATIVEUPDATE_H_

namespace MFUpdate
{
    struct MFNativeUpdate
    {
        // Helper Functions to access fields of managed object
        // Declaration of stubs. These functions are implemented by Interop code developers
        static void _cctor( HRESULT &hr );
        static signed int Initialize( UNSUPPORTED_TYPE param0, HRESULT &hr );
        static bool Authenticate( signed int param0, CLR_RT_TypedArray_UINT8 param1, HRESULT &hr );
        static bool Open( signed int param0, HRESULT &hr );
        static bool Create( signed int param0, HRESULT &hr );
        static void GetMissingPackets( signed int param0, CLR_RT_TypedArray_UINT32 param1, HRESULT &hr );
        static bool AddPacket( signed int param0, signed int param1, CLR_RT_TypedArray_UINT8 param2, CLR_RT_TypedArray_UINT8 param3, HRESULT &hr );
        static bool Validate( signed int param0, CLR_RT_TypedArray_UINT8 param1, HRESULT &hr );
        static bool Install( signed int param0, CLR_RT_TypedArray_UINT8 param1, HRESULT &hr );
        static unsigned char SerializeParameter( UNSUPPORTED_TYPE param0, HRESULT &hr );
    };
}
#endif  //_MFUPDATE_MFUPDATE_MFNATIVEUPDATE_H_
