void __thiscall sub_100F0CA0(float *this, float *a2, int a3)
{
  double v5; // st7
  double v6; // st6
  float v7; // [esp+Ch] [ebp-Ch]
  float v8; // [esp+10h] [ebp-8h]
  float v9; // [esp+14h] [ebp-4h]
  float v10; // [esp+20h] [ebp+8h]

  v10 = off_103EDFEC();
  v7 = this[65] - a2[3];
  v8 = this[66] - a2[4];
  v9 = this[67] - a2[5];
  off_103EDFEC();
  v5 = v10 * 1.2;
  v6 = 1024.0;
  if ( v5 > 1024.0 || (v6 = 0.0, v5 < 0.0) )
    v5 = v6;
  a2[6] = v7 * v5 + a2[6];
  a2[7] = v8 * v5 + a2[7];
  a2[8] = v5 * v9 + a2[8];
}
