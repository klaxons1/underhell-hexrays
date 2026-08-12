float *__cdecl sub_10060BE0(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float *result; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  double v10; // rt0
  double v11; // st4
  float v12; // [esp+Ch] [ebp-14h]
  float v13; // [esp+10h] [ebp-10h]
  float v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+14h] [ebp-Ch]
  float v16; // [esp+18h] [ebp-8h]
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]

  result = a5;
  v14 = *a1 * -1.0;
  v16 = a1[1] * -1.0;
  v18 = a1[2] * -1.0;
  v6 = -3.0 * a3[2] + 3.0 * a2[2] + v18 + a4[2];
  v7 = (a3[1] * -3.0 + a2[1] * 3.0 + v16 + a4[1]) * 0.5;
  *a5 = (*a3 * -3.0 + *a2 * 3.0 + v14 + *a4) * 0.5;
  a5[1] = v7;
  a5[2] = v6 * 0.5;
  v12 = a2[1] * -5.0;
  v13 = -5.0 * a2[2];
  v15 = *a1 * 2.0;
  v17 = a1[1] * 2.0;
  v8 = a3[1] * 4.0 + v17 + v12 - a4[1];
  v9 = 4.0 * a3[2] + 2.0 * a1[2] + v13 - a4[2];
  a5[3] = (*a3 * 4.0 + *a2 * -5.0 + v15 - *a4) * 0.5;
  a5[4] = v8 * 0.5;
  a5[5] = v9 * 0.5;
  v10 = a1[1] * -1.0 + a3[1];
  v11 = -1.0 * a1[2] + a3[2];
  a5[6] = (*a1 * -1.0 + *a3) * 0.5;
  a5[7] = v10 * 0.5;
  a5[8] = 0.5 * v11;
  a5[9] = *a2;
  a5[10] = a2[1];
  a5[11] = a2[2];
  return result;
}
