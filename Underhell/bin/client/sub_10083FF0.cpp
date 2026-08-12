double __stdcall sub_10083FF0(int a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st1
  double v13; // st3
  double v14; // st1
  double v15; // st1
  double v16; // st3
  double v17; // st2
  double v18; // st6
  float v20; // [esp+0h] [ebp-18h]
  float v21; // [esp+Ch] [ebp-Ch]
  float v22; // [esp+10h] [ebp-8h]
  float v23; // [esp+14h] [ebp-4h]

  v21 = (*a2 + *a3) * 0.5;
  v22 = (a2[1] + a3[1]) * 0.5;
  v23 = 0.5 * (a3[2] + a2[2]);
  v6 = a3[1] - a2[1];
  v7 = v6 * v6;
  v8 = *a3 - *a2;
  v9 = v7;
  v10 = a3[2] - a2[2];
  v20 = v8 * v8 + v9 + v10 * v10;
  v11 = off_103EDFE0(v20) * 0.5;
  if ( *a4 <= 0.0 )
    v12 = *a3;
  else
    v12 = *a2;
  v13 = v12 * *a4 - (a4[2] * v23 + *a4 * v21 + a4[1] * v22);
  v14 = a4[1];
  if ( v14 <= 0.0 )
    v15 = v14 * a3[1];
  else
    v15 = v14 * a2[1];
  v16 = v13 + v15;
  if ( a4[2] <= 0.0 )
    v17 = a3[2] * a4[2];
  else
    v17 = a4[2] * a2[2];
  v18 = (v16 + v17) * a5;
  *a6 = v21 + *a4 * v18;
  a6[1] = v22 + a4[1] * v18;
  a6[2] = v23 + a4[2] * v18;
  return v11 - v18;
}
