void __stdcall sub_101C7780(int a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ecx
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double *v9; // eax
  unsigned int v10; // edx
  double v11; // st7

  if ( a1 && a2 )
  {
    v2 = 0;
    if ( a2 >= 4 )
    {
      v3 = ((unsigned int)(a2 - 4) >> 2) + 1;
      v4 = a1 + 32;
      v2 = 4 * v3;
      do
      {
        v5 = *(double *)(v4 - 32);
        v4 += 128;
        --v3;
        *(double *)(v4 - 160) = *(double *)(v4 - 144);
        *(double *)(v4 - 144) = v5;
        v6 = *(double *)(v4 - 128);
        *(double *)(v4 - 128) = *(double *)(v4 - 112);
        *(double *)(v4 - 112) = v6;
        v7 = *(double *)(v4 - 96);
        *(double *)(v4 - 96) = *(double *)(v4 - 80);
        *(double *)(v4 - 80) = v7;
        v8 = *(double *)(v4 - 64);
        *(double *)(v4 - 64) = *(double *)(v4 - 48);
        *(double *)(v4 - 48) = v8;
      }
      while ( v3 );
    }
    if ( v2 < a2 )
    {
      v9 = (double *)(a1 + 32 * v2);
      v10 = a2 - v2;
      do
      {
        v11 = *v9;
        v9 += 4;
        --v10;
        *(v9 - 4) = *(v9 - 2);
        *(v9 - 2) = v11;
      }
      while ( v10 );
    }
  }
}
