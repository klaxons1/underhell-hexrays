int __cdecl sub_101AAE20(char *String2)
{
  int v1; // esi
  char *v2; // eax

  if ( !String2 || !*String2 )
    return -1;
  v1 = 0;
  while ( 1 )
  {
    v2 = (&off_10633F2C)[v1];
    if ( v2 == String2 || !_stricmp(v2, String2) )
      break;
    if ( ++v1 >= 6 )
      return -1;
  }
  return v1;
}
