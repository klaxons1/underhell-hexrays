int __cdecl sub_100318C0(int a1, float a2, int a3, int a4, int a5)
{
  int result; // eax
  double v6; // st4

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
  *(_DWORD *)a1 = *(_DWORD *)a5;
  v6 = a2 * a2 * a2;
  *(float *)(a1 + 20) = (v6 - 2.0 * (a2 * a2) + a2) * (*(float *)(a4 + 20) - *(float *)(a3 + 20))
                      + (v6 * 2.0 - a2 * a2 * 3.0 + 1.0) * *(float *)(a4 + 20)
                      + (a2 * a2 * 3.0 - v6 * 2.0) * *(float *)(a5 + 20)
                      + (v6 - a2 * a2) * (*(float *)(a5 + 20) - *(float *)(a4 + 20));
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a5 + 4);
  *(float *)(a1 + 8) = a2 * (*(float *)(a5 + 8) - *(float *)(a4 + 8)) + *(float *)(a4 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a5 + 12);
  *(float *)(a1 + 24) = *(float *)(a5 + 24);
  *(float *)(a1 + 28) = *(float *)(a5 + 28);
  return result;
}
