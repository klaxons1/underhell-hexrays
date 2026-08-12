int __thiscall sub_100DB0C0(_DWORD *this, char *String1)
{
  int v3; // esi
  int i; // edi
  char *v5; // eax
  int v7; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v7 = this[44];
  if ( v7 <= 0 )
    return -1;
  for ( i = 0; ; i += 12 )
  {
    if ( v3 < 0 || v3 >= this[44] || (v5 = *(char **)(this[41] + i)) == 0 )
      v5 = (char *)String;
    if ( String1 == v5 || !_stricmp(String1, v5) )
      break;
    if ( ++v3 >= v7 )
      return -1;
  }
  return v3;
}
