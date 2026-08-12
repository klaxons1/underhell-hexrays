void __cdecl sub_1011CB60(float *a1, int a2, float a3, int a4, float a5)
{
  double v5; // st5
  double v6; // st7
  double v7; // st3
  double v8; // st6
  double v9; // st4
  double v10; // st6
  int v11; // [esp+Ch] [ebp-24h] BYREF
  float v12; // [esp+10h] [ebp-20h]
  float v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h] BYREF
  float v15; // [esp+1Ch] [ebp-14h]
  float v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+24h] [ebp-Ch] BYREF
  float v18; // [esp+28h] [ebp-8h]
  float v19; // [esp+2Ch] [ebp-4h]

  sub_104222B0(a2, &v17, &v14, &v11);
  v5 = v18 * a3 + a1[1];
  v6 = v19 * a3 + a1[2];
  *(float *)&v17 = *(float *)&v17 * a3 + *a1;
  v18 = v5;
  v19 = v6;
  v7 = a1[1];
  v8 = a1[2] - v16 * a3;
  *(float *)&v14 = *a1 - *(float *)&v14 * a3;
  v15 = v7 - v15 * a3;
  v16 = v8;
  v9 = a1[2];
  v10 = v12 * a3 + a1[1];
  *(float *)&v11 = *(float *)&v11 * a3 + *a1;
  v12 = v10;
  v13 = a3 * v13 + v9;
  sub_1011BC50(a1, (float *)&v17, 255, 0, 0, a4, a5);
  sub_1011BC50(a1, (float *)&v14, 0, 255, 0, a4, a5);
  sub_1011BC50(a1, (float *)&v11, 0, 0, 255, a4, a5);
}
