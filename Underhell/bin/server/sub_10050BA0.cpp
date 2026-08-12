void __thiscall sub_10050BA0(float *this, float a2)
{
  double v2; // st7

  if ( -1.0 == a2 )
    v2 = *(float *)(dword_106B31C8 + 12) + this[1];
  else
    v2 = a2 + *(float *)(dword_106B31C8 + 12);
  *this = v2;
}
