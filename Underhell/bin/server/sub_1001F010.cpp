float *__cdecl sub_1001F010(float *a1, float a2, float a3)
{
  double v3; // st7
  float *result; // eax
  float v5; // [esp+14h] [ebp+10h]

  v5 = a3 - a2;
  *a1 = (double)sub_10219A30() * 0.000030518509 * v5 + a2;
  a1[1] = (double)sub_10219A30() * 0.000030518509 * v5 + a2;
  v3 = (double)sub_10219A30();
  result = a1;
  a1[2] = v3 * 0.000030518509 * v5 + a2;
  return result;
}
