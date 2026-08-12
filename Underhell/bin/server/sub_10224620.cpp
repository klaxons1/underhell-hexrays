char __cdecl sub_10224620(int a1, float *a2, int a3)
{
  int v4; // esi
  int v5; // edx
  float *i; // ecx
  double v7; // st3
  double v8; // st6
  double v9; // st3
  double v10; // st4

  if ( *(float *)(dword_106C41AC + 44) <= 0.0 )
    return 0;
  v4 = *(_DWORD *)(a3 + 12);
  if ( v4 <= 0 )
    return 0;
  v5 = 0;
  for ( i = *(float **)a3; ; i += 3 )
  {
    v7 = *i - *a2;
    v8 = v7 * v7;
    v9 = i[1] - a2[1];
    v10 = i[2] - a2[2];
    if ( v10 * v10 + v9 * v9 + v8 <= *(float *)(dword_106C41AC + 44) * *(float *)(dword_106C41AC + 44) )
      break;
    if ( ++v5 >= v4 )
      return 1;
  }
  return 0;
}
