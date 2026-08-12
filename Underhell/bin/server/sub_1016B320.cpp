void __cdecl sub_1016B320(int a1, int *a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax

  v2 = a1;
  if ( a1 )
  {
    do
    {
      v3 = a2[3];
      v4 = a2[1];
      if ( v3 + 1 > v4 )
        sub_102ABFC0(v3 - v4 + 1);
      ++a2[3];
      v5 = *a2;
      v6 = a2[3] - v3 - 1;
      a2[4] = *a2;
      if ( v6 > 0 )
        memcpy((void *)(v5 + 4 * v3 + 4), (const void *)(v5 + 4 * v3), 4 * v6);
      v7 = (int *)(*a2 + 4 * v3);
      if ( v7 )
        *v7 = v2;
      v8 = *(_DWORD *)(v2 + 312);
      if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 312) & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*(_DWORD *)(v2 + 312) & 0xFFF) + 1];
      sub_1016B320(v9, a2);
      v10 = *(_DWORD *)(v2 + 316);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 1];
      v2 = v11;
    }
    while ( v11 );
  }
}
