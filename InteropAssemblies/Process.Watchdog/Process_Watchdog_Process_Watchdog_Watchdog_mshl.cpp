//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------

#include "Process_Watchdog.h"
#include "Process_Watchdog_Process_Watchdog_Watchdog.h"

using namespace Process_Watchdog::Process_Watchdog;


HRESULT Library_Process_Watchdog_Process_Watchdog_Watchdog::WatchdogManagedInitNative___STATIC__VOID( CLR_RT_StackFrame& stack )
{
	(void)stack;

    NANOCLR_HEADER(); hr = S_OK;
    {

        Watchdog::WatchdogManagedInitNative(  hr );
        NANOCLR_CHECK_HRESULT( hr );

    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_Process_Watchdog_Process_Watchdog_Watchdog::WatchdogManagedResetNative___STATIC__VOID( CLR_RT_StackFrame& stack )
{
	(void)stack;

    NANOCLR_HEADER(); hr = S_OK;
    {

        Watchdog::WatchdogManagedResetNative(  hr );
        NANOCLR_CHECK_HRESULT( hr );

    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_Process_Watchdog_Process_Watchdog_Watchdog::GetWatchdogResetReasonNative___STATIC__U4( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {

        unsigned int retValue = Watchdog::GetWatchdogResetReasonNative(  hr );
        NANOCLR_CHECK_HRESULT( hr );
        SetResult_UINT32( stack, retValue );
    }
    NANOCLR_NOCLEANUP();
}
