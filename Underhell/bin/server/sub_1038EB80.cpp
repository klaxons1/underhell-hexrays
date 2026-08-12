int __thiscall sub_1038EB80(_DWORD *this)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx

  if ( (this[62] & 0x800000) == 0 )
  {
    v2 = this[1105];
    if ( (v2 == -1
       || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v2 >> 12
       || !off_1061BE18[4 * (this[1105] & 0xFFF) + 1])
      && (int)this[1044] >= 1
      && sub_1004AFF0(this, 10) )
    {
      return 94;
    }
  }
  v4 = this[1106];
  if ( v4 == -1
    || off_1061BE18[4 * (this[1106] & 0xFFF) + 2] != v4 >> 12
    || !off_1061BE18[4 * (this[1106] & 0xFFF) + 1]
    || !sub_10389B80(this) )
  {
    return 91;
  }
  v5 = this[1106];
  if ( v5 == -1 || off_1061BE18[4 * (this[1106] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (this[1106] & 0xFFF) + 1];
  sub_100218B0(this, v6);
  this[1106] = -1;
  return 120;
}
