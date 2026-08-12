char __thiscall sub_100A8EB0(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // edx
  _DWORD *i; // esi
  int v5; // ecx

  v2 = this[252];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = (_DWORD *)this[249]; ; i += 5 )
  {
    v5 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v5 == a2 )
      break;
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
