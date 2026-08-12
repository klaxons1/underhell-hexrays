float *__stdcall sub_100F2F60(float *a1, int a2)
{
  int v2; // ecx
  float *result; // eax
  double v4; // st7
  double v5; // st6
  int v6; // [esp+Ch] [ebp+Ch]

  v2 = *(unsigned __int8 *)(a2 + 50);
  result = a1;
  v4 = 1.0 - *(float *)(a2 + 44) / *(float *)(a2 + 40);
  v5 = (double)*(unsigned __int8 *)(a2 + 48);
  v6 = *(unsigned __int8 *)(a2 + 49);
  *a1 = v5 * v4 * 0.0039215689;
  a1[1] = (double)v6 * v4 * 0.0039215689;
  a1[2] = v4 * (double)v2 * 0.0039215689;
  return result;
}
