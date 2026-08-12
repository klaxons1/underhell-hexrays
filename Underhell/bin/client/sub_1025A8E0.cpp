int __thiscall sub_1025A8E0(char *this, LPCCH lpMultiByteStr)
{
  const CHAR *v2; // eax
  WCHAR WideCharStr[1024]; // [esp+4h] [ebp-800h] BYREF

  v2 = lpMultiByteStr;
  if ( lpMultiByteStr )
  {
    if ( *lpMultiByteStr == 35 )
    {
      sub_10257410(lpMultiByteStr, WideCharStr, 0x800u);
      return sub_1025A440(this, WideCharStr);
    }
  }
  else
  {
    v2 = Locale;
  }
  sub_10228590(v2, WideCharStr, 0x800u);
  return sub_1025A440(this, WideCharStr);
}
