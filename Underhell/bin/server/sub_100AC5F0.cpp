bool __thiscall sub_100AC5F0(float *this)
{
  double v2; // st7

  if ( *(float *)(dword_106B31C8 + 12) == this[15] )
    return 0;
  if ( this[13] >= (double)this[12] )
    v2 = this[13];
  else
    v2 = this[12];
  return v2 <= *(float *)(dword_106B31C8 + 12);
}
