char __thiscall sub_103FC7B0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edx
  _DWORD *i; // esi
  int v6; // ecx

  sub_103FC6C0(this);
  v3 = this[2462];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  for ( i = (_DWORD *)(this[2459] + 4); ; i += 2 )
  {
    v6 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v6 == a2 )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return 1;
}
