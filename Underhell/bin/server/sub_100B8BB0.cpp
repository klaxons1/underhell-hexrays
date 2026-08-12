float *__thiscall sub_100B8BB0(float *this)
{
  float *result; // eax

  result = this;
  this[3] = 0.0;
  this[5] = 0.0;
  *((_WORD *)this + 3) = 1;
  this[6] = 0.0;
  *((_DWORD *)this + 2) = 65537;
  *this = -1.0;
  *((_BYTE *)this + 4) = 0;
  *((_BYTE *)this + 28) = 0;
  return result;
}
