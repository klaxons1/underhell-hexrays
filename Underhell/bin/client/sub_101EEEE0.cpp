float *__cdecl sub_101EEEE0(float *a1, float a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  float v5[3]; // [esp+0h] [ebp-10h] BYREF
  float v6; // [esp+Ch] [ebp-4h]

  LODWORD(v5[2]) = v5;
  LODWORD(v5[1]) = &a2;
  v6 = a2 * 0.017453292 * 0.5;
  v5[0] = cos(v6);
  a2 = sin(v6);
  result = a3;
  v4 = a2;
  *a3 = *a1 * a2;
  result[1] = a1[1] * v4;
  result[2] = v4 * a1[2];
  result[3] = v5[0];
  return result;
}
