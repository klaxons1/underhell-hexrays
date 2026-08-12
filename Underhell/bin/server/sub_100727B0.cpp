int __cdecl sub_100727B0(float *a1, float *a2, _DWORD *a3, int *a4)
{
  int v4; // ecx
  _DWORD *v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int *v12; // eax
  int v13; // [esp+0h] [ebp-Ch]
  int v14; // [esp+4h] [ebp-8h]
  bool v15; // [esp+Bh] [ebp-1h]

  v4 = dword_10607410;
  v13 = dword_10607410;
  if ( !dword_10607410 )
    return 0;
  v6 = a3;
  v7 = 0;
  v15 = (a3[5] & 2) != 0;
  a3[5] &= ~2u;
  if ( v4 > 0 )
  {
    do
    {
      v14 = *(_DWORD *)(dword_10607404 + 4 * v7);
      if ( sub_10071420(v14, (int)a4, a1, v6, a2, 0, 0, 0) )
      {
        v8 = a4[3];
        v9 = a4[1];
        if ( v8 + 1 > v9 )
          sub_102ABFC0(v8 - v9 + 1);
        ++a4[3];
        v10 = *a4;
        v11 = a4[3] - v8 - 1;
        a4[4] = *a4;
        if ( v11 > 0 )
          memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * v11);
        v12 = (int *)(*a4 + 4 * v8);
        v6 = a3;
        if ( v12 )
          *v12 = v14;
      }
      ++v7;
    }
    while ( v7 < v13 );
  }
  if ( v15 )
    v6[5] |= 2u;
  return a4[3];
}
