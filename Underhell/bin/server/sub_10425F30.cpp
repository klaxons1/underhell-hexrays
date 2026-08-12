float *__cdecl sub_10425F30(float *a1, float a2)
{
  float *result; // eax
  long double v3; // st7
  long double v4; // rt0
  long double v5; // st6

  result = a1;
  v3 = a2 * 0.0174532925199433;
  v4 = sin(v3);
  v5 = cos(v3);
  *a1 = v5;
  a1[1] = -v4;
  a1[2] = 0.0;
  a1[3] = 0.0;
  a1[6] = 0.0;
  a1[7] = 0.0;
  a1[8] = 0.0;
  a1[9] = 0.0;
  a1[4] = v4;
  a1[5] = v5;
  a1[10] = 1.0;
  a1[15] = 1.0;
  a1[11] = 0.0;
  a1[12] = 0.0;
  a1[13] = 0.0;
  a1[14] = 0.0;
  return result;
}
