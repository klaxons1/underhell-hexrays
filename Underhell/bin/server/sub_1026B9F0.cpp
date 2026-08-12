int __thiscall sub_1026B9F0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *i; // ecx
  unsigned int v8; // eax

  v3 = this[4];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  v5 = (_DWORD *)this[1];
  for ( i = v5; i[1] != a3 || *i != a2; i += 5 )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  v8 = v5[5 * v4 + 4];
  if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (v8 & 0xFFF) + 1];
}
