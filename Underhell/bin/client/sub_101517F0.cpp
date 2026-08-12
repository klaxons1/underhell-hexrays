float *__stdcall sub_101517F0(float *a1, float a2)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st7
  float v8[3]; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+24h] [ebp+8h]

  v9 = off_103EDFEC() - a2;
  a1[6] = RandomFloat(-0.025, 0.025) + a1[6];
  a1[7] = RandomFloat(-0.025, 0.025) + a1[7];
  off_103EDFEC();
  a1[6] = v9 * a1[6];
  a1[7] = a1[7] * v9;
  a1[8] = v9 * a1[8];
  result = sub_1009C8A0(COERCE_INT(*((float *)off_103DC81C + 3)), v8);
  v4 = *(float *)(dword_1043D194 + 44);
  v5 = v8[0] * v4;
  v6 = v8[1] * v4;
  v7 = v4 * v8[2];
  a1[6] = v5 + a1[6];
  a1[7] = v6 + a1[7];
  a1[8] = v7 + a1[8];
  return result;
}
