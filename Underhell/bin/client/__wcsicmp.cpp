int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v3; // ecx
  int v4; // esi
  unsigned int v5; // eax
  unsigned __int16 v6; // dx
  unsigned int v7; // eax

  if ( dword_10481B60 )
    return _wcsicmp_l(String1, String2, 0);
  if ( String1 && (v3 = String2) != 0 )
  {
    v4 = (char *)String1 - (char *)String2;
    do
    {
      v5 = *(const wchar_t *)((char *)v3 + v4);
      if ( v5 < 0x41 || v5 > 0x5A )
        v6 = *(const wchar_t *)((char *)v3 + v4);
      else
        v6 = v5 + 32;
      v7 = *v3;
      if ( v7 >= 0x41 && v7 <= 0x5A )
        LOWORD(v7) = v7 + 32;
      ++v3;
    }
    while ( v6 && v6 == (_WORD)v7 );
    return v6 - (unsigned __int16)v7;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}
