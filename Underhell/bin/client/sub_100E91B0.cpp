int __cdecl sub_100E91B0(char *String2)
{
  int v1; // esi

  if ( !String2 || !*String2 )
    return -1;
  v1 = 0;
  while ( _stricmp((&off_103E1580)[v1], String2) )
  {
    if ( ++v1 >= 6 )
      return -1;
  }
  return v1;
}
