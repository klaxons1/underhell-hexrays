float *__stdcall sub_100212C0(float *a1, int a2, int a3)
{
  int v3; // ecx
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st5
  float *result; // eax
  double v9; // st7

  sub_100C8350(a1, a2, a3);
  v3 = sub_100773C0(a3, 0);
  if ( !v3 )
    return a1;
  v4 = *(float *)(dword_10690C7C + 44);
  v5 = 0.0;
  if ( v4 <= 0.0 )
    return a1;
  v6 = *(float *)(dword_106B31C8 + 12) - *(float *)(v3 + 40);
  if ( v6 >= 0.0 )
    v5 = v6;
  if ( v5 >= v4 )
    return a1;
  v7 = *(float *)(dword_10690C34 + 44);
  result = a1;
  if ( v7 > 1.0 )
  {
    v9 = (1.0 - v5 / v4) * (v7 - 1.0) + 1.0;
    *a1 = *a1 * v9;
    a1[1] = v9 * a1[1];
    a1[2] = v9 * a1[2];
  }
  return result;
}
