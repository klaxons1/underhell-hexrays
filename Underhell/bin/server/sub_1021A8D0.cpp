int __cdecl sub_1021A8D0(float *a1, float a2, float a3)
{
  float v4[18]; // [esp+0h] [ebp-60h] BYREF
  __int16 v5; // [esp+48h] [ebp-18h]
  int v6; // [esp+4Ch] [ebp-14h]
  int v7; // [esp+50h] [ebp-10h]
  int v8; // [esp+54h] [ebp-Ch]
  char v9; // [esp+58h] [ebp-8h]

  v4[3] = 0.0;
  v4[12] = 0.0;
  v4[4] = 0.0;
  v4[13] = 0.0;
  v4[5] = 0.0;
  v4[17] = 0.0;
  v4[6] = 0.0;
  v6 = 0;
  v4[7] = 0.0;
  v7 = 0;
  v4[8] = 0.0;
  v8 = 0;
  v4[9] = 0.0;
  v9 = 0;
  v4[10] = 0.0;
  v4[11] = 0.0;
  v4[14] = 1.0;
  v4[0] = *a1;
  v5 = 0;
  v4[1] = a1[1];
  v4[2] = a1[2];
  v4[16] = a2;
  v4[15] = a3;
  return sub_1028E890("ShakeRopes", v4);
}
