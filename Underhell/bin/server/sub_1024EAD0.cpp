void __thiscall sub_1024EAD0(float *this, float *a2, float a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // rt0
  float v8[3]; // [esp+8h] [ebp-18h] BYREF
  float v9[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = *a2 - this[182];
  v8[0] = v4;
  v5 = a2[1] - this[183];
  v8[1] = v5;
  v6 = a2[2] - this[184];
  v8[2] = v6;
  if ( a3 < 0.1 )
  {
    sub_100D7260(this, v8);
    sub_100D8290(this, 1.0);
  }
  else
  {
    v7 = 1.0 / a3;
    v9[0] = v4 * v7;
    v9[1] = v5 * v7;
    v9[2] = v7 * v6;
    sub_100D7260(this, v9);
  }
}
