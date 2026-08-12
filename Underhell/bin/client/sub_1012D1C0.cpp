int __cdecl sub_1012D1C0(float *a1, float *a2, char a3, int a4)
{
  double v4; // st7
  double v5; // st7
  float v7[18]; // [esp+0h] [ebp-60h] BYREF
  __int16 v8; // [esp+48h] [ebp-18h]
  int v9; // [esp+4Ch] [ebp-14h]
  int v10; // [esp+50h] [ebp-10h]
  int v11; // [esp+54h] [ebp-Ch]
  char v12; // [esp+58h] [ebp-8h]

  v7[3] = 0.0;
  v7[4] = 0.0;
  v7[12] = 0.0;
  v7[5] = 0.0;
  v7[17] = 0.0;
  v7[9] = 0.0;
  v9 = 0;
  v7[10] = 0.0;
  v10 = 0;
  v7[11] = 0.0;
  v11 = 0;
  v7[15] = 0.0;
  v7[16] = 0.0;
  v4 = *a1;
  v7[13] = NAN;
  v7[0] = v4;
  v8 = 0;
  v5 = a1[1];
  v12 = a3;
  v7[1] = v5;
  v7[2] = a1[2];
  v7[6] = *a2;
  v7[7] = a2[1];
  v7[8] = a2[2];
  v7[14] = (float)a4;
  return sub_10168E60("bloodimpact", v7);
}
