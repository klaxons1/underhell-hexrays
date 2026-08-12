int __thiscall sub_101F5600(_DWORD *this, int a2, int a3)
{
  int result; // eax
  float *v4; // esi
  double v5; // st7

  result = a3;
  v4 = (float *)this[4];
  v5 = (double)(a3 - this[3]);
  this[3] = a3;
  *v4 = pow(1.009999990463257, v5 * 0.2) * *v4;
  return result;
}
