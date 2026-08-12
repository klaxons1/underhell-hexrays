void __cdecl sub_100815C0(int a1)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned __int8 v4; // si
  int v5; // ecx
  int *v6; // ecx
  int *v7; // edx
  int v8; // edx
  _DWORD *v9; // esi
  int v10; // edi
  int v11; // edx
  _DWORD *v12; // ecx
  unsigned int v13; // esi
  int v14; // ebx
  int v15; // ecx
  unsigned int v16; // edx
  unsigned __int8 v17; // si
  int v18; // ecx
  int *v19; // ecx
  int *v20; // edx
  int v21; // edx
  _DWORD *v22; // esi
  int v23; // edi
  int v24; // edx
  _DWORD *v25; // ecx
  unsigned int v26; // esi
  int v27; // ebx
  int v28; // ecx
  unsigned int v29; // edx
  char v30; // si
  int v31; // ecx
  char v32; // al
  int *v33; // ecx
  int *v34; // edx
  int v35; // edx
  _DWORD *v36; // esi
  int v37; // edi
  int v38; // edx
  _DWORD *v39; // ecx
  unsigned int v40; // esi
  int v41; // ebx
  unsigned __int8 v42; // [esp+Ch] [ebp-4h]
  unsigned __int8 v43; // [esp+18h] [ebp+8h]

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 < 8 )
  {
    v9 = *(_DWORD **)(a1 + 28);
    v10 = *(_DWORD *)(a1 + 16);
    v11 = 8 - v2;
    v12 = *(_DWORD **)(a1 + 24);
    if ( v12 == v9 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v12 > v9 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a1 + 16) = *v12;
    }
    *(_DWORD *)(a1 + 24) = v12 + 1;
LABEL_16:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v42 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 16);
      v14 = (v13 & dword_1039BF80[v11]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v11;
      v42 = v14 | v10;
      *(_DWORD *)(a1 + 16) = v13 >> v11;
    }
    goto LABEL_19;
  }
  v3 = *(_DWORD *)(a1 + 16);
  v4 = v3;
  v5 = v2 - 8;
  *(_DWORD *)(a1 + 20) = v5;
  if ( v5 )
  {
    *(_DWORD *)(a1 + 16) = v3 >> 8;
    v42 = v3;
  }
  else
  {
    v6 = *(int **)(a1 + 24);
    v7 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v6 == v7 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v6 + 1;
      v42 = v4;
    }
    else
    {
      if ( v6 <= v7 )
      {
        v8 = *v6;
        *(_DWORD *)(a1 + 24) = v6 + 1;
        *(_DWORD *)(a1 + 16) = v8;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v42 = v4;
    }
  }
LABEL_19:
  v15 = *(_DWORD *)(a1 + 20);
  if ( v15 < 8 )
  {
    v22 = *(_DWORD **)(a1 + 28);
    v23 = *(_DWORD *)(a1 + 16);
    v24 = 8 - v15;
    v25 = *(_DWORD **)(a1 + 24);
    if ( v25 == v22 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v25 > v22 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_34;
      }
      *(_DWORD *)(a1 + 16) = *v25;
    }
    *(_DWORD *)(a1 + 24) = v25 + 1;
LABEL_34:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v43 = 0;
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 16);
      v27 = (v26 & dword_1039BF80[v24]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v24;
      v43 = v27 | v23;
      *(_DWORD *)(a1 + 16) = v26 >> v24;
    }
    goto LABEL_37;
  }
  v16 = *(_DWORD *)(a1 + 16);
  v17 = v16;
  v18 = v15 - 8;
  *(_DWORD *)(a1 + 20) = v18;
  if ( v18 )
  {
    *(_DWORD *)(a1 + 16) = v16 >> 8;
    v43 = v16;
  }
  else
  {
    v19 = *(int **)(a1 + 24);
    v20 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v19 == v20 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v19 + 1;
      v43 = v17;
    }
    else
    {
      if ( v19 <= v20 )
      {
        v21 = *v19;
        *(_DWORD *)(a1 + 24) = v19 + 1;
        *(_DWORD *)(a1 + 16) = v21;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v43 = v17;
    }
  }
LABEL_37:
  v28 = *(_DWORD *)(a1 + 20);
  if ( v28 < 8 )
  {
    v36 = *(_DWORD **)(a1 + 28);
    v37 = *(_DWORD *)(a1 + 16);
    v38 = 8 - v28;
    v39 = *(_DWORD **)(a1 + 24);
    if ( v39 == v36 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v39 > v36 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_52;
      }
      *(_DWORD *)(a1 + 16) = *v39;
    }
    *(_DWORD *)(a1 + 24) = v39 + 1;
LABEL_52:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v32 = 0;
    }
    else
    {
      v40 = *(_DWORD *)(a1 + 16);
      v41 = (v40 & dword_1039BF80[v38]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v38;
      *(_DWORD *)(a1 + 16) = v40 >> v38;
      v32 = v41 | v37;
    }
    goto LABEL_55;
  }
  v29 = *(_DWORD *)(a1 + 16);
  v30 = v29;
  v31 = v28 - 8;
  *(_DWORD *)(a1 + 20) = v31;
  if ( v31 )
  {
    *(_DWORD *)(a1 + 16) = v29 >> 8;
    v32 = v29;
  }
  else
  {
    v33 = *(int **)(a1 + 24);
    v34 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v33 == v34 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v33 + 1;
      v32 = v30;
    }
    else
    {
      if ( v33 <= v34 )
      {
        v35 = *v33;
        *(_DWORD *)(a1 + 24) = v33 + 1;
        *(_DWORD *)(a1 + 16) = v35;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v32 = v30;
    }
  }
LABEL_55:
  sub_10065750(v42, v43, v32);
}
