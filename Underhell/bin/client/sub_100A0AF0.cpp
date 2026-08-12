float *__stdcall sub_100A0AF0(float *a1, int a2)
{
  double v3; // st7
  int v4; // edx
  float *result; // eax
  float v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+18h] [ebp+Ch]

  v3 = 1.0 - *(float *)(a2 + 44) / *(float *)(a2 + 40);
  v6 = v3;
  sub_101EE8A0(v6, 0.25);
  v4 = *(unsigned __int8 *)(a2 + 50);
  result = a1;
  v7 = *(unsigned __int8 *)(a2 + 49);
  *a1 = (double)*(unsigned __int8 *)(a2 + 48) * v3 * 0.0039215689;
  a1[1] = (double)v7 * v3 * 0.0039215689;
  a1[2] = v3 * (double)v4 * 0.0039215689;
  return result;
}
