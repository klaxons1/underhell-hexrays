void __stdcall sub_101C71F0(int a1, int a2, int a3)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // [esp+8h] [ebp+4h]
  int v7; // [esp+8h] [ebp+4h]

  if ( a1 && a2 && a3 )
  {
    v4 = 0;
    if ( a3 >= 4 )
    {
      v5 = a1 + 8;
      do
      {
        v6 = *(unsigned __int8 *)(a2 + v4);
        v4 += 4;
        v5 += 16;
        *(float *)(v5 - 24) = (double)v6 / 255.0;
        *(float *)(v5 - 20) = (double)*(unsigned __int8 *)(a2 + v4 - 3) / 255.0;
        *(float *)(v5 - 16) = (double)*(unsigned __int8 *)(a2 + v4 - 2) / 255.0;
        *(float *)(v5 - 12) = (double)*(unsigned __int8 *)(a2 + v4 - 1) / 255.0;
      }
      while ( v4 < a3 - 3 );
    }
    for ( ; v4 < a3; *(float *)(a1 + 4 * v4 - 4) = (double)v7 / 255.0 )
    {
      v7 = *(unsigned __int8 *)(v4 + a2);
      ++v4;
    }
  }
}
