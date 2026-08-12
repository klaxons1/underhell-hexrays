float *__thiscall sub_103ABDA0(int this, float *a2, float a3, float a4, float a5)
{
  float *result; // eax
  double v7; // st6
  double v8; // st7

  sub_100BD6D0((void *)this, 1, (int)a2, 0, 0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  result = a2;
  v7 = a2[2] - *(float *)(this + 588) + a5;
  v8 = a2[1] - *(float *)(this + 584) + a4;
  *a2 = *a2 - *(float *)(this + 580) + a3;
  a2[1] = v8;
  a2[2] = v7;
  return result;
}
