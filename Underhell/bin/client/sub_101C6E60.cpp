void __stdcall sub_101C6E60(int a1, int a2, int a3)
{
  int v3; // ecx
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // eax
  int v9; // [esp+4h] [ebp+4h]
  int v10; // [esp+8h] [ebp+8h]

  v3 = a1;
  if ( a1 && a2 && a3 )
  {
    v5 = 0;
    if ( a3 >= 4 )
    {
      v6 = a1 + 16;
      v7 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v8 = a2 + 4;
      v5 = 4 * v7;
      do
      {
        v10 = *(unsigned __int16 *)(v8 - 4);
        v8 += 8;
        v6 += 32;
        --v7;
        *(double *)(v6 - 48) = (double)v10 / 65535.0;
        *(double *)(v6 - 40) = (double)*(unsigned __int16 *)(v8 - 10) / 65535.0;
        *(double *)(v6 - 32) = (double)*(unsigned __int16 *)(v8 - 8) / 65535.0;
        *(double *)(v6 - 24) = (double)*(unsigned __int16 *)(v8 - 6) / 65535.0;
      }
      while ( v7 );
      v3 = a1;
    }
    for ( ; v5 < a3; *(double *)(v3 + 8 * v5 - 8) = (double)v9 / 65535.0 )
      v9 = *(unsigned __int16 *)(a2 + 2 * v5++);
  }
}
