void *__cdecl sub_102341F0(float *a1, float *a2, int a3, int a4)
{
  void *result; // eax
  double v5; // st6
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+14h] [ebp+8h]

  v6 = a2[7];
  v7 = a2[8];
  v8 = tan(a2[6] * 0.008726646259971648);
  result = memset(a1, 0, 0x40u);
  *a1 = 1.0 / v8;
  a1[5] = 1.0 / (v8 / ((double)a3 / (double)a4));
  v5 = v6 - v7;
  a1[10] = v7 / v5;
  a1[14] = -1.0;
  a1[11] = v6 * v7 / v5;
  return result;
}
