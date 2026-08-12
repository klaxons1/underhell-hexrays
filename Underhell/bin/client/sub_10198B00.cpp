float *__thiscall sub_10198B00(char *this, float *a2, float *a3)
{
  float *v4; // eax
  float *result; // eax

  sub_101EE690(a2, a3);
  sub_101EE6C0(this + 28, a2, a3);
  sub_101EE6C0(this + 44, a2, a3);
  v4 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 4))(this);
  *a2 = *a2 - *v4;
  a2[1] = a2[1] - v4[1];
  a2[2] = a2[2] - v4[2];
  result = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 4))(this);
  *a3 = *a3 - *result;
  a3[1] = a3[1] - result[1];
  a3[2] = a3[2] - result[2];
  return result;
}
