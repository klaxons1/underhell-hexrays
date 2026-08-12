const char *__cdecl sub_101E1DC0(char *String1)
{
  const char **v1; // esi

  v1 = (const char **)dword_103EDEA0;
  while ( _stricmp(String1, v1[1]) )
  {
    v1 += 2;
    if ( (int)v1 >= (int)&dword_103EDF28 )
      return 0;
  }
  return *v1;
}
