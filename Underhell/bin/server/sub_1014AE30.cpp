float *__cdecl sub_1014AE30(float *a1, float a2, float a3)
{
  double v3; // st7
  float *result; // eax
  float v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+4h] [ebp-Ch]
  float v7; // [esp+20h] [ebp+10h]

  v7 = a3 - a2;
  v5 = (double)sub_10219A30() * 0.000030518509 * v7 + a2;
  v6 = (double)sub_10219A30() * 0.000030518509 * v7 + a2;
  v3 = (double)sub_10219A30();
  result = a1;
  *a1 = v5;
  a1[1] = v6;
  a1[2] = v3 * 0.000030518509 * v7 + a2;
  return result;
}
