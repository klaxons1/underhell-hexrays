int __thiscall sub_100695D0(_DWORD *this, char *String2)
{
  int v3; // esi
  const char *v4; // eax

  v3 = this[10] - 1;
  if ( v3 < 0 )
    return -1;
  while ( 1 )
  {
    v4 = (const char *)sub_10229A00(*(_DWORD *)(this[7] + 4 * v3));
    if ( !_stricmp(v4, String2) )
      break;
    if ( --v3 < 0 )
      return -1;
  }
  return v3;
}
