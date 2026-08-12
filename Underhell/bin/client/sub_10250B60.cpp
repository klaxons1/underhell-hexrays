int __cdecl sub_10250B60(char *String1)
{
  int v1; // esi
  int (*v3)(void); // esi

  v1 = dword_1047EDB0;
  if ( !dword_1047EDB0 )
    return 0;
  while ( _stricmp(String1, *(const char **)(v1 + 12)) )
  {
    v1 = *(_DWORD *)v1;
    if ( !v1 )
      return 0;
  }
  v3 = *(int (**)(void))(v1 + 8);
  if ( v3 )
    return v3();
  else
    return 0;
}
