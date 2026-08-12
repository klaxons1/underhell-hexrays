int __thiscall sub_101B0F10(_DWORD *this, char *String2)
{
  int v3; // esi
  int i; // edi
  const char *v5; // ecx
  const char *v6; // eax

  v3 = this[6] - 1;
  if ( v3 < 0 )
    return 0;
  for ( i = 28 * v3; ; i -= 28 )
  {
    v5 = String2;
    if ( !String2 )
      v5 = String;
    v6 = *(const char **)(this[3] + i + 20);
    if ( !v6 )
      v6 = String;
    if ( v6 == v5 || !_stricmp(v6, v5) )
      break;
    if ( --v3 < 0 )
      return 0;
  }
  return this[3] + 28 * v3;
}
