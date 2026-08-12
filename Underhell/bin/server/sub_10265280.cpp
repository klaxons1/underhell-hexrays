int __cdecl sub_10265280(float *a1, float *a2, char a3, int a4)
{
  double v4; // st7
  float v6[18]; // [esp+0h] [ebp-60h] BYREF
  __int16 v7; // [esp+48h] [ebp-18h]
  int v8; // [esp+4Ch] [ebp-14h]
  int v9; // [esp+50h] [ebp-10h]
  int v10; // [esp+54h] [ebp-Ch]
  char v11; // [esp+58h] [ebp-8h]

  v6[3] = 0.0;
  v6[4] = 0.0;
  v6[12] = 0.0;
  v6[5] = 0.0;
  v6[13] = 0.0;
  v6[9] = 0.0;
  v6[17] = 0.0;
  v6[10] = 0.0;
  v8 = 0;
  v6[11] = 0.0;
  v9 = 0;
  v6[15] = 0.0;
  v10 = 0;
  v6[16] = 0.0;
  v6[0] = *a1;
  v7 = 0;
  v4 = a1[1];
  v11 = a3;
  v6[1] = v4;
  v6[2] = a1[2];
  v6[6] = *a2;
  v6[7] = a2[1];
  v6[8] = a2[2];
  v6[14] = (float)a4;
  return sub_1028E890("bloodimpact", v6);
}
