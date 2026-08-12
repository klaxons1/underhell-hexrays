double __stdcall sub_100B50E0(float *a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st6
  double result; // st7
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+4h] [ebp-18h]
  float v11; // [esp+8h] [ebp-14h]
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]

  v3 = a2[2] * 0.0;
  v10 = a2[1] - v3;
  v11 = v3 - *a2;
  v4 = *a3 - *a1;
  v5 = a3[1] - a1[1];
  v6 = v4 + *a2 * -(*a2 * v4 + v5 * a2[1] + (a3[2] - a1[2]) * a2[2]);
  v12 = v6;
  v7 = v5 + -(*a2 * v4 + v5 * a2[1] + (a3[2] - a1[2]) * a2[2]) * a2[1];
  v13 = v7;
  v9 = v6 * v6 + v7 * v7;
  result = off_10689708(v9);
  if ( v13 * v11 + v12 * v10 < 0.0 )
    return result * -1.0;
  return result;
}
