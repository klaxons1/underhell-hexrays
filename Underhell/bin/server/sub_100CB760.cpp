char __thiscall sub_100CB760(_DWORD *this, int a2)
{
  int v3; // ecx
  _DWORD *i; // esi
  int v5; // edx

  v3 = this[443] - 1;
  if ( v3 < 0 )
    return 0;
  for ( i = (_DWORD *)(this[440] + 16 * v3); ; i -= 4 )
  {
    v5 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v5 == a2 )
      break;
    if ( --v3 < 0 )
      return 0;
  }
  if ( this[443] - v3 - 1 > 0 )
    memcpy((void *)(this[440] + 16 * v3), (const void *)(this[440] + 16 * v3 + 16), 16 * (this[443] - v3 - 1));
  --this[443];
  return 1;
}
