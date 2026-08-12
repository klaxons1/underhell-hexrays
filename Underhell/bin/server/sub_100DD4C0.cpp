float *__thiscall sub_100DD4C0(int this, int a2, float *a3, float *a4)
{
  float *result; // eax

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *a3 = *(float *)(this + 580);
  a3[1] = *(float *)(this + 584);
  a3[2] = *(float *)(this + 588);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  result = a4;
  *a4 = *(float *)(this + 704);
  a4[1] = *(float *)(this + 708);
  a4[2] = *(float *)(this + 712);
  return result;
}
