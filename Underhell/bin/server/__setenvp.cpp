int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  _DWORD *v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( !dword_10709CB4 )
    __initmbctable();
  v0 = dword_10700B1C;
  v1 = 0;
  if ( !dword_10700B1C )
    return -1;
  while ( *v0 )
  {
    if ( *v0 != 61 )
      ++v1;
    v0 += strlen(v0) + 1;
  }
  v3 = sub_101845E0(v1 + 1, 4);
  dword_10701174 = (int)v3;
  if ( !v3 )
    return -1;
  for ( i = dword_10700B1C; ; i += v6 )
  {
    if ( !*i )
    {
      sub_10184660((int)dword_10700B1C);
      dword_10700B1C = 0;
      *v3 = 0;
      dword_10709CA8 = 1;
      return 0;
    }
    v5 = strlen(i);
    v6 = v5 + 1;
    if ( *i != 61 )
      break;
LABEL_15:
    ;
  }
  v7 = (char *)sub_101845E0(v5 + 1, 1);
  *v3 = v7;
  if ( v7 )
  {
    if ( strcpy_s(v7, v6, i) )
      _invoke_watson(0, 0, 0, 0, 0);
    ++v3;
    goto LABEL_15;
  }
  sub_10184660(dword_10701174);
  dword_10701174 = 0;
  return -1;
}
