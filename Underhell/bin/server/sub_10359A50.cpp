void __thiscall sub_10359A50(_DWORD *this, int a2)
{
  if ( this[1044] == -1
    || off_1061BE18[4 * (this[1044] & 0xFFF) + 2] != this[1044] >> 12
    || !off_1061BE18[4 * (this[1044] & 0xFFF) + 1] )
  {
    sub_100C97B0(this, a2);
  }
}
