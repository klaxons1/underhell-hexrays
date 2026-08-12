int __cdecl sub_10274700(char *String1)
{
  int v1; // esi

  v1 = 0;
  while ( _stricmp(String1, (&off_10656738)[v1]) )
  {
    if ( ++v1 >= 16 )
      return -1;
  }
  return v1;
}
