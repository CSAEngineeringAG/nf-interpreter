#include "nf_sys_io_filesystem.h"

static const CLR_RT_MethodHandler method_lookup[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nf_sys_io_filesystem_System_IO_NativeFile::ExistsNative___STATIC__BOOLEAN__STRING__STRING,
    Library_nf_sys_io_filesystem_System_IO_NativeFile::MoveNative___STATIC__VOID__STRING__STRING,
    Library_nf_sys_io_filesystem_System_IO_NativeFile::DeleteNative___STATIC__VOID__STRING,
    Library_nf_sys_io_filesystem_System_IO_NativeFile::GetAttributesNative___STATIC__U1__STRING,
    Library_nf_sys_io_filesystem_System_IO_NativeFile::SetAttributesNative___STATIC__VOID__STRING__U1,
    Library_nf_sys_io_filesystem_System_IO_NativeFileStream::OpenFileNative___VOID__STRING__STRING__I4,
    Library_nf_sys_io_filesystem_System_IO_NativeFileStream::ReadNative___I4__STRING__STRING__I8__SZARRAY_U1__I4,
    Library_nf_sys_io_filesystem_System_IO_NativeFileStream::WriteNative___VOID__STRING__STRING__I8__SZARRAY_U1__I4,
    Library_nf_sys_io_filesystem_System_IO_NativeFileStream::GetLengthNative___I8__STRING__STRING,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_System_IO_FileSystem =
    {"System.IO.FileSystem", 0xC981DC3F, method_lookup, {1, 0, 0, 0}};