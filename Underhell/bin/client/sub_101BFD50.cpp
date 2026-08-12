__int16 __cdecl sub_101BFD50(unsigned int a1, int a2, int a3, int a4)
{
  __int16 result; // ax
  float *v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  double v8; // st5
  double v9; // st5
  double v10; // st5

  result = a1;
  if ( a1 < a1 + 12 * a4 * a3 )
  {
    v5 = (float *)(a1 + 8);
    v6 = a2 + 4;
    v7 = (12 * a4 * a3 - 1) / 0xCu + 1;
    do
    {
      v8 = *(v5 - 2) * 4096.0;
      if ( v8 > 65535.0 )
        v8 = 65535.0;
      *(_WORD *)(v6 - 4) = (int)v8;
      v9 = *(v5 - 1) * 4096.0;
      if ( v9 > 65535.0 )
        v9 = 65535.0;
      *(_WORD *)(v6 - 2) = (int)v9;
      v10 = *v5 * 4096.0;
      if ( v10 > 65535.0 )
        v10 = 65535.0;
      *(_WORD *)(v6 + 2) = -1;
      v5 += 3;
      v6 += 8;
      --v7;
      result = (int)v10;
      *(_WORD *)(v6 - 8) = result;
    }
    while ( v7 );
  }
  return result;
}
