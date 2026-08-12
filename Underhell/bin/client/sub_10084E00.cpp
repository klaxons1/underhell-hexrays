int __stdcall sub_10084E00(float *a1, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  double v5; // st6
  double v6; // st7
  _BYTE v7[64]; // [esp+8h] [ebp-BCh] BYREF
  float v8[16]; // [esp+48h] [ebp-7Ch] BYREF
  float v9[12]; // [esp+88h] [ebp-3Ch] BYREF
  float v10[3]; // [esp+B8h] [ebp-Ch] BYREF

  sub_101EED90(a3, v9);
  sub_101EDA20(&flt_10459240, 3, v9);
  qmemcpy(v8, v9, 0x30u);
  v8[12] = 0.0;
  v8[13] = 0.0;
  v8[14] = 0.0;
  v8[15] = 1.0;
  v8[0] = v9[1];
  v8[4] = v9[5];
  v8[8] = v9[9];
  v8[1] = v9[2];
  v8[5] = v9[6];
  v8[9] = v9[10];
  v8[2] = v9[0];
  v8[6] = v9[4];
  v8[10] = v9[8];
  v3 = sub_101F2770(v7);
  sub_101F17F0(v3);
  result = sub_101F2270(a1, a2, v10);
  v5 = -1.0 * v10[2];
  v6 = v10[1] * -1.0;
  a1[3] = v10[0] * -1.0;
  a1[7] = v6;
  a1[11] = v5;
  a1[14] = 0.0;
  a1[13] = 0.0;
  a1[12] = 0.0;
  a1[15] = 1.0;
  return result;
}
