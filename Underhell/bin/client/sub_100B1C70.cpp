void __thiscall sub_100B1C70(int this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  __int16 v5; // si
  int v6; // ecx
  __int16 v7; // ax
  int *v8; // ecx
  int *v9; // edx
  int v10; // edx
  _DWORD *v11; // esi
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // ecx
  unsigned int v15; // esi
  int v16; // ebx
  __int16 v17; // di
  int v18; // edx
  int v19; // esi
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 20);
  v24 = this;
  if ( v3 < 16 )
  {
    v11 = *(_DWORD **)(a2 + 28);
    v12 = *(_DWORD *)(a2 + 16);
    v13 = 16 - v3;
    v14 = *(_DWORD **)(a2 + 24);
    if ( v14 == v11 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v14 > v11 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a2 + 16) = *v14;
    }
    *(_DWORD *)(a2 + 24) = v14 + 1;
LABEL_16:
    if ( *(_BYTE *)(a2 + 4) )
    {
      v7 = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a2 + 16);
      v16 = (v15 & dword_1039BF80[v13]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v13;
      v17 = v16 | v12;
      this = v24;
      *(_DWORD *)(a2 + 16) = v15 >> v13;
      v7 = v17;
    }
    goto LABEL_19;
  }
  v4 = *(_DWORD *)(a2 + 16);
  v5 = v4;
  v6 = v3 - 16;
  *(_DWORD *)(a2 + 20) = v6;
  if ( v6 )
  {
    *(_DWORD *)(a2 + 16) = HIWORD(v4);
    v7 = v4;
  }
  else
  {
    v8 = *(int **)(a2 + 24);
    v9 = *(int **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v8 == v9 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = v8 + 1;
      v7 = v5;
    }
    else
    {
      if ( v8 <= v9 )
      {
        v10 = *v8;
        *(_DWORD *)(a2 + 24) = v8 + 1;
        *(_DWORD *)(a2 + 16) = v10;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
      v7 = v5;
    }
  }
LABEL_19:
  v18 = *(_DWORD *)(this + 264);
  v19 = v7;
  v20 = 0;
  if ( v18 <= 0 )
  {
LABEL_24:
    v22 = 0;
    if ( v18 <= 0 )
    {
LABEL_29:
      sub_100B1A50(this, 4, v19, 0, 0, 0);
    }
    else
    {
      v23 = *(_DWORD **)(this + 252);
      while ( *v23 != 4 || v23[3] != v19 )
      {
        ++v22;
        v23 += 6;
        if ( v22 >= *(_DWORD *)(this + 264) )
          goto LABEL_29;
      }
      *(float *)(*(_DWORD *)(this + 252) + 24 * v22 + 4) = *(float *)(dword_1043C9D4 + 44) * 0.5
                                                         + *((float *)off_103DC81C + 3);
      *(_BYTE *)(this + 314) = 1;
    }
  }
  else
  {
    v21 = *(_DWORD **)(this + 252);
    while ( *v21 != 1 || v21[3] != v19 )
    {
      ++v20;
      v21 += 6;
      if ( v20 >= v18 )
        goto LABEL_24;
    }
  }
}
