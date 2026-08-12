int __thiscall sub_1019DC10(_DWORD *this, char *String2)
{
  int v3; // esi
  char *v4; // eax

  v3 = 0;
  if ( !this[266] )
    return 0;
  while ( 1 )
  {
    v4 = *(char **)(this[265] + 4 * v3);
    if ( v4 == String2 || !_stricmp(v4, String2) )
      break;
    if ( (unsigned int)++v3 >= this[266] )
      return 0;
  }
  return v3 + 1;
}
