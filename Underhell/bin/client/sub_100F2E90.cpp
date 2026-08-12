void __stdcall sub_100F2E90(float *a1, float a2)
{
  float v3; // [esp+4h] [ebp-Ch]
  float v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+18h] [ebp+8h]
  float v6; // [esp+1Ch] [ebp+Ch]

  v6 = off_103EDFEC() - a2 * 12.0;
  v3 = (double)sub_10115FB0() * 0.000030518509 * 0.25 - 0.125;
  v4 = (double)sub_10115FB0() * 0.000030518509 * 0.25 - 0.125;
  v5 = sub_10115FB0();
  a1[6] = v3 + a1[6];
  a1[7] = v4 + a1[7];
  a1[8] = (double)v5 * 0.000030518509 * 0.25 - 0.125 + a1[8];
  off_103EDFEC();
  a1[6] = v6 * a1[6];
  a1[7] = v6 * a1[7];
  a1[8] = v6 * a1[8];
}
