int __thiscall sub_100A7940(_DWORD *this, char *String2)
{
  int v2; // esi
  char *v3; // eax

  v2 = this[1];
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = *(char **)(v2 + 44);
    if ( v3 == String2 || !_stricmp(v3, String2) )
      break;
    v2 = *(_DWORD *)(v2 + 48);
    if ( !v2 )
      return 0;
  }
  return v2;
}
