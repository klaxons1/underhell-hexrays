float *__thiscall sub_10369160(void *this, float *a2)
{
  float *v2; // eax
  double v3; // st7
  float *result; // eax

  v2 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
  *a2 = *v2;
  a2[1] = v2[1];
  v3 = v2[2];
  result = a2;
  a2[2] = v3 - 12.0;
  return result;
}
