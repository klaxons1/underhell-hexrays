float *__thiscall sub_1000E860(float *this, float *a2)
{
  float *v3; // eax
  double v4; // st7
  float *result; // eax

  v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  *a2 = this[55] + *v3;
  a2[1] = this[56] + v3[1];
  v4 = this[57] + v3[2];
  result = a2;
  a2[2] = v4;
  return result;
}
