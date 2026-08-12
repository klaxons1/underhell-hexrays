float *__thiscall sub_100F19A0(float *this, float *a2, float *a3)
{
  float *v4; // eax
  float *result; // eax

  v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 4))(this);
  *a2 = this[1506] - *v4;
  a2[1] = this[1507] - v4[1];
  a2[2] = this[1508] - v4[2];
  result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 4))(this);
  *a3 = this[1509] - *result;
  a3[1] = this[1510] - result[1];
  a3[2] = this[1511] - result[2];
  return result;
}
