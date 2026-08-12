float *__cdecl sub_1013EE40(float *a1, float *a2, float a3, float a4)
{
  float *result; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st1
  double v10; // st1
  double v11; // rtt
  double v12; // st4
  double v13; // st6
  float v14; // [esp+0h] [ebp-28h]
  float v15; // [esp+18h] [ebp-10h]
  float v16; // [esp+18h] [ebp-10h]
  float v17; // [esp+18h] [ebp-10h]
  float v18; // [esp+1Ch] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+20h] [ebp-8h]
  float v21; // [esp+24h] [ebp-4h]
  float v22; // [esp+3Ch] [ebp+14h]

  result = a1;
  v5 = *a1;
  v6 = a1[1];
  v7 = *a2;
  v8 = a2[1];
  v9 = a3 * 0.25;
  v20 = v9;
  v21 = 0.25 * a4;
  v15 = v5 + 0.5;
  v18 = v6 + 0.5;
  v14 = v15 / v9;
  v10 = v18 / v21;
  v16 = v7 + 0.5;
  v17 = v16 / a3;
  v19 = (v8 + 0.5) / a4;
  v11 = (a1[3] - v6) / v21;
  v12 = (a2[3] - v8) / a4;
  v22 = v19 - v10;
  v13 = (a2[2] - v7) / a3 / ((a1[2] - v5) / v20);
  flt_1043A8B0 = v17 - v14 + v14 * (1.0 - v13);
  flt_1043A8B4 = v10 * (1.0 - v12 / v11) + v22;
  flt_1043A8B8 = v13;
  flt_1043A8BC = v12 / v11;
  return result;
}
