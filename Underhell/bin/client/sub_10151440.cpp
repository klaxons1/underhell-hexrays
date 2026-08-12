void __stdcall sub_10151440(float *a1, float a2)
{
  float v2; // [esp+4h] [ebp-Ch]
  float v3; // [esp+8h] [ebp-8h]
  float v4; // [esp+1Ch] [ebp+Ch]

  v4 = off_103EDFEC() - a2;
  v2 = (double)sub_10115FB0() * 0.000030518509 * 0.050000001 - 0.025;
  v3 = (double)sub_10115FB0() * 0.000030518509 * 0.050000001 - 0.025;
  sub_10115FB0();
  a1[6] = v2 + a1[6];
  a1[7] = a1[7] + v3;
  a1[8] = a1[8];
  off_103EDFEC();
  a1[6] = v4 * a1[6];
  a1[7] = a1[7] * v4;
  a1[8] = v4 * a1[8];
}
