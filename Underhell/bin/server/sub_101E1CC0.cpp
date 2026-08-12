float *__thiscall sub_101E1CC0(int this, float *a2, int a3)
{
  float *result; // eax

  result = a2;
  *(float *)(this + 3248) = *a2;
  *(float *)(this + 3252) = a2[1];
  *(float *)(this + 3256) = a2[2];
  *(_DWORD *)(this + 3264) = 1;
  return result;
}
