void __thiscall sub_1010F860(int this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  bool v8; // sf
  int v9; // ebx
  int v10; // ebx
  double v11; // st7
  int v12; // eax
  double v13; // st6
  int v14; // ecx
  int v15; // esi
  int v16; // ebx
  int v17; // edx
  _BYTE v18[128]; // [esp+8h] [ebp-C0h] BYREF
  _BYTE v19[48]; // [esp+88h] [ebp-40h] BYREF
  int v20; // [esp+B8h] [ebp-10h]
  int v21; // [esp+BCh] [ebp-Ch]
  int *v22; // [esp+C0h] [ebp-8h]
  int v23; // [esp+C4h] [ebp-4h]
  _DWORD *v24; // [esp+D4h] [ebp+Ch]

  if ( a2 )
  {
    memset(v18, 0, sizeof(v18));
    v8 = *(int *)(this + 2736) < 0;
    v20 = *a2 + *(_DWORD *)(*a2 + 160);
    v21 = 0;
    if ( !v8 )
    {
      v9 = *(_DWORD *)(this + 2736);
      if ( v9 < sub_10126D70(a2) )
        v21 = sub_10127960(v9);
    }
    v10 = 0;
    if ( *(int *)(this + 2624) > 0 )
    {
      v11 = 0.0;
      v23 = this + 2248;
      v22 = (int *)(this + 2628);
      do
      {
        v12 = *v22;
        if ( *v22 >= 0 && (a6 & *(_DWORD *)(4 * v12 + a2[11])) != 0 )
        {
          v13 = *(float *)(this + 2732);
          v14 = *(_DWORD *)(this + 1284) + 48 * v12;
          v18[v12] = 1;
          if ( v11 == v13 || !v21 || v11 == *(float *)(4 * v12 + *(_DWORD *)(v21 + 156) + v21) )
          {
            sub_101F0B70(v23, v23 - 288, v14);
            v11 = 0.0;
          }
          else
          {
            v18[v12] = 0;
          }
        }
        ++v22;
        v23 += 12;
        ++v10;
      }
      while ( v10 < *(_DWORD *)(this + 2624) );
    }
    v15 = 0;
    if ( *(int *)(*a2 + 156) > 0 )
    {
      v16 = 0;
      v23 = a4;
      v24 = (_DWORD *)(v20 + 4);
      do
      {
        if ( (a6 & *(_DWORD *)(a2[11] + 4 * v15)) != 0 && !v18[v15] && !sub_10020210(a2, v15, this + 1280) )
        {
          sub_101F0F40(v23, a3, v19);
          if ( *v24 == -1 )
            sub_101EDC00(a5, v19, v16 + *(_DWORD *)(this + 1284));
          else
            sub_101EDC00(*(_DWORD *)(this + 1284) + 48 * *v24, v19, v16 + *(_DWORD *)(this + 1284));
        }
        v17 = *a2;
        a3 += 12;
        v23 += 16;
        v24 += 54;
        ++v15;
        v16 += 48;
      }
      while ( v15 < *(_DWORD *)(v17 + 156) );
    }
  }
}
