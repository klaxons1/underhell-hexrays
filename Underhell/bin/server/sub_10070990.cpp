char __stdcall sub_10070990(int a1, float *a2)
{
  int v2; // esi
  int v3; // edx
  float *i; // ecx
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5

  v2 = *(_DWORD *)(a1 + 12);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = *(float **)a1; ; i += 4 )
  {
    v5 = *i - *a2;
    v6 = v5 * v5;
    v7 = i[1] - a2[1];
    v8 = i[2] - a2[2];
    if ( v8 * v8 + v7 * v7 + v6 < i[3] )
      break;
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
