void __stdcall sub_101C7070(int a1, int a2, int a3)
{
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  int v8; // ebp
  int v9; // eax

  v3 = a1;
  if ( a1 && a2 && a3 )
  {
    v4 = 0;
    if ( a3 >= 4 )
    {
      v5 = a1 + 8;
      v6 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v7 = a2 + 4;
      v4 = 4 * v6;
      do
      {
        v8 = *(unsigned __int16 *)(v7 - 4);
        v7 += 8;
        v5 += 16;
        --v6;
        *(float *)(v5 - 24) = flt_10352FE0[v8];
        *(float *)(v5 - 20) = flt_10352FE0[*(unsigned __int16 *)(v7 - 10)];
        *(float *)(v5 - 16) = flt_10352FE0[*(unsigned __int16 *)(v7 - 8)];
        *(float *)(v5 - 12) = flt_10352FE0[*(unsigned __int16 *)(v7 - 6)];
      }
      while ( v6 );
      v3 = a1;
    }
    for ( ; v4 < a3; *(float *)(v3 + 4 * v4 - 4) = flt_10352FE0[v9] )
      v9 = *(unsigned __int16 *)(a2 + 2 * v4++);
  }
}
