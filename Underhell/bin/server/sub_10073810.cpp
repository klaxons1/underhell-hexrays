int __cdecl sub_10073810(char *String1)
{
  int v2; // esi

  if ( !String1 )
    return 0;
  v2 = 0;
  while ( _stricmp(String1, *((const char **)*(&off_106076BC + v2) + 1)) )
  {
    if ( ++v2 >= 10 )
      return 0;
  }
  return v2;
}
