float *__thiscall sub_10137070(int this)
{
  int v1; // eax
  float *result; // eax

  v1 = *(_DWORD *)(this + 44);
  if ( v1 != 5 && v1 != 7 )
    return (float *)(this + 56);
  if ( (dword_1043A0D0 & 1) == 0 )
    dword_1043A0D0 |= 1u;
  result = &flt_1043A0C4;
  flt_1043A0C4 = *(float *)(this + 176) * 0.5 + *(float *)(this + 56);
  flt_1043A0C8 = *(float *)(this + 180) * 0.5 + *(float *)(this + 60);
  flt_1043A0CC = 0.5 * *(float *)(this + 184) + *(float *)(this + 64);
  return result;
}
