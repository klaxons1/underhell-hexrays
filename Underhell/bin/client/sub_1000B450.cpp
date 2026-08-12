float *__thiscall sub_1000B450(float *this)
{
  float *result; // eax

  result = this;
  this[1] = 1.0;
  *this = 0.0;
  *((_DWORD *)this + 2) = 100;
  *((_DWORD *)this + 3) = 100;
  *((_DWORD *)this + 4) = 100;
  *((_DWORD *)this + 5) = 75;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 24) = 0;
  this[7] = 0.0;
  this[40] = 0.0;
  return result;
}
