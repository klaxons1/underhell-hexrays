char __cdecl sub_10250B20(char *String1)
{
  int v1; // esi

  v1 = dword_1047EDB0;
  if ( !dword_1047EDB0 )
    return 0;
  while ( _stricmp(String1, *(const char **)(v1 + 12)) )
  {
    v1 = *(_DWORD *)v1;
    if ( !v1 )
      return 0;
  }
  return 1;
}
