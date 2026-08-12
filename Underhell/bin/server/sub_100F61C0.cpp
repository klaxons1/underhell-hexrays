_DWORD *__thiscall sub_100F61C0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // edx
  int v3; // esi
  _BYTE v5[48]; // [esp+4h] [ebp-60h] BYREF
  _BYTE v6[48]; // [esp+34h] [ebp-30h] BYREF

  v1 = this[77];
  if ( v1 == -1 )
    return this + 812;
  v2 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1];
  if ( off_1061BE18[4 * (this[77] & 0xFFF) + 2] != v1 >> 12 )
    return this + 812;
  v3 = *v2;
  if ( !*v2 )
    return this + 812;
  sub_104227F0(this + 812, v6);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  sub_10421E30(v3 + 500, v6, v5);
  if ( (dword_10699194 & 1) == 0 )
    dword_10699194 |= 1u;
  sub_10421A90(v5, &unk_10699188);
  return &unk_10699188;
}
