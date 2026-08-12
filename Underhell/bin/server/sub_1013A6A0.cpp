char __cdecl sub_1013A6A0(int a1, char *Source, int a3, float a4, int a5, int a6, float *a7, float a8, int *a9)
{
  int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  char v15; // [esp+27h] [ebp-1h]

  v15 = 0;
  if ( dword_106B0004 <= 0 )
    return 0;
  v9 = dword_106B0004 - 1;
  if ( dword_106B0004 - 1 < 0 )
    return 0;
  do
  {
    v10 = *(_DWORD *)(dword_106AFFF8 + 4 * v9);
    if ( v10 != -1
      && off_1061BE18[4 * (*(_DWORD *)(dword_106AFFF8 + 4 * v9) & 0xFFF) + 2] == v10 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(dword_106AFFF8 + 4 * v9) & 0xFFF) + 1] )
    {
      v11 = *(_DWORD *)(dword_106AFFF8 + 4 * v9);
      if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(dword_106AFFF8 + 4 * v9) & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (*(_DWORD *)(dword_106AFFF8 + 4 * v9) & 0xFFF) + 1];
      v13 = sub_1013A450(v12, a1, Source, a3, a4, a5, a6, a7, a8, a9);
      if ( v13 == 1 )
      {
        v15 = 1;
      }
      else if ( v13 == 2 && dword_106B0004 > 0 )
      {
        *(_DWORD *)(dword_106AFFF8 + 4 * v9) = *(_DWORD *)(dword_106AFFF8 + 4 * dword_106B0004-- - 4);
      }
    }
    --v9;
  }
  while ( v9 >= 0 );
  return v15;
}
