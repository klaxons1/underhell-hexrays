double __cdecl sub_10121B40(int a1, double a2)
{
  unsigned int v2; // edx
  double v3; // st7
  double v4; // st4
  double result; // st7
  unsigned int v6; // ecx
  double v7; // st3
  float v8[5]; // [esp+0h] [ebp-14h]

  if ( a1 == 32 )
    v2 = -2;
  else
    v2 = (1 << a1) - 1;
  v3 = (double)v2;
  v4 = v3 / a2;
  if ( (unsigned int)(__int64)(v4 * a2) <= v2 && v4 * a2 <= v3 )
    return v4;
  v6 = 0;
  v8[0] = 0.99989998;
  v8[1] = 0.99000001;
  v8[2] = 0.89999998;
  v8[3] = 0.80000001;
  v8[4] = 0.69999999;
  do
  {
    v7 = v8[v6] * (v3 / a2) * a2;
    if ( (unsigned int)(__int64)v7 <= v2 && v7 <= v3 )
      break;
    ++v6;
  }
  while ( v6 < 5 );
  result = v4;
  if ( v6 == 5 )
    return 0.0;
  return result;
}
