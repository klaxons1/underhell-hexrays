int __thiscall sub_10050F60(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = this[212];
  if ( (v2 & 1) != 0 && (v2 & 2) != 0 )
  {
    sub_1006DCB0(this);
  }
  else
  {
    sub_1006F910(this);
    this[212] |= 2u;
  }
  v3 = this[211];
  if ( v3 == -1 || off_1061BE18[4 * (this[211] & 0xFFF) + 2] != v3 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (this[211] & 0xFFF) + 1];
}
