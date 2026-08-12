char __thiscall sub_100344F0(void *this, int a2, float *a3)
{
  float *v3; // eax
  double v4; // st7
  char result; // al

  v3 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
  *a3 = *v3;
  a3[1] = v3[1];
  v4 = v3[2];
  result = 1;
  a3[2] = v4;
  return result;
}
