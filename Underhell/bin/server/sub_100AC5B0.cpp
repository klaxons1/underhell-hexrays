bool __thiscall sub_100AC5B0(float *this)
{
  double v2; // st7

  if ( *(float *)(dword_106B31C8 + 12) == this[15] )
    return 0;
  if ( this[13] >= (double)this[11] )
    v2 = this[13];
  else
    v2 = this[11];
  return v2 <= *(float *)(dword_106B31C8 + 12);
}
