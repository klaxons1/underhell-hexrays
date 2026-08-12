int __cdecl sub_100A7D10(int a1, float *a2)
{
  int v2; // ecx
  int result; // eax
  float *v4; // ecx

  v2 = *(_DWORD *)(a1 + 3428);
  *(_DWORD *)(a1 + 3428) = v2 + 1;
  result = v2 % 54;
  v4 = &flt_1042E5C8[3 * (v2 % 54)];
  *a2 = *v4;
  a2[1] = v4[1];
  a2[2] = v4[2];
  return result;
}
