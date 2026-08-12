char __cdecl sub_101759C0(float *a1, float *a2, float a3, float *a4)
{
  double v4; // st7
  double v5; // st5
  double v6; // st4
  double v7; // st6
  double v8; // st1
  long double v9; // st2
  double v10; // st3
  long double v12; // st2
  long double v13; // rt1
  double v14; // st1
  double v15; // rt1
  double v16; // st5
  float v17; // [esp+8h] [ebp-24h] BYREF
  float v18; // [esp+Ch] [ebp-20h]
  float v19; // [esp+10h] [ebp-1Ch]
  float v20; // [esp+14h] [ebp-18h] BYREF
  float v21; // [esp+18h] [ebp-14h]
  float v22; // [esp+1Ch] [ebp-10h]
  float v23; // [esp+20h] [ebp-Ch]
  float v24; // [esp+24h] [ebp-8h]
  float v25; // [esp+28h] [ebp-4h]

  if ( sub_101758F0(a1, a2, &v20, &v17) )
    return 0;
  v4 = v19;
  v5 = v21;
  v6 = v18;
  v7 = v22;
  v23 = v19 * v21 - v18 * v22;
  v8 = v22 * v17 - v19 * v20;
  v24 = v8;
  v25 = v20 * v18 - v21 * v17;
  v9 = v8 * v8 + v23 * v23 + v25 * v25;
  v10 = v17;
  if ( v9 < 0.001 )
    return 0;
  v12 = a3 * 0.5 / sqrt(v9);
  v24 = v24 * v12;
  v13 = v23 * v12;
  v25 = v12 * v25;
  *a4 = v10 - v13;
  a4[1] = v6 - v24;
  v14 = v25;
  a4[2] = v4 - v25;
  a4[3] = v13 + v10;
  a4[4] = v6 + v24;
  v15 = v5;
  a4[5] = v4 + v14;
  v16 = v20;
  a4[6] = *a4 + v20;
  a4[7] = a4[1] + v15;
  a4[8] = a4[2] + v7;
  a4[9] = v16 + a4[3];
  a4[10] = v15 + a4[4];
  a4[11] = v7 + a4[5];
  return 1;
}
