int __cdecl sub_102613F0(int a1, _DWORD **a2, _DWORD **a3)
{
  _DWORD *v3; // ecx
  char *v4; // esi
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edi
  int v9; // eax
  const char *v11; // edi
  const char *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // eax

  if ( !a2 || !a3 )
    return 0;
  v3 = *a2;
  v4 = dword_10480438;
  if ( byte_1048043C )
  {
    v5 = sub_1022A6A0(v3, dword_10480438, 1);
    v6 = sub_1022AEE0(v5, 0);
    v7 = *a2;
    if ( v6 != 2 )
    {
      v11 = (const char *)sub_1022B4C0(v7, v4, (int)Locale);
      v12 = (const char *)sub_1022B4C0(*a3, v4, (int)Locale);
      return _stricmp(v11, v12);
    }
    v8 = sub_1022A800(v7, v4, 0);
    v9 = sub_1022A800(*a3, v4, 0);
    if ( v8 >= v9 )
      return v8 > v9;
    return -1;
  }
  v13 = sub_1022A910(v3, dword_10480438, (int)Locale);
  v14 = sub_1022A910(*a3, v4, (int)Locale);
  if ( v14 > v13 )
    return -1;
  return v14 < v13;
}
