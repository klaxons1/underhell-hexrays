float *__cdecl sub_101F0AB0(float *a1, float *a2)
{
  float *result; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // st5

  result = a2;
  if ( a1 == a2 )
  {
    v3 = a2[1];
    a2[1] = a2[4];
    a2[4] = v3;
    v4 = a2[2];
    a2[2] = a2[8];
    a2[8] = v4;
    v5 = a2[6];
    a2[6] = a2[9];
    a2[9] = v5;
  }
  else
  {
    *a2 = *a1;
    a2[1] = a1[4];
    a2[2] = a1[8];
    a2[4] = a1[1];
    a2[5] = a1[5];
    a2[6] = a1[9];
    a2[8] = a1[2];
    a2[9] = a1[6];
    a2[10] = a1[10];
  }
  v6 = a1[3];
  v7 = a1[7];
  v8 = a1[11];
  a2[3] = -(a2[1] * v7 + *a2 * v6 + v8 * a2[2]);
  a2[7] = -(a2[6] * v8 + a2[5] * v7 + a2[4] * v6);
  a2[11] = -(v6 * a2[8] + v7 * a2[9] + v8 * a2[10]);
  return result;
}
