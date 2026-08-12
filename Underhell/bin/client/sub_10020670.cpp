char __cdecl sub_10020670(int a1, int a2, int a3, float *a4, int a5)
{
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st7
  double v12; // st7
  float v13; // [esp+0h] [ebp-4Ch]
  float v14; // [esp+0h] [ebp-4Ch]
  float v15; // [esp+0h] [ebp-4Ch]
  float v16[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v17; // [esp+1Ch] [ebp-30h]
  float v18; // [esp+20h] [ebp-2Ch]
  float v19; // [esp+24h] [ebp-28h]
  float v20; // [esp+28h] [ebp-24h] BYREF
  float v21; // [esp+2Ch] [ebp-20h]
  float v22; // [esp+30h] [ebp-1Ch]
  float v23; // [esp+34h] [ebp-18h] BYREF
  float v24; // [esp+38h] [ebp-14h]
  float v25; // [esp+3Ch] [ebp-10h]
  float v26; // [esp+40h] [ebp-Ch] BYREF
  float v27; // [esp+44h] [ebp-8h]
  float v28; // [esp+48h] [ebp-4h]
  float v29; // [esp+54h] [ebp+8h]
  float v30; // [esp+64h] [ebp+18h]

  sub_101EDA00(a5 + 48 * a1, 3, &v23);
  sub_101EDA00(a5 + 48 * a2, 3, &v20);
  sub_101EDA00(a5 + 48 * a3, 3, &v26);
  v7 = v20 - v23;
  v17 = v7;
  v8 = v21 - v24;
  v18 = v8;
  v9 = v22 - v25;
  v19 = v9;
  v13 = v7 * v7 + v8 * v8 + v9 * v9;
  v30 = off_103EDFE0(v13);
  v14 = (v26 - v20) * (v26 - v20) + (v27 - v21) * (v27 - v21) + (v28 - v22) * (v28 - v22);
  v29 = off_103EDFE0(v14);
  v15 = (v26 - v23) * (v26 - v23) + (v27 - v24) * (v27 - v24) + (v28 - v25) * (v28 - v25);
  v10 = off_103EDFE0(v15);
  if ( (v29 + v30) * 0.9998 < v10 )
    return 0;
  v12 = v30 / v10;
  v16[0] = v17 - (v26 - v23) * v12;
  v16[1] = v18 - (v27 - v24) * v12;
  v16[2] = v19 - v12 * (v28 - v25);
  off_103EDFEC();
  return sub_1001FDD0(a1, a2, a3, a4, &v20, v16, a5);
}
