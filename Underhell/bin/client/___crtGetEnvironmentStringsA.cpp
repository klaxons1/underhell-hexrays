int __crtGetEnvironmentStringsA()
{
  LPWCH EnvironmentStringsW; // eax
  WCHAR *v1; // ebx
  int v3; // eax
  CHAR *v4; // eax
  int cchWideChar; // [esp+8h] [ebp-Ch]
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  EnvironmentStringsW = GetEnvironmentStringsW();
  v1 = EnvironmentStringsW;
  if ( !EnvironmentStringsW )
    return 0;
  for ( ; *EnvironmentStringsW; ++EnvironmentStringsW )
  {
    do
      ++EnvironmentStringsW;
    while ( *EnvironmentStringsW );
  }
  cchWideChar = EnvironmentStringsW - v1 + 1;
  v3 = WideCharToMultiByte(0, 0, v1, cchWideChar, 0, 0, 0, 0);
  cbMultiByte = v3;
  if ( v3 && (v4 = (CHAR *)sub_100DDA40(v3), (v7 = (int)v4) != 0) )
  {
    if ( !WideCharToMultiByte(0, 0, v1, cchWideChar, v4, cbMultiByte, 0, 0) )
    {
      sub_10034930(v7);
      v7 = 0;
    }
    FreeEnvironmentStringsW(v1);
    return v7;
  }
  else
  {
    FreeEnvironmentStringsW(v1);
    return 0;
  }
}
