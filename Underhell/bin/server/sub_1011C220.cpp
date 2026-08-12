void __cdecl sub_1011C220(float *a1, int a2, float a3, int a4, int a5, int a6, int a7, float a8)
{
  double v8; // st6
  double v9; // st5
  double v10; // st4
  int v11; // [esp+10h] [ebp-3Ch] BYREF
  float v12; // [esp+14h] [ebp-38h]
  float v13; // [esp+18h] [ebp-34h]
  int v14; // [esp+1Ch] [ebp-30h] BYREF
  float v15; // [esp+20h] [ebp-2Ch]
  float v16; // [esp+24h] [ebp-28h]
  float v17; // [esp+28h] [ebp-24h] BYREF
  float v18; // [esp+2Ch] [ebp-20h]
  float v19; // [esp+30h] [ebp-1Ch]
  float v20; // [esp+34h] [ebp-18h] BYREF
  float v21; // [esp+38h] [ebp-14h]
  float v22; // [esp+3Ch] [ebp-10h]
  float v23; // [esp+40h] [ebp-Ch] BYREF
  float v24; // [esp+44h] [ebp-8h]
  float v25; // [esp+48h] [ebp-4h]

  sub_104222B0(a2, &v23, &v17, &v20);
  v23 = v23 * a3;
  v24 = v24 * a3;
  v25 = v25 * a3;
  v8 = v17 * a3;
  v17 = v8;
  v9 = v18 * a3;
  v18 = v9;
  v10 = v19 * a3;
  v19 = v10;
  v20 = v20 * a3;
  v21 = v21 * a3;
  v22 = a3 * v22;
  *(float *)&v14 = *a1 - v8;
  v15 = a1[1] - v9;
  v16 = a1[2] - v10;
  *(float *)&v11 = v8 + *a1;
  v12 = v9 + a1[1];
  v13 = v10 + a1[2];
  sub_1011BC50((float *)&v11, (float *)&v14, a4, a5, a6, a7, a8);
  *(float *)&v11 = *a1 - v23;
  v12 = a1[1] - v24;
  v13 = a1[2] - v25;
  *(float *)&v14 = v23 + *a1;
  v15 = v24 + a1[1];
  v16 = v25 + a1[2];
  sub_1011BC50((float *)&v14, (float *)&v11, a4, a5, a6, a7, a8);
  *(float *)&v11 = *a1 - v20;
  v12 = a1[1] - v21;
  v13 = a1[2] - v22;
  *(float *)&v14 = v20 + *a1;
  v15 = v21 + a1[1];
  v16 = v22 + a1[2];
  sub_1011BC50((float *)&v14, (float *)&v11, a4, a5, a6, a7, a8);
}
