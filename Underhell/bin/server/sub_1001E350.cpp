void __thiscall sub_1001E350(float *this, float a2)
{
  double v2; // st7

  if ( 3.4028235e38 == a2 )
    v2 = 3.4028235e38;
  else
    v2 = a2 + *(float *)(dword_106B31C8 + 12);
  if ( v2 > this[112] )
    this[112] = v2;
}
