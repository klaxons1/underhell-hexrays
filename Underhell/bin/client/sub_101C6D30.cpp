void __stdcall sub_101C6D30(int a1, int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  double v8; // st7

  if ( a1 && a2 && a3 )
  {
    v3 = 0;
    if ( a3 >= 4 )
    {
      v4 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v5 = a1 + 16;
      v6 = a2 + 8;
      v3 = 4 * v4;
      do
      {
        v7 = *(float *)(v6 - 8);
        v6 += 16;
        *(double *)(v5 - 16) = v7;
        v5 += 32;
        --v4;
        *(double *)(v5 - 40) = *(float *)(v6 - 20);
        *(double *)(v5 - 32) = *(float *)(v6 - 16);
        *(double *)(v5 - 24) = *(float *)(v6 - 12);
      }
      while ( v4 );
    }
    for ( ; v3 < a3; *(double *)(a1 + 8 * v3 - 8) = v8 )
      v8 = *(float *)(a2 + 4 * v3++);
  }
}
