float *__stdcall sub_10138AE0(int a1, int a2)
{
  float *result; // eax
  double v3; // st6
  double v4; // st7

  result = (float *)a2;
  *(float *)(a1 + 60) = *(float *)(a2 + 20);
  *(float *)(a1 + 64) = *(float *)(a2 + 24);
  *(float *)(a1 + 68) = *(float *)(a2 + 28);
  *(float *)(a1 + 72) = *(float *)(a2 + 32);
  *(float *)(a1 + 76) = *(float *)(a2 + 36);
  *(float *)(a1 + 80) = *(float *)(a2 + 40);
  v3 = result[9] - result[6];
  v4 = result[10] - result[7];
  *(float *)(a1 + 180) = *(float *)(a2 + 32) - *(float *)(a2 + 20);
  *(float *)(a1 + 184) = v3;
  *(float *)(a1 + 188) = v4;
  *(float *)(a1 + 248) = (float)*(int *)(a2 + 92);
  *(float *)(a1 + 244) = *(float *)(a2 + 96);
  *(_DWORD *)(a1 + 52) |= *(_DWORD *)(a2 + 120);
  *(float *)(a1 + 224) = *(float *)(a2 + 100);
  *(float *)(a1 + 228) = *(float *)(a2 + 104);
  *(float *)(a1 + 232) = *(float *)(a2 + 108);
  return result;
}
