int __cdecl sub_10157490(int a1, float *a2)
{
  int v2; // ecx
  int result; // eax
  float *v4; // ecx

  v2 = *(_DWORD *)(a1 + 2176);
  *(_DWORD *)(a1 + 2176) = v2 + 1;
  result = v2 % 54;
  v4 = &flt_106B3A08[3 * (v2 % 54)];
  *a2 = *v4;
  a2[1] = v4[1];
  a2[2] = v4[2];
  return result;
}
