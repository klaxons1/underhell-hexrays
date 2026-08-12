int __cdecl sub_1013B000(int a1)
{
  int v2; // ecx
  unsigned int v3; // edx
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int *v7; // ecx
  int *v8; // edx
  int v9; // edx
  _DWORD *v10; // esi
  int v11; // edi
  int v12; // edx
  _DWORD *v13; // ecx
  unsigned int v14; // esi
  int v15; // ebx
  int v16; // esi
  float v17; // ecx
  _DWORD *v18; // edx
  _DWORD *v19; // esi
  _DWORD *v20; // ecx
  int v21; // edi
  int v22; // edx
  _DWORD *v23; // esi
  unsigned int v24; // esi
  int v25; // ebx
  int v26; // esi
  float v27; // ecx
  _DWORD *v28; // edx
  _DWORD *v29; // esi
  _DWORD *v30; // ecx
  int v31; // edi
  int v32; // edx
  _DWORD *v33; // esi
  unsigned int v34; // esi
  int v35; // ebx
  int v36; // esi
  float v37; // ecx
  _DWORD *v38; // edx
  _DWORD *v39; // esi
  _DWORD *v40; // ecx
  int v41; // edi
  int v42; // edx
  _DWORD *v43; // esi
  unsigned int v44; // esi
  int v45; // ebx
  _DWORD v47[4]; // [esp+Ch] [ebp-10h] BYREF
  float v48; // [esp+24h] [ebp+8h]
  float v49; // [esp+24h] [ebp+8h]
  float v50; // [esp+24h] [ebp+8h]

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 < 8 )
  {
    v10 = *(_DWORD **)(a1 + 28);
    v11 = *(_DWORD *)(a1 + 16);
    v12 = 8 - v2;
    v13 = *(_DWORD **)(a1 + 24);
    if ( v13 == v10 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v13 > v10 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a1 + 16) = *v13;
    }
    *(_DWORD *)(a1 + 24) = v13 + 1;
LABEL_16:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v6 = 0;
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 16);
      v15 = (v14 & dword_1039BF80[v12]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v12;
      v6 = v15 | v11;
      *(_DWORD *)(a1 + 16) = v14 >> v12;
    }
    goto LABEL_19;
  }
  v3 = *(_DWORD *)(a1 + 16);
  v4 = (unsigned __int8)v3;
  v5 = v2 - 8;
  *(_DWORD *)(a1 + 20) = v5;
  if ( v5 )
  {
    *(_DWORD *)(a1 + 16) = v3 >> 8;
    v6 = (unsigned __int8)v3;
  }
  else
  {
    v7 = *(int **)(a1 + 24);
    v8 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v7 == v8 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v7 + 1;
      v6 = v4;
    }
    else
    {
      if ( v7 <= v8 )
      {
        v9 = *v7;
        *(_DWORD *)(a1 + 24) = v7 + 1;
        *(_DWORD *)(a1 + 16) = v9;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v6 = v4;
    }
  }
LABEL_19:
  v16 = *(_DWORD *)(a1 + 20);
  v47[0] = v6;
  if ( v16 < 32 )
  {
    v20 = *(_DWORD **)(a1 + 24);
    v21 = *(_DWORD *)(a1 + 16);
    v22 = 32 - v16;
    v23 = *(_DWORD **)(a1 + 28);
    if ( v20 == v23 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v20 > v23 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_34;
      }
      *(_DWORD *)(a1 + 16) = *v20;
    }
    *(_DWORD *)(a1 + 24) = v20 + 1;
LABEL_34:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v48 = 0.0;
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 16);
      v25 = (v24 & dword_1039BF80[v22]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v22;
      LODWORD(v48) = v25 | v21;
      *(_DWORD *)(a1 + 16) = v24 >> v22;
    }
    goto LABEL_37;
  }
  v17 = *(float *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = v16 - 32;
  if ( v16 == 32 )
  {
    v18 = *(_DWORD **)(a1 + 24);
    v19 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v18 == v19 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v18 + 1;
      v48 = v17;
    }
    else
    {
      if ( v18 <= v19 )
      {
        *(_DWORD *)(a1 + 16) = *v18;
        *(_DWORD *)(a1 + 24) = v18 + 1;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v48 = v17;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
    v48 = v17;
  }
LABEL_37:
  v26 = *(_DWORD *)(a1 + 20);
  *(float *)&v47[1] = v48;
  if ( v26 < 32 )
  {
    v30 = *(_DWORD **)(a1 + 24);
    v31 = *(_DWORD *)(a1 + 16);
    v32 = 32 - v26;
    v33 = *(_DWORD **)(a1 + 28);
    if ( v30 == v33 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v30 > v33 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_52;
      }
      *(_DWORD *)(a1 + 16) = *v30;
    }
    *(_DWORD *)(a1 + 24) = v30 + 1;
LABEL_52:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v49 = 0.0;
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 16);
      v35 = (v34 & dword_1039BF80[v32]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v32;
      LODWORD(v49) = v35 | v31;
      *(_DWORD *)(a1 + 16) = v34 >> v32;
    }
    goto LABEL_55;
  }
  v27 = *(float *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = v26 - 32;
  if ( v26 == 32 )
  {
    v28 = *(_DWORD **)(a1 + 24);
    v29 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v28 == v29 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v28 + 1;
      v49 = v27;
    }
    else
    {
      if ( v28 <= v29 )
      {
        *(_DWORD *)(a1 + 16) = *v28;
        *(_DWORD *)(a1 + 24) = v28 + 1;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v49 = v27;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
    v49 = v27;
  }
LABEL_55:
  v36 = *(_DWORD *)(a1 + 20);
  *(float *)&v47[2] = v49;
  if ( v36 >= 32 )
  {
    v37 = *(float *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = v36 - 32;
    if ( v36 == 32 )
    {
      v38 = *(_DWORD **)(a1 + 24);
      v39 = *(_DWORD **)(a1 + 28);
      *(_DWORD *)(a1 + 20) = 32;
      if ( v38 == v39 )
      {
        *(_DWORD *)(a1 + 20) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 24) = v38 + 1;
        v50 = v37;
        goto LABEL_72;
      }
      if ( v38 <= v39 )
      {
        *(_DWORD *)(a1 + 16) = *v38;
        *(_DWORD *)(a1 + 24) = v38 + 1;
        v50 = v37;
        goto LABEL_72;
      }
      *(_BYTE *)(a1 + 4) = 1;
    }
    *(_DWORD *)(a1 + 16) = 0;
    v50 = v37;
    goto LABEL_72;
  }
  v40 = *(_DWORD **)(a1 + 24);
  v41 = *(_DWORD *)(a1 + 16);
  v42 = 32 - v36;
  v43 = *(_DWORD **)(a1 + 28);
  if ( v40 == v43 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 4) = 1;
  }
  else
  {
    if ( v40 > v43 )
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_69;
    }
    *(_DWORD *)(a1 + 16) = *v40;
  }
  *(_DWORD *)(a1 + 24) = v40 + 1;
LABEL_69:
  if ( *(_BYTE *)(a1 + 4) )
  {
    v50 = 0.0;
  }
  else
  {
    v44 = *(_DWORD *)(a1 + 16);
    v45 = (v44 & dword_1039BF80[v42]) << *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = 32 - v42;
    LODWORD(v50) = v45 | v41;
    *(_DWORD *)(a1 + 16) = v44 >> v42;
  }
LABEL_72:
  *(float *)&v47[3] = v50;
  return sub_1013AB40((int *)&off_103E77F0, (int)v47);
}
