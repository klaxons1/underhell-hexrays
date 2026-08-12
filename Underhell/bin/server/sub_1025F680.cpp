float *__cdecl sub_1025F680(float *a1, float *a2, float *a3, float *a4, char a5)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st7
  float *result; // eax
  float v14; // [esp+0h] [ebp-20h]
  float v15; // [esp+8h] [ebp-18h]
  float v16; // [esp+Ch] [ebp-14h]
  float v17; // [esp+10h] [ebp-10h]
  float v18; // [esp+14h] [ebp-Ch]
  float v19; // [esp+18h] [ebp-8h]
  float v20; // [esp+1Ch] [ebp-4h]
  float v21; // [esp+2Ch] [ebp+Ch]
  float v22; // [esp+30h] [ebp+10h]
  float v23; // [esp+30h] [ebp+10h]
  float v24; // [esp+30h] [ebp+10h]
  float v25; // [esp+34h] [ebp+14h]

  v6 = *a3 - *a2;
  v18 = v6;
  v7 = a3[1] - a2[1];
  v8 = a3[2] - a2[2];
  v9 = *a4 - *a2;
  v15 = v9;
  v10 = a4[1] - a2[1];
  v16 = v10;
  v11 = a4[2] - a2[2];
  v17 = v11;
  v25 = v10 * v7 + v9 * v6 + v11 * v8;
  v14 = v8 * v8 + v7 * v7 + v6 * v6;
  v22 = off_10689708(v14);
  v21 = v15 * v15 + v16 * v16 + v17 * v17;
  v23 = off_10689708(v21) * v22;
  v24 = off_10689708(v21) * (v25 / v23);
  v12 = off_10689714();
  if ( a5 )
  {
    if ( v24 <= v12 )
    {
      v12 = v24;
      if ( v24 < 0.0 )
        v12 = 0.0;
    }
  }
  else
  {
    v12 = v24;
  }
  result = a1;
  *a1 = v18 * v12 + *a2;
  v19 = v7;
  a1[1] = v19 * v12 + a2[1];
  v20 = v8;
  a1[2] = v12 * v20 + a2[2];
  return result;
}
