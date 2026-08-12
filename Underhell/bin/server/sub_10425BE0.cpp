float *__cdecl sub_10425BE0(float *a1, float *a2, float *a3)
{
  float *v3; // edx
  float *result; // eax
  _BYTE v5[64]; // [esp+10h] [ebp-80h] BYREF
  _BYTE v6[64]; // [esp+50h] [ebp-40h] BYREF

  v3 = (float *)v5;
  if ( a1 != a3 )
    v3 = a1;
  result = (float *)v6;
  if ( a2 != a3 )
    result = a2;
  if ( a1 == a3 && a1 != (float *)v5 )
    qmemcpy(v5, a1, sizeof(v5));
  if ( a2 == a3 && a2 != (float *)v6 )
    qmemcpy(v6, a2, sizeof(v6));
  *a3 = v3[3] * result[12] + *result * *v3 + v3[2] * result[8] + v3[1] * result[4];
  a3[1] = v3[3] * result[13] + *v3 * result[1] + v3[2] * result[9] + v3[1] * result[5];
  a3[2] = result[6] * v3[1] + v3[3] * result[14] + result[2] * *v3 + v3[2] * result[10];
  a3[3] = result[7] * v3[1] + *v3 * result[3] + v3[3] * result[15] + result[11] * v3[2];
  a3[4] = v3[7] * result[12] + *result * v3[4] + v3[6] * result[8] + result[4] * v3[5];
  a3[5] = v3[7] * result[13] + v3[6] * result[9] + result[5] * v3[5] + result[1] * v3[4];
  a3[6] = result[6] * v3[5] + v3[7] * result[14] + v3[6] * result[10] + result[2] * v3[4];
  a3[7] = result[7] * v3[5] + v3[7] * result[15] + v3[6] * result[11] + v3[4] * result[3];
  a3[8] = v3[11] * result[12] + *result * v3[8] + v3[10] * result[8] + result[4] * v3[9];
  a3[9] = v3[11] * result[13] + v3[10] * result[9] + result[5] * v3[9] + result[1] * v3[8];
  a3[10] = result[6] * v3[9] + v3[11] * result[14] + v3[10] * result[10] + result[2] * v3[8];
  a3[11] = result[7] * v3[9] + v3[11] * result[15] + v3[10] * result[11] + v3[8] * result[3];
  a3[12] = v3[15] * result[12] + *result * v3[12] + result[4] * v3[13] + v3[14] * result[8];
  a3[13] = v3[14] * result[9] + v3[15] * result[13] + result[5] * v3[13] + result[1] * v3[12];
  a3[14] = result[6] * v3[13] + v3[15] * result[14] + result[2] * v3[12] + v3[14] * result[10];
  a3[15] = result[7] * v3[13] + v3[15] * result[15] + v3[14] * result[11] + v3[12] * result[3];
  return result;
}
