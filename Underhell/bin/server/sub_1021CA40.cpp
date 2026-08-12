int __cdecl sub_1021CA40(float *a1, float *a2, int a3, float a4, float *a5, float *a6)
{
  double v7; // st7
  double v8; // st4
  double v9; // st7
  double v10; // st4
  double v11; // st5
  double v12; // st7
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  double v16; // st7
  float *v17; // eax
  int result; // eax
  float v19; // [esp+0h] [ebp-6070h]
  int v20[3]; // [esp+10h] [ebp-6060h] BYREF
  int v21; // [esp+1Ch] [ebp-6054h]
  _BYTE v22[18432]; // [esp+48h] [ebp-6028h] BYREF
  _BYTE v23[4088]; // [esp+4848h] [ebp-1828h] BYREF
  _BYTE v24[2048]; // [esp+5840h] [ebp-830h] BYREF
  float v25; // [esp+6040h] [ebp-30h]
  float v26; // [esp+6044h] [ebp-2Ch]
  float v27; // [esp+6048h] [ebp-28h]
  float v28; // [esp+604Ch] [ebp-24h]
  float v29; // [esp+6050h] [ebp-20h]
  float v30; // [esp+6054h] [ebp-1Ch]
  float v31; // [esp+605Ch] [ebp-14h]
  float v32; // [esp+6060h] [ebp-10h]
  float v33; // [esp+6064h] [ebp-Ch]
  float v34; // [esp+6068h] [ebp-8h]
  int v35; // [esp+6078h] [ebp+8h]

  sub_1021CE10(v22, 512, v23, v24);
  v32 = 100.0;
  v25 = *a1;
  v7 = a1[1];
  v20[0] = (int)&CHangRope::`vftable';
  v26 = v7;
  v27 = a1[2];
  v28 = *a2;
  v29 = a2[1];
  v30 = a2[2];
  v8 = *a2 - *a1;
  v9 = v8 * v8;
  v10 = a2[1] - a1[1];
  v11 = a2[2] - a1[2];
  v19 = v11 * v11 + v10 * v10 + v9;
  v31 = off_10689708(v19);
  v33 = a4;
  if ( a2[2] <= (double)a1[2] )
    v12 = a2[2];
  else
    v12 = a1[2];
  v34 = v12;
  sub_1021CBC0(a3);
  v13 = v21;
  v14 = 0;
  v35 = 0;
  if ( v21 > 0 )
  {
    v15 = 0;
    do
    {
      v16 = (double)v35 / (double)(v13 - 1);
      v17 = (float *)(v15 + v20[2]);
      ++v14;
      v15 += 36;
      v35 = v14;
      *v17 = (*a2 - *a1) * v16 + *a1;
      v17[1] = (a2[1] - a1[1]) * v16 + a1[1];
      v17[2] = v16 * (a2[2] - a1[2]) + a1[2];
      v17[3] = *v17;
      v17[4] = v17[1];
      v17[5] = v17[2];
      v13 = v21;
    }
    while ( v14 < v21 );
  }
  sub_1021CC20(v20);
  result = sub_1021CCA0((int)v20, 3.0);
  *a5 = v31;
  *a6 = v32;
  return result;
}
