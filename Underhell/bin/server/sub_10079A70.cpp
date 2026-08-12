void __cdecl sub_10079A70(int a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float v6; // [esp+0h] [ebp-4h]

  v3 = *a3 - *a2;
  v4 = a3[1] - a2[1];
  if ( a1 )
  {
    v5 = a3[2] - a2[2];
    v6 = v5 * v5 + v4 * v4 + v3 * v3;
  }
  else
  {
    v6 = v3 * v3 + v4 * v4;
  }
  off_10689708(v6);
}
