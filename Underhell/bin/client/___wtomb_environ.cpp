int __wtomb_environ()
{
  LPCWCH *v0; // edi
  const WCHAR *v1; // eax
  int v2; // eax
  CHAR *v3; // eax
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  CHAR *v6; // [esp+10h] [ebp-4h] BYREF

  v0 = (LPCWCH *)dword_10481B40;
  v6 = 0;
  v1 = *(const WCHAR **)dword_10481B40;
  if ( !*(_DWORD *)dword_10481B40 )
    return 0;
  while ( 1 )
  {
    v2 = WideCharToMultiByte(0, 0, v1, -1, 0, 0, 0, 0);
    cbMultiByte = v2;
    if ( !v2 )
      break;
    v3 = (CHAR *)sub_100DD9C0(v2, 1);
    v6 = v3;
    if ( !v3 )
      break;
    if ( !WideCharToMultiByte(0, 0, *v0, -1, v3, cbMultiByte, 0, 0) )
    {
      sub_10034930((int)v6);
      return -1;
    }
    if ( (int)__crtsetenv(&v6, 0) < 0 )
    {
      if ( v6 )
      {
        sub_10034930((int)v6);
        v6 = 0;
      }
    }
    v1 = *++v0;
    if ( !*v0 )
      return 0;
  }
  return -1;
}
