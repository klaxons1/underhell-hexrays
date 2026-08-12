int __thiscall sub_1014F350(_DWORD *this, int a2)
{
  unsigned int v2; // eax

  if ( a2 < 0 )
    return 0;
  if ( a2 >= this[206] )
    return 0;
  v2 = *(_DWORD *)(this[203] + 4 * a2);
  if ( v2 == -1 || off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (*(_DWORD *)(this[203] + 4 * a2) & 0xFFF) + 1];
}
