const char *__cdecl sub_101E1E50(char *String1)
{
  const char **v1; // esi

  v1 = (const char **)dword_103EDF28;
  while ( _stricmp(String1, v1[1]) )
  {
    v1 += 2;
    if ( (int)v1 >= (int)&unk_103EDF40 )
      return 0;
  }
  return *v1;
}
