float *__stdcall sub_1037ECC0(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  float *result; // eax
  double v10; // st3
  double v11; // st4
  float v12; // [esp+8h] [ebp-24h]
  float v13; // [esp+Ch] [ebp-20h]
  float v14; // [esp+18h] [ebp-14h]
  float v15; // [esp+1Ch] [ebp-10h]
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+24h] [ebp-8h]
  float v18; // [esp+28h] [ebp-4h]

  v5 = *a1 * *a3 + a3[1] * a1[1] + a3[2] * a1[2];
  v6 = *a1 * *a4 + a4[1] * a1[1] + a4[2] * a1[2];
  v7 = *a1 * *a5 + a1[1] * a5[1] + a1[2] * a5[2];
  if ( v5 <= 0.0 )
  {
    if ( flt_10675178 >= v5 )
      v5 = flt_10675178;
  }
  else if ( flt_1067516C <= v5 )
  {
    v5 = flt_1067516C;
  }
  if ( v6 <= 0.0 )
  {
    if ( flt_1067517C >= v6 )
      v6 = flt_1067517C;
  }
  else if ( flt_10675170 <= v6 )
  {
    v6 = flt_10675170;
  }
  if ( v7 <= 0.0 )
  {
    v8 = flt_10675180;
    if ( flt_10675180 < v7 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v8 = flt_10675174;
  if ( flt_10675174 <= v7 )
LABEL_13:
    v7 = v8;
LABEL_15:
  result = a2;
  v14 = a4[1] * v6;
  v15 = a4[2] * v6;
  v16 = *a3 * v5;
  v17 = a3[1] * v5;
  v18 = a3[2] * v5;
  v12 = *a4 * v6 + v16;
  v13 = v17 + v14;
  v10 = v7 * a5[1] + v13;
  v11 = v7 * a5[2] + v18 + v15;
  *a1 = *a5 * v7 + v12;
  a1[1] = v10;
  a1[2] = v11;
  *a2 = v5;
  a2[1] = v6;
  a2[2] = v7;
  return result;
}
