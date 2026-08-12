void __stdcall sub_101C6FF0(int a1, int a2, int a3)
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
      v5 = a1 + 8;
      v6 = a2 + 16;
      v3 = 4 * v4;
      do
      {
        v7 = *(double *)(v6 - 16);
        v6 += 32;
        *(float *)(v5 - 8) = v7;
        v5 += 16;
        --v4;
        *(float *)(v5 - 20) = *(double *)(v6 - 40);
        *(float *)(v5 - 16) = *(double *)(v6 - 32);
        *(float *)(v5 - 12) = *(double *)(v6 - 24);
      }
      while ( v4 );
    }
    for ( ; v3 < a3; *(float *)(a1 + 4 * v3 - 4) = v8 )
      v8 = *(double *)(a2 + 8 * v3++);
  }
}
