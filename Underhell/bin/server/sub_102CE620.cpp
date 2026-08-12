void __thiscall sub_102CE620(int *this)
{
  unsigned int v2; // eax
  int v3; // ecx

  if ( sub_102C9B50((int)this) )
  {
    v2 = this[230];
    if ( v2 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (this[230] & 0xFFF) + 1];
    if ( (*(_BYTE *)(v3 + 3292) & 1) != 0 )
    {
      sub_102C9310((int)this);
      sub_102CDEB0(this);
      return;
    }
    sub_102C9370((int)this);
  }
  sub_102CDEB0(this);
}
