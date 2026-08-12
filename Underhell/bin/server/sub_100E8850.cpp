float *__thiscall sub_100E8850(int this, float *a2)
{
  float *result; // eax

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  result = a2;
  *a2 = *(float *)(this + 744) + *(float *)(this + 580);
  a2[1] = *(float *)(this + 748) + *(float *)(this + 584);
  a2[2] = *(float *)(this + 752) + *(float *)(this + 588);
  return result;
}
