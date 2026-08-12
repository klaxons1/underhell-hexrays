float *__cdecl sub_101F27E0(float *a1, float a2, float a3, float a4, float a5)
{
  double v6; // st6
  double v7; // st6
  float v9; // [esp+4h] [ebp-40h] BYREF
  float v10; // [esp+8h] [ebp-3Ch]
  float v11; // [esp+Ch] [ebp-38h]
  float v12; // [esp+10h] [ebp-34h]
  float v13; // [esp+14h] [ebp-30h]
  float v14; // [esp+18h] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-28h]
  float v16; // [esp+20h] [ebp-24h]
  float v17; // [esp+24h] [ebp-20h]
  float v18; // [esp+28h] [ebp-1Ch]
  float v19; // [esp+2Ch] [ebp-18h]
  float v20; // [esp+30h] [ebp-14h]
  float v21; // [esp+34h] [ebp-10h]
  float v22; // [esp+38h] [ebp-Ch]
  float v23; // [esp+3Ch] [ebp-8h]
  float v24; // [esp+40h] [ebp-4h]

  memset(a1, 0, 0x40u);
  v6 = a4 * 2.0;
  *a1 = a4 / (tan(a2 * 0.008726646259971648) * v6) * 2.0;
  a1[5] = a4 / (v6 * tan(0.008726646259971648 * a3)) * 2.0;
  v7 = a4 - a5;
  a1[10] = -(a5 / v7);
  a1[14] = 1.0;
  a1[11] = a5 * a4 / v7;
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v19 = 1.0;
  v24 = 1.0;
  v9 = -1.0;
  v14 = -1.0;
  sub_101F1FF0(&v9, a1, a1);
  v9 = 1.0;
  v10 = 0.0;
  v11 = 0.0;
  v13 = 0.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v20 = 0.0;
  v14 = 1.0;
  v19 = 1.0;
  v24 = 1.0;
  v12 = 1.0;
  v16 = 1.0;
  sub_101F1FF0(&v9, a1, a1);
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v24 = 1.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v9 = 0.5;
  v14 = 0.5;
  return sub_101F1FF0(&v9, a1, a1);
}
