_DWORD *__cdecl sub_1010E480(int a1, char *String1, int a3)
{
  int v4; // eax
  _DWORD *v5; // esi
  char *v6; // eax
  char *v7; // eax

  if ( !a1 )
    return 0;
  if ( String1 == String || !_stricmp(String1, String) )
  {
    if ( !a3 )
      return (_DWORD *)sub_101E94B0(a1);
    return 0;
  }
  v4 = atoi(String1);
  if ( v4 )
  {
    if ( !a3 )
      return (_DWORD *)sub_100D60A0(v4);
    return 0;
  }
  v5 = (_DWORD *)sub_1012BC10(a3);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v6 = (char *)v5[65];
    if ( v6 )
    {
      if ( v6 == String1 || sub_100D6190(v5, String1) )
        break;
    }
    v7 = (char *)v5[23];
    if ( v7 )
    {
      if ( v7 == String1 || sub_100D6240(v5, String1) )
        break;
    }
    v5 = (_DWORD *)sub_1012BC10(v5);
    if ( !v5 )
      return 0;
  }
  return v5;
}
