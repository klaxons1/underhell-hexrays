CHAR *__cdecl _getdcwd_nolock(int FileName, LPSTR lpBuffer, int a3)
{
  int v3; // ebx
  CHAR *v5; // edi
  signed int FullPathNameA; // eax
  CHAR *v7; // eax
  signed int v8; // eax
  DWORD LastError; // eax
  LPSTR FilePart; // [esp+4h] [ebp-8h] BYREF
  DWORD nBufferLength; // [esp+8h] [ebp-4h]

  v3 = FileName;
  if ( FileName )
  {
    if ( !_validdrive(FileName) )
    {
      *__doserrno() = 15;
      *_errno() = 13;
      _invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    v3 = _getdrive();
  }
  v5 = lpBuffer;
  if ( lpBuffer )
  {
    if ( a3 <= 0 )
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0;
    }
    nBufferLength = a3;
    *lpBuffer = 0;
  }
  else
  {
    nBufferLength = 0;
  }
  if ( v3 )
  {
    LOBYTE(FileName) = v3 + 64;
    strcpy((char *)&FileName + 1, ":.");
  }
  else
  {
    LOWORD(FileName) = 46;
  }
  FullPathNameA = GetFullPathNameA((LPCSTR)&FileName, nBufferLength, v5, &FilePart);
  if ( !FullPathNameA )
    goto LABEL_24;
  if ( !v5 )
  {
    if ( FullPathNameA > a3 )
      a3 = FullPathNameA;
    v7 = (CHAR *)sub_100DD7D0(a3, 1);
    v5 = v7;
    if ( !v7 )
    {
      *_errno() = 12;
      *__doserrno() = 8;
      return 0;
    }
    v8 = GetFullPathNameA((LPCSTR)&FileName, a3, v7, &FilePart);
    if ( v8 && v8 < a3 )
      return v5;
LABEL_24:
    LastError = GetLastError();
    _dosmaperr(LastError);
    return 0;
  }
  if ( FullPathNameA < (int)nBufferLength )
    return v5;
  *_errno() = 34;
  *v5 = 0;
  return 0;
}
