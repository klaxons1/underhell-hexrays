int __stdcall sub_1019B230(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // ebx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  int *v14; // eax
  __int16 v15; // ax
  int i; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v3 = a2;
  v4 = a1;
  v5 = 0;
  v18 = 0;
  v6 = a1;
  for ( i = 0; v5 < a3; ++v5 )
  {
    v7 = v6;
    if ( v3 > 0 )
    {
      i += a2;
      do
      {
        --v3;
        *(_BYTE *)(v7 + 60) = 1;
        v7 = *(_DWORD *)(v7 + 28);
      }
      while ( v3 );
      v3 = a2;
      v4 = a1;
    }
    if ( !v5 )
      v18 = v7;
    v6 = *(_DWORD *)(v6 + 32);
  }
  v8 = v6;
  if ( v3 > 0 )
  {
    do
    {
      --v3;
      v8 = *(_DWORD *)(v8 + 28);
    }
    while ( v3 );
  }
  if ( v4 && v18 && v8 && v6 )
  {
    v9 = sub_10184390(800);
    if ( v9 )
      v10 = sub_1018F380(v9, (float *)v4, v18, (float *)v8, v6);
    else
      v10 = 0;
    v11 = sub_1018CED0(&dword_10632624, 0);
    sub_1018ED30(&dword_10632624, v11);
    v12 = 12 * v11 + dword_10632624;
    *(_DWORD *)(v12 + 8) = -1;
    v13 = dword_10632634;
    *(_DWORD *)(v12 + 4) = dword_10632634;
    dword_10632634 = v11;
    if ( v13 == -1 )
      dword_10632630 = v11;
    else
      *(_DWORD *)(dword_10632624 + 12 * v13 + 8) = v11;
    ++dword_1063263C;
    v14 = (int *)(dword_10632624 + 12 * v11);
    if ( v14 )
      *v14 = v10;
    v15 = *(unsigned __int8 *)(v4 + 44);
    *(_WORD *)(v10 + 40) = v15;
    if ( (v15 & 1) != 0 && !*(_BYTE *)(v4 + 70) )
      *(_WORD *)(v10 + 40) = v15 & 0xFFFE;
    return i;
  }
  else
  {
    Error("BuildArea - NULL node.\n");
    return -1;
  }
}
