int __stdcall sub_103F5010(float *a1, int a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st6
  double v6; // rt0
  float v8[18]; // [esp+4h] [ebp-60h] BYREF
  __int16 v9; // [esp+4Ch] [ebp-18h]
  int v10; // [esp+50h] [ebp-14h]
  int v11; // [esp+54h] [ebp-10h]
  int v12; // [esp+58h] [ebp-Ch]
  char v13; // [esp+5Ch] [ebp-8h]

  v8[3] = 0.0;
  v8[4] = 0.0;
  v8[5] = 0.0;
  v8[9] = 0.0;
  v8[10] = 0.0;
  v8[11] = 0.0;
  v8[14] = 1.0;
  v8[12] = 0.0;
  v8[13] = 0.0;
  v8[17] = 0.0;
  v8[15] = 0.0;
  v9 = 0;
  v8[16] = 0.0;
  v10 = 0;
  v2 = a1[6];
  v11 = 0;
  v3 = a1[7];
  v12 = 0;
  v4 = a1[8];
  v13 = 0;
  v5 = v3 + a1[4];
  v6 = v4 + a1[5];
  v8[0] = v2 + a1[3];
  v8[1] = v5;
  v8[2] = v6;
  v8[6] = a1[6];
  v8[7] = a1[7];
  v8[8] = a1[8];
  sub_1028E890((int)"AR2Impact", (int)v8);
  return sub_100E87A0((int)a1, a2);
}
