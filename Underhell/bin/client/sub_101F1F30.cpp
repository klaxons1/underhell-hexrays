float *__cdecl sub_101F1F30(float *a1, float *a2)
{
  float *result; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7

  result = a2;
  if ( a1 == a2 )
  {
    v3 = a2[1];
    a2[1] = a2[4];
    a2[4] = v3;
    v4 = a2[2];
    a2[2] = a2[8];
    a2[8] = v4;
    v5 = a2[3];
    a2[3] = a2[12];
    a2[12] = v5;
    v6 = a2[6];
    a2[6] = a2[9];
    a2[9] = v6;
    v7 = a2[7];
    a2[7] = a2[13];
    a2[13] = v7;
    v8 = a2[11];
    a2[11] = a2[14];
    a2[14] = v8;
  }
  else
  {
    *a2 = *a1;
    a2[1] = a1[4];
    a2[2] = a1[8];
    a2[3] = a1[12];
    a2[4] = a1[1];
    a2[5] = a1[5];
    a2[6] = a1[9];
    a2[7] = a1[13];
    a2[8] = a1[2];
    a2[9] = a1[6];
    a2[10] = a1[10];
    a2[11] = a1[14];
    a2[12] = a1[3];
    a2[13] = a1[7];
    a2[14] = a1[11];
    a2[15] = a1[15];
  }
  return result;
}
