double __thiscall sub_10313940(float *this, float a2, float a3, float a4, float a5, float a6)
{
  double v7; // st7
  double v8; // st6
  double v9; // st6
  float v11; // [esp+18h] [ebp-4h]
  float v12; // [esp+18h] [ebp-4h]
  float v13; // [esp+34h] [ebp+18h]

  v11 = *(float *)(dword_106B31C8 + 12);
  v12 = (v11 - sub_100E92C0(this, 0)) * 400.0;
  v13 = sub_10312DD0(a2, a3, a4, a5, a6);
  v7 = sub_100B5040(this);
  if ( v12 >= fabs(v13 - v7) )
    return v13;
  v8 = v12;
  if ( v13 >= v7 )
    v9 = v8 * 1.0;
  else
    v9 = v8 * -1.0;
  return v7 + v9;
}
