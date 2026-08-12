int __cdecl __crtsetenv(const unsigned __int8 **a1, int a2)
{
  const unsigned __int8 *v3; // esi
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // edi
  char *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // edi
  int *v12; // esi
  char *v13; // eax
  unsigned __int8 **v14; // ecx
  size_t v15; // eax
  char *v16; // edi
  size_t v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // [esp+4h] [ebp-14h]
  int v20; // [esp+8h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-Ch]
  BOOL v22; // [esp+10h] [ebp-8h]
  unsigned __int8 *Str; // [esp+14h] [ebp-4h]

  v21 = 0;
  if ( !a1 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v3 = *a1;
  Str = (unsigned __int8 *)*a1;
  if ( !*a1 )
    goto LABEL_12;
  v4 = _mbschr(v3, 0x3Du);
  v5 = v4;
  v19 = v4;
  if ( !v4 || v3 == v4 )
    goto LABEL_12;
  v22 = v4[1] == 0;
  v6 = (char *)dword_10481B38;
  if ( dword_10481B38 == dword_10481B3C )
  {
    v6 = copy_environ((_DWORD *)dword_10481B38);
    dword_10481B38 = (int)v6;
  }
  if ( !v6 )
  {
    if ( a2 && dword_10481B40 )
    {
      if ( __wtomb_environ() )
      {
LABEL_12:
        *_errno() = 22;
        return -1;
      }
    }
    else
    {
      if ( v22 )
        return 0;
      v7 = (_DWORD *)sub_100DDA40(4);
      dword_10481B38 = (int)v7;
      if ( !v7 )
        return -1;
      *v7 = 0;
      if ( !dword_10481B40 )
      {
        v8 = (_DWORD *)sub_100DDA40(4);
        dword_10481B40 = (int)v8;
        if ( !v8 )
          return -1;
        *v8 = 0;
      }
    }
  }
  v9 = (_DWORD *)dword_10481B38;
  v20 = dword_10481B38;
  if ( !dword_10481B38 )
    return -1;
  v10 = findenv(v5 - Str, Str);
  v11 = v10;
  if ( v10 < 0 || !*v9 )
  {
    if ( !v22 )
    {
      if ( v10 < 0 )
        v11 = -v10;
      if ( v11 + 2 <= v11 )
        return -1;
      if ( (unsigned int)(v11 + 2) >= 0x3FFFFFFF )
        return -1;
      v13 = (char *)sub_100DD9F0(dword_10481B38, 4, v11 + 2);
      if ( !v13 )
        return -1;
      v14 = (unsigned __int8 **)&v13[4 * v11];
      *v14 = Str;
      v14[1] = 0;
      *a1 = 0;
      goto LABEL_37;
    }
    sub_10034930((int)Str);
    *a1 = 0;
    return 0;
  }
  v12 = &v9[v10];
  sub_10034930(*v12);
  if ( !v22 )
  {
    *v12 = (int)Str;
    *a1 = 0;
    goto LABEL_38;
  }
  while ( *v12 )
  {
    *v12 = v12[1];
    ++v11;
    v12 = (int *)(v20 + 4 * v11);
  }
  if ( (unsigned int)v11 >= 0x3FFFFFFF )
    goto LABEL_38;
  v13 = (char *)sub_100DD9F0(dword_10481B38, v11, 4);
  if ( !v13 )
    goto LABEL_38;
LABEL_37:
  dword_10481B38 = (int)v13;
LABEL_38:
  if ( a2 )
  {
    v15 = strlen((const char *)Str);
    v16 = (char *)sub_100DD9C0(v15 + 2, 1);
    if ( v16 )
    {
      v17 = strlen((const char *)Str);
      if ( strcpy_s(v16, v17 + 2, (const char *)Str) )
        _invoke_watson(0, 0, 0, 0, 0);
      v18 = &v19[v16 - (char *)Str];
      *v18 = 0;
      if ( !SetEnvironmentVariableA(v16, !v22 ? (LPCSTR)v18 + 1 : 0) )
      {
        v21 = -1;
        *_errno() = 42;
      }
      sub_10034930((int)v16);
    }
  }
  if ( v22 )
  {
    sub_10034930((int)Str);
    *a1 = 0;
  }
  return v21;
}
