void __cdecl sub_1011C000(float *a1, float *a2, float *a3, int a4, int a5, int a6, int a7, float a8)
{
  double v8; // st7
  double v9; // st7
  double v10; // st7
  int v11; // [esp+10h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-14h]
  float v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  float v15; // [esp+20h] [ebp-8h]
  float v16; // [esp+24h] [ebp-4h]

  *(float *)&v11 = *a2 + *a1;
  v12 = a2[1] + a1[1];
  v13 = a2[2] + a1[2];
  *(float *)&v14 = *a3 + *a1;
  v15 = a3[1] + a1[1];
  v16 = a3[2] + a1[2];
  sub_1011BC50((float *)&v11, (float *)&v14, a4, a5, a6, a7, a8);
  v8 = *a3 - *a2;
  *(float *)&v11 = *(float *)&v11 + v8;
  *(float *)&v14 = *(float *)&v14 - v8;
  sub_1011BC50((float *)&v11, (float *)&v14, a4, a5, a6, a7, a8);
  v9 = a3[1] - a2[1];
  v12 = v12 + v9;
  v15 = v15 - v9;
  sub_1011BC50((float *)&v11, (float *)&v14, a4, a5, a6, a7, a8);
  v10 = *a3 - *a2;
  *(float *)&v11 = *(float *)&v11 - v10;
  *(float *)&v14 = v10 + *(float *)&v14;
  sub_1011BC50((float *)&v11, (float *)&v14, a4, a5, a6, a7, a8);
}
