int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  _DWORD *v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( !dword_1048ACF8 )
    __initmbctable();
  v0 = dword_10481B18;
  v1 = 0;
  if ( !dword_10481B18 )
    return -1;
  while ( *v0 )
  {
    if ( *v0 != 61 )
      ++v1;
    v0 += strlen(v0) + 1;
  }
  v3 = sub_100DD9C0(v1 + 1, 4);
  dword_10481B38 = (int)v3;
  if ( !v3 )
    return -1;
  for ( i = dword_10481B18; ; i += v6 )
  {
    if ( !*i )
    {
      sub_10034930((int)dword_10481B18);
      dword_10481B18 = 0;
      *v3 = 0;
      dword_1048ACEC = 1;
      return 0;
    }
    v5 = strlen(i);
    v6 = v5 + 1;
    if ( *i != 61 )
      break;
LABEL_15:
    ;
  }
  v7 = (char *)sub_100DD9C0(v5 + 1, 1);
  *v3 = v7;
  if ( v7 )
  {
    if ( strcpy_s(v7, v6, i) )
      _invoke_watson(0, 0, 0, 0, 0);
    ++v3;
    goto LABEL_15;
  }
  sub_10034930(dword_10481B38);
  dword_10481B38 = 0;
  return -1;
}
