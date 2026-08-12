void __thiscall sub_103280A0(float *this, float a2)
{
  double v2; // st6

  v2 = a2;
  if ( 0.0 != this[912] )
    this[906] = sin((*(float *)(dword_106B31C8 + 12) + 1.0) * this[912]) * v2 + this[906];
  if ( 0.0 != this[913] )
    this[907] = cos((*(float *)(dword_106B31C8 + 12) + 1.0) * this[913]) * v2 + this[907];
  if ( this[914] != 0.0 )
    this[908] = this[908] - v2 * cos((*(float *)(dword_106B31C8 + 12) + 1.0) * this[914]);
}
