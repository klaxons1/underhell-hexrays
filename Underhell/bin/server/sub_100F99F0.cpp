int __thiscall sub_100F99F0(_DWORD *this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _BYTE v6[48]; // [esp+4h] [ebp-3Ch] BYREF
  float v7[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = this[77];
  if ( v3 == -1 )
    return sub_100E10C0((int)this, a2);
  v4 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    return sub_100E10C0((int)this, a2);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10424F80(this + 125, v6);
  sub_10421B40(a2, v6, v7);
  return sub_100E10C0((int)this, v7);
}
