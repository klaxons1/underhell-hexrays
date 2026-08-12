int __cdecl sub_100317A0(int a1, float a2, int a3, int a4)
{
  int result; // eax

  result = a1;
  *(float *)(a1 + 4) = 0.0;
  *(float *)(a1 + 8) = 0.0;
  *(float *)(a1 + 16) = 1.0;
  *(float *)(a1 + 20) = 0.0;
  *(_DWORD *)a1 = 0;
  *(float *)(a1 + 4) = 0.0;
  *(float *)(a1 + 8) = 0.0;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = 0.0;
  *(float *)(a1 + 24) = 0.0;
  *(float *)(a1 + 28) = 0.0;
  *(_DWORD *)a1 = *(_DWORD *)a4;
  *(float *)(a1 + 20) = (*(float *)(a4 + 20) - *(float *)(a3 + 20)) * a2 + *(float *)(a3 + 20);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a4 + 4);
  *(float *)(a1 + 8) = a2 * (*(float *)(a4 + 8) - *(float *)(a3 + 8)) + *(float *)(a3 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a4 + 12);
  *(float *)(a1 + 24) = *(float *)(a4 + 24);
  *(float *)(a1 + 28) = *(float *)(a4 + 28);
  return result;
}
