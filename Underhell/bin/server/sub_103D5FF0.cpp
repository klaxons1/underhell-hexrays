int __thiscall sub_103D5FF0(_DWORD *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax

  if ( this[288] )
  {
    sub_1025FAC0(this[288]);
    this[288] = 0;
  }
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( (this[64] & 0x10000000) != 0 )
    {
      v2 = this[292];
      if ( v2 != -1
        && off_1061BE18[4 * (this[292] & 0xFFF) + 2] == v2 >> 12
        && off_1061BE18[4 * (this[292] & 0xFFF) + 1] )
      {
        v3 = (_DWORD *)sub_100F8C20(this);
        sub_103D5D90(v3, this);
        sub_103D3C20(this);
      }
    }
  }
  return sub_100E20F0(this);
}
