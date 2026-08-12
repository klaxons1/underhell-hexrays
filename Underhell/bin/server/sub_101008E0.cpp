char __cdecl sub_101008E0(int a1, float a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  int v5; // esi
  double v6; // st6
  int v7; // edx
  int i; // ecx
  double v9; // st5
  double v11; // rt2
  double v12; // st6
  double v13; // st7
  double v14; // st5
  double v15; // st6

  v3 = 0.0;
  v4 = (double)(*(_DWORD *)(a1 + 16) - 1);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = a2 * v4 - (double)(int)(a2 * v4 / v4);
  v7 = 0;
  if ( v5 <= 0 )
    return 0;
  for ( i = a1 + *(_DWORD *)(a1 + 24); ; i += 44 )
  {
    v9 = (double)*(int *)i;
    if ( v9 >= v6 )
      break;
    ++v7;
    v3 = v9;
    if ( v7 >= v5 )
      return 0;
  }
  v11 = (double)*(int *)i - v3;
  v12 = ((v6 - v3) / v11 * *(float *)(i + 12) + (1.0 - (v6 - v3) / v11) * *(float *)(i + 8)) * *(float *)(a1 + 8);
  v13 = v12 / v11 * *(float *)(i + 28);
  v14 = *(float *)(i + 20) * (v12 / v11);
  v15 = *(float *)(i + 24) * (v12 / v11);
  *a3 = v14;
  a3[1] = v15;
  a3[2] = v13;
  return 1;
}
