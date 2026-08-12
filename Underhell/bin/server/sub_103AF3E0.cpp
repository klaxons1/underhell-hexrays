float *__thiscall sub_103AF3E0(int this, float *a2)
{
  float *result; // eax

  sub_100BF1B0((void *)this, "biggun", (int)a2, 0, 0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *a2 = *(float *)(this + 580);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  result = a2;
  a2[1] = *(float *)(this + 584);
  return result;
}
