int __thiscall sub_100613C0(float *this, int a2, int a3)
{
  int result; // eax
  int v5; // esi
  float v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  _DWORD *v9; // ecx
  int v10; // edi
  int v11; // edx
  _DWORD *v12; // esi
  unsigned int v13; // esi
  int v14; // ebx
  int v15; // esi
  float v16; // ecx
  _DWORD *v17; // edx
  _DWORD *v18; // esi
  _DWORD *v19; // ecx
  int v20; // edi
  int v21; // edx
  _DWORD *v22; // esi
  unsigned int v23; // esi
  int v24; // ebx
  int v25; // esi
  float v26; // ecx
  _DWORD *v27; // edx
  _DWORD *v28; // esi
  _DWORD *v29; // ecx
  int v30; // edi
  int v31; // edx
  _DWORD *v32; // esi
  unsigned int v33; // esi
  int v34; // ebx
  float v36; // [esp+14h] [ebp+Ch]
  float v37; // [esp+14h] [ebp+Ch]
  float v38; // [esp+14h] [ebp+Ch]

  if ( a2 != *(_DWORD *)((*(int (__fastcall **)(float *))(*(_DWORD *)this + 8))(this) + 20) )
    return sub_100358E0((int)this, a2, a3);
  result = a3;
  v5 = *(_DWORD *)(a3 + 20);
  if ( v5 < 32 )
  {
    v9 = *(_DWORD **)(a3 + 24);
    v10 = *(_DWORD *)(a3 + 16);
    v11 = 32 - v5;
    v12 = *(_DWORD **)(a3 + 28);
    if ( v9 == v12 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v9 > v12 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_18;
      }
      *(_DWORD *)(a3 + 16) = *v9;
    }
    *(_DWORD *)(a3 + 24) = v9 + 1;
LABEL_18:
    if ( *(_BYTE *)(a3 + 4) )
    {
      v36 = 0.0;
    }
    else
    {
      v13 = *(_DWORD *)(a3 + 16);
      v14 = (v13 & dword_1039BF80[v11]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v11;
      LODWORD(v36) = v14 | v10;
      *(_DWORD *)(result + 16) = v13 >> v11;
    }
    goto LABEL_21;
  }
  v6 = *(float *)(a3 + 16);
  *(_DWORD *)(a3 + 20) = v5 - 32;
  if ( v5 == 32 )
  {
    v7 = *(_DWORD **)(a3 + 24);
    v8 = *(_DWORD **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( v7 == v8 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = v7 + 1;
      v36 = v6;
    }
    else
    {
      if ( v7 <= v8 )
      {
        *(_DWORD *)(a3 + 16) = *v7;
        *(_DWORD *)(a3 + 24) = v7 + 1;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
      v36 = v6;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 16) = 0;
    v36 = v6;
  }
LABEL_21:
  this[489] = v36;
  v15 = *(_DWORD *)(result + 20);
  if ( v15 < 32 )
  {
    v19 = *(_DWORD **)(result + 24);
    v20 = *(_DWORD *)(result + 16);
    v21 = 32 - v15;
    v22 = *(_DWORD **)(result + 28);
    if ( v19 == v22 )
    {
      *(_DWORD *)(result + 20) = 1;
      *(_DWORD *)(result + 16) = 0;
      *(_BYTE *)(result + 4) = 1;
    }
    else
    {
      if ( v19 > v22 )
      {
        *(_BYTE *)(result + 4) = 1;
        *(_DWORD *)(result + 16) = 0;
        goto LABEL_36;
      }
      *(_DWORD *)(result + 16) = *v19;
    }
    *(_DWORD *)(result + 24) = v19 + 1;
LABEL_36:
    if ( *(_BYTE *)(result + 4) )
    {
      v37 = 0.0;
    }
    else
    {
      v23 = *(_DWORD *)(result + 16);
      v24 = (v23 & dword_1039BF80[v21]) << *(_DWORD *)(result + 20);
      *(_DWORD *)(result + 20) = 32 - v21;
      LODWORD(v37) = v24 | v20;
      *(_DWORD *)(result + 16) = v23 >> v21;
    }
    goto LABEL_39;
  }
  v16 = *(float *)(result + 16);
  *(_DWORD *)(result + 20) = v15 - 32;
  if ( v15 == 32 )
  {
    v17 = *(_DWORD **)(result + 24);
    v18 = *(_DWORD **)(result + 28);
    *(_DWORD *)(result + 20) = 32;
    if ( v17 == v18 )
    {
      *(_DWORD *)(result + 20) = 1;
      *(_DWORD *)(result + 16) = 0;
      *(_DWORD *)(result + 24) = v17 + 1;
      v37 = v16;
    }
    else
    {
      if ( v17 <= v18 )
      {
        *(_DWORD *)(result + 16) = *v17;
        *(_DWORD *)(result + 24) = v17 + 1;
      }
      else
      {
        *(_BYTE *)(result + 4) = 1;
        *(_DWORD *)(result + 16) = 0;
      }
      v37 = v16;
    }
  }
  else
  {
    *(_DWORD *)(result + 16) = 0;
    v37 = v16;
  }
LABEL_39:
  this[490] = v37;
  v25 = *(_DWORD *)(result + 20);
  if ( v25 < 32 )
  {
    v29 = *(_DWORD **)(result + 24);
    v30 = *(_DWORD *)(result + 16);
    v31 = 32 - v25;
    v32 = *(_DWORD **)(result + 28);
    if ( v29 == v32 )
    {
      *(_DWORD *)(result + 20) = 1;
      *(_DWORD *)(result + 16) = 0;
      *(_BYTE *)(result + 4) = 1;
    }
    else
    {
      if ( v29 > v32 )
      {
        *(_BYTE *)(result + 4) = 1;
        *(_DWORD *)(result + 16) = 0;
        goto LABEL_53;
      }
      *(_DWORD *)(result + 16) = *v29;
    }
    *(_DWORD *)(result + 24) = v29 + 1;
LABEL_53:
    if ( *(_BYTE *)(result + 4) )
    {
      v38 = 0.0;
    }
    else
    {
      v33 = *(_DWORD *)(result + 16);
      v34 = (v33 & dword_1039BF80[v31]) << *(_DWORD *)(result + 20);
      *(_DWORD *)(result + 20) = 32 - v31;
      LODWORD(v38) = v34 | v30;
      *(_DWORD *)(result + 16) = v33 >> v31;
    }
    goto LABEL_56;
  }
  v26 = *(float *)(result + 16);
  *(_DWORD *)(result + 20) = v25 - 32;
  if ( v25 != 32 )
  {
LABEL_45:
    *(_DWORD *)(result + 16) = 0;
    v38 = v26;
    goto LABEL_56;
  }
  v27 = *(_DWORD **)(result + 24);
  v28 = *(_DWORD **)(result + 28);
  *(_DWORD *)(result + 20) = 32;
  if ( v27 != v28 )
  {
    if ( v27 <= v28 )
    {
      *(_DWORD *)(result + 16) = *v27;
      *(_DWORD *)(result + 24) = v27 + 1;
      v38 = v26;
      goto LABEL_56;
    }
    *(_BYTE *)(result + 4) = 1;
    goto LABEL_45;
  }
  *(_DWORD *)(result + 20) = 1;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = v27 + 1;
  v38 = v26;
LABEL_56:
  this[491] = v38;
  return result;
}
