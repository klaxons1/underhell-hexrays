float *__thiscall sub_1036A3D0(int this, float *a2, int a3, int a4)
{
  float *result; // eax

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  result = a2;
  *a2 = *(float *)(this + 580);
  a2[1] = *(float *)(this + 584);
  a2[2] = *(float *)(this + 588) + 6.0;
  return result;
}
