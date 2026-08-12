_DWORD *__thiscall sub_10042370(_DWORD *this, int a2, int a3, float a4, int a5, int a6)
{
  _DWORD *result; // eax
  int v7; // edx

  result = this;
  *this = a2;
  this[1] = dword_1060887C;
  this[2] = dword_10608880;
  v7 = dword_10608884;
  *((float *)this + 8) = a4;
  this[3] = v7;
  *((float *)this + 9) = -1.0;
  this[4] = -1;
  this[5] = a3;
  this[6] = -1;
  this[7] = -1;
  this[10] = a5;
  this[11] = a6;
  return result;
}
