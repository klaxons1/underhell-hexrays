void __thiscall sub_102A2440(float *this, float a2)
{
  double v2; // st7

  if ( *(float *)(dword_106B31C8 + 12) <= (double)this[53] )
    v2 = a2 + this[53];
  else
    v2 = *(float *)(dword_106B31C8 + 12) + a2;
  this[53] = v2;
}
