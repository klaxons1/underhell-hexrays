const char *__cdecl sub_100D9F00(char *String1)
{
  const char **v1; // esi

  v1 = (const char **)&unk_103E0EF8;
  while ( _stricmp(String1, v1[1]) )
  {
    v1 += 3;
    if ( (int)v1 >= (int)&unk_103E0FB8 )
      return 0;
  }
  return *v1;
}
