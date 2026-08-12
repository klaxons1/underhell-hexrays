float *__thiscall sub_100F2BA0(float *this, int a2)
{
  float *result; // eax

  sub_100F2A50(this, a2);
  this[63] = 16.0;
  *(_DWORD *)this = &CSimpleEmitter::`vftable';
  result = this;
  this[64] = 64.0;
  return result;
}
