int __thiscall sub_1004C590(_DWORD *this, int a2)
{
  int v3; // eax
  unsigned int v4; // eax

  v3 = this[212];
  if ( (v3 & 1) != 0 && (v3 & 2) != 0 )
  {
    sub_1006DCB0();
  }
  else
  {
    sub_1006F910();
    this[212] |= 2u;
  }
  if ( this[209] <= a2 )
    return 0;
  v4 = *(_DWORD *)(this[206] + 4 * a2);
  if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * a2) & 0xFFF) + 1];
}
