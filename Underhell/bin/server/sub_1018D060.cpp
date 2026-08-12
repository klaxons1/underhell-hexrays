char __thiscall sub_1018D060(int *this, int *a2, int a3)
{
  int v4; // ebx
  int *v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax

  if ( a2 == this )
    return 1;
  if ( a3 == 4 )
  {
    v4 = 0;
    v5 = this + 131;
    do
    {
      v6 = v5[3];
      if ( v6 != -1 )
      {
        v7 = *v5;
        do
        {
          v8 = 3 * v6;
          v9 = a2 == *(int **)(v7 + 4 * v8);
          v10 = v7 + 4 * v8;
          if ( v9 )
            return 1;
          v6 = *(_DWORD *)(v10 + 8);
        }
        while ( v6 != -1 );
      }
      ++v4;
      v5 += 9;
    }
    while ( v4 < 4 );
    v11 = this[170];
    if ( v11 == -1 )
    {
LABEL_17:
      v16 = this[179];
      if ( v16 == -1 )
        return 0;
      v17 = this[176];
      while ( 1 )
      {
        v18 = 3 * v16;
        v19 = *(_DWORD *)(v17 + 4 * v18);
        v20 = v17 + 4 * v18;
        if ( *(int **)(v19 + 48) == a2 )
          break;
        v16 = *(_DWORD *)(v20 + 8);
        if ( v16 == -1 )
          return 0;
      }
    }
    else
    {
      v12 = this[167];
      while ( 1 )
      {
        v13 = 3 * v11;
        v14 = *(_DWORD **)(v12 + 12 * v11);
        v15 = v12 + 4 * v13;
        if ( (int *)v14[11] == a2 || (int *)v14[8] == a2 || (int *)v14[9] == a2 || (int *)v14[10] == a2 )
          break;
        v11 = *(_DWORD *)(v15 + 8);
        if ( v11 == -1 )
          goto LABEL_17;
      }
    }
  }
  else
  {
    v21 = &this[9 * a3];
    v22 = v21[134];
    if ( v22 == -1 )
      return 0;
    v23 = v21[131];
    while ( 1 )
    {
      v9 = a2 == *(int **)(v23 + 12 * v22);
      v24 = v23 + 12 * v22;
      if ( v9 )
        break;
      v22 = *(_DWORD *)(v24 + 8);
      if ( v22 == -1 )
        return 0;
    }
  }
  return 1;
}
