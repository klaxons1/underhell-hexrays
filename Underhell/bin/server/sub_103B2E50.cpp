int __thiscall sub_103B2E50(_DWORD *this, int a2)
{
  int v2; // edx

  if ( this[950] != -1
    && off_1061BE18[4 * (this[950] & 0xFFF) + 2] == this[950] >> 12
    && (v2 = off_1061BE18[4 * (this[950] & 0xFFF) + 1]) != 0
    && v2 == a2 )
  {
    return 1;
  }
  else
  {
    return sub_100C9AD0(this, a2);
  }
}
