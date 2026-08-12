void __stdcall sub_101588D0(int a1)
{
  int v1; // eax
  int v2; // ecx
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st5
  long double v7; // st5
  long double v8; // st4
  long double v9; // st3
  long double v10; // st5
  long double v11; // rt1

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 8);
  if ( v2 != v1 + 4 )
  {
    v3 = 0.5;
    v4 = 1.0;
    do
    {
      v5 = *(float *)(a1 + 8);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v2 + 4);
      v6 = v5 + *(float *)(v2 + 48);
      *(float *)(v2 + 48) = v6;
      if ( v6 <= 2.0 )
      {
        v7 = v4 - (cos(v6 * 3.14159 * v3) + v4) * v3;
        v8 = *(float *)(v2 + 36) * v7;
        v9 = *(float *)(v2 + 40) * v7;
        v10 = v7 * *(float *)(v2 + 44) + *(float *)(v2 + 32);
        v11 = v9 + *(float *)(v2 + 28);
        *(float *)(v2 + 12) = v8 + *(float *)(v2 + 24);
        *(float *)(v2 + 16) = v11;
        *(float *)(v2 + 20) = v10;
      }
      else
      {
        sub_100EB9C0(*(_DWORD *)a1, (_DWORD *)v2);
        v4 = 1.0;
        v3 = 0.5;
      }
      v2 = *(_DWORD *)(a1 + 16);
    }
    while ( v2 != *(_DWORD *)(a1 + 4) + 4 );
  }
}
