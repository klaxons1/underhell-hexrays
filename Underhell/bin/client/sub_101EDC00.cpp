float *__cdecl sub_101EDC00(float *a1, float *a2, float *a3)
{
  float *result; // eax
  _BYTE v4[48]; // [esp+8h] [ebp-30h] BYREF

  result = a1;
  if ( a1 == a3 )
  {
    qmemcpy(v4, a1, sizeof(v4));
    return (float *)sub_101EDC00(v4, a2, a3);
  }
  else if ( a2 == a3 )
  {
    qmemcpy(v4, a2, sizeof(v4));
    return (float *)sub_101EDC00(a1, v4, a3);
  }
  else
  {
    *a3 = *a1 * *a2 + a1[1] * a2[4] + a1[2] * a2[8];
    a3[1] = a1[1] * a2[5] + a2[1] * *a1 + a2[9] * a1[2];
    a3[2] = a1[1] * a2[6] + a2[2] * *a1 + a2[10] * a1[2];
    a3[3] = a1[1] * a2[7] + a2[3] * *a1 + a2[11] * a1[2] + a1[3];
    a3[4] = a1[6] * a2[8] + a1[5] * a2[4] + a1[4] * *a2;
    a3[5] = a1[6] * a2[9] + a1[5] * a2[5] + a1[4] * a2[1];
    a3[6] = a1[6] * a2[10] + a1[5] * a2[6] + a1[4] * a2[2];
    a3[7] = a2[11] * a1[6] + a1[5] * a2[7] + a1[4] * a2[3] + a1[7];
    a3[8] = a1[10] * a2[8] + a1[9] * a2[4] + *a2 * a1[8];
    a3[9] = a1[10] * a2[9] + a1[9] * a2[5] + a2[1] * a1[8];
    a3[10] = a1[10] * a2[10] + a1[9] * a2[6] + a2[2] * a1[8];
    a3[11] = a1[10] * a2[11] + a1[9] * a2[7] + a2[3] * a1[8] + a1[11];
  }
  return result;
}
