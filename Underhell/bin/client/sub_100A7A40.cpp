double __stdcall sub_100A7A40(int a1, float *a2, float a3, float a4)
{
  long double v4; // st7
  long double v5; // st6
  double v6; // st7
  long double v7; // st6
  _BYTE v9[12]; // [esp+0h] [ebp-24h] BYREF
  _BYTE v10[12]; // [esp+Ch] [ebp-18h] BYREF
  float v11[3]; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+2Ch] [ebp+8h]

  sub_101EE040(a1, v9, v11, v10);
  v12 = -1;
  v4 = a2[1] * v11[1] + *a2 * v11[0] + a2[2] * v11[2];
  if ( v4 >= 0.0 )
    v12 = 1;
  v5 = v4;
  v6 = (double)v12;
  v7 = fabs(v5);
  if ( a4 <= v7 )
    return v6 * a3;
  else
    return v6 * (v7 * a3 / a4);
}
