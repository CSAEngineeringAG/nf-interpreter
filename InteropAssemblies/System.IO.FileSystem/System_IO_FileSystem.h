//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _SYSTEM_IO_FILESYSTEM_H_
#define _SYSTEM_IO_FILESYSTEM_H_

#include <nanoCLR_Interop.h>
#include <nanoCLR_Runtime.h>
#include <hal.h>
struct Library_System_IO_FileSystem_System_IO_FileStream
{
    static const int FIELD___nativeFileStream = 65535;
    static const int FIELD___canRead = 65535;
    static const int FIELD___canWrite = 65535;
    static const int FIELD___canSeek = 65535;
    static const int FIELD___seekLimit = 65535;
    static const int FIELD___position = 65535;
    static const int FIELD___disposed = 65535;
    static const int FIELD___name = 65535;
    static const int FIELD___path = 65535;


    //--//

};

struct Library_System_IO_FileSystem_System_IO_NativeFile
{
    NANOCLR_NATIVE_DECLARE(ExistsNative___STATIC__BOOLEAN__STRING__STRING);
    NANOCLR_NATIVE_DECLARE(MoveNative___STATIC__VOID__STRING__STRING);
    NANOCLR_NATIVE_DECLARE(DeleteNative___STATIC__VOID__STRING);
    NANOCLR_NATIVE_DECLARE(GetAttributesNative___STATIC__U1__STRING);
    NANOCLR_NATIVE_DECLARE(SetAttributesNative___STATIC__VOID__STRING__U1);

    //--//

};

struct Library_System_IO_FileSystem_System_IO_NativeFileStream
{
    NANOCLR_NATIVE_DECLARE(OpenFileNative___VOID__STRING__STRING__I4);
    NANOCLR_NATIVE_DECLARE(ReadNative___I4__STRING__STRING__I8__SZARRAY_U1__I4);
    NANOCLR_NATIVE_DECLARE(WriteNative___VOID__STRING__STRING__I8__SZARRAY_U1__I4);
    NANOCLR_NATIVE_DECLARE(GetLengthNative___I8__STRING__STRING);

    //--//

};

struct Library_System_IO_FileSystem_System_IO_Path
{
    static const int FIELD_STATIC__DirectorySeparatorChar = 0;
    static const int FIELD_STATIC__InvalidPathChars = 1;
    static const int FIELD_STATIC__m_illegalCharacters = 2;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_System_IO_FileSystem;

#endif  //_SYSTEM_IO_FILESYSTEM_H_
