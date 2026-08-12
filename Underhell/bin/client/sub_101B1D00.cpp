void __stdcall sub_101B1D00(int a1)
{
  int v1; // ecx
  unsigned int v2; // edx
  unsigned int v3; // edx
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // edx
  int v18; // edi
  int v19; // eax
  _DWORD *v20; // ecx
  unsigned int v21; // edx
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // ecx
  _DWORD *v27; // edx
  int v28; // ecx
  _DWORD *v29; // eax

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 < 8 )
  {
    v6 = *(_DWORD **)(a1 + 28);
    v7 = 8 - v1;
    v8 = *(_DWORD **)(a1 + 24);
    if ( v8 == v6 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v8 > v6 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
LABEL_15:
        if ( *(_BYTE *)(a1 + 4) )
          goto LABEL_18;
        v9 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 20) = 32 - v7;
        v3 = v9 >> v7;
        goto LABEL_17;
      }
      *(_DWORD *)(a1 + 16) = *v8;
    }
    *(_DWORD *)(a1 + 24) = v8 + 1;
    goto LABEL_15;
  }
  v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = v1 - 8;
  if ( v1 != 8 )
  {
    v3 = v2 >> 8;
LABEL_17:
    *(_DWORD *)(a1 + 16) = v3;
    goto LABEL_18;
  }
  v4 = *(_DWORD **)(a1 + 24);
  v5 = *(_DWORD **)(a1 + 28);
  *(_DWORD *)(a1 + 20) = 32;
  if ( v4 == v5 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = v4 + 1;
  }
  else if ( v4 <= v5 )
  {
    *(_DWORD *)(a1 + 16) = *v4;
    *(_DWORD *)(a1 + 24) = v4 + 1;
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 16) = 0;
  }
LABEL_18:
  v10 = *(_DWORD *)(a1 + 20);
  if ( v10 < 8 )
  {
    v17 = *(_DWORD **)(a1 + 28);
    v18 = *(_DWORD *)(a1 + 16);
    v19 = 8 - v10;
    v20 = *(_DWORD **)(a1 + 24);
    if ( v20 == v17 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v20 > v17 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_33;
      }
      *(_DWORD *)(a1 + 16) = *v20;
    }
    *(_DWORD *)(a1 + 24) = v20 + 1;
LABEL_33:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v14 = 0;
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 16);
      v22 = (v21 & dword_1039BF80[v19]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v19;
      v14 = v22 | v18;
      *(_DWORD *)(a1 + 16) = v21 >> v19;
    }
    goto LABEL_36;
  }
  v11 = *(_DWORD *)(a1 + 16);
  v12 = (unsigned __int8)v11;
  v13 = v10 - 8;
  *(_DWORD *)(a1 + 20) = v13;
  if ( v13 )
  {
    *(_DWORD *)(a1 + 16) = v11 >> 8;
    v14 = (unsigned __int8)v11;
  }
  else
  {
    v15 = *(_DWORD **)(a1 + 24);
    v16 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v15 == v16 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v15 + 1;
      v14 = v12;
    }
    else
    {
      if ( v15 <= v16 )
      {
        *(_DWORD *)(a1 + 16) = *v15;
        *(_DWORD *)(a1 + 24) = v15 + 1;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v14 = v12;
    }
  }
LABEL_36:
  v23 = *(_DWORD *)(a1 + 20);
  if ( v23 >= 32 )
  {
    v24 = v23 - 32;
    *(_DWORD *)(a1 + 20) = v24;
    if ( v24 )
    {
      *(_DWORD *)(a1 + 16) = 0;
    }
    else
    {
      v25 = *(_DWORD **)(a1 + 24);
      *(_DWORD *)(a1 + 20) = 32;
      v26 = *(_DWORD **)(a1 + 28);
      if ( v25 == v26 )
      {
        *(_DWORD *)(a1 + 20) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 24) = v25 + 1;
      }
      else if ( v25 <= v26 )
      {
        *(_DWORD *)(a1 + 16) = *v25;
        *(_DWORD *)(a1 + 24) = v25 + 1;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
    }
    goto LABEL_52;
  }
  v27 = *(_DWORD **)(a1 + 28);
  v28 = 32 - v23;
  v29 = *(_DWORD **)(a1 + 24);
  if ( v29 == v27 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 4) = 1;
  }
  else
  {
    if ( v29 > v27 )
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_50;
    }
    *(_DWORD *)(a1 + 16) = *v29;
  }
  *(_DWORD *)(a1 + 24) = v29 + 1;
LABEL_50:
  if ( !*(_BYTE *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 16) >>= v28;
    *(_DWORD *)(a1 + 20) = 32 - v28;
  }
LABEL_52:
  sub_1022C370(a1);
  sub_1022C370(a1);
  sub_1022C370(a1);
  if ( v14 > 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80("HealthDamageTaken");
  }
}
