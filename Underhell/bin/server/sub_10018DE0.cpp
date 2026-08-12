char __cdecl sub_10018DE0(char *String1)
{
  const char **v1; // esi

  v1 = (const char **)off_105FD598;
  while ( _stricmp(String1, *v1) )
  {
    if ( (int)++v1 >= (int)&dword_105FD5B8 )
      return 0;
  }
  return 1;
}
