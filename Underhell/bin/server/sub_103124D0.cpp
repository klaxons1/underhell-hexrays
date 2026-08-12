int __thiscall sub_103124D0(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int v3; // edx
  unsigned int v4; // edx
  int v5; // esi
  int v6; // edx

  v2 = this[939];
  if ( v2 == -1 || off_1061BE18[4 * (this[939] & 0xFFF) + 2] != this[939] >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[939] & 0xFFF) + 1];
  if ( a2 == v3 )
    return 3;
  v4 = *(_DWORD *)(a2 + 412);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 1];
  v6 = v2 == -1 || off_1061BE18[4 * (this[939] & 0xFFF) + 2] != v2 >> 12 ? 0 : off_1061BE18[4 * (this[939] & 0xFFF) + 1];
  if ( v5 == v6 )
    return 3;
  else
    return sub_101A8290(this, a2);
}
