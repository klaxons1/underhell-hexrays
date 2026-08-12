char __thiscall sub_100C5870(_DWORD *this, int a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  __int16 v4; // bx
  unsigned int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  int v9; // ebx
  int v10; // eax
  _DWORD *v11; // ecx
  unsigned int v12; // edx
  int v13; // edi
  int v14; // ecx
  unsigned int v15; // edx
  char v16; // al
  int v17; // ecx
  unsigned int v18; // edx
  unsigned int *v19; // ecx
  unsigned int *v20; // edx
  _DWORD *v21; // edx
  int v22; // ebx
  int v23; // eax
  _DWORD *v24; // ecx
  unsigned int v25; // edx
  int v26; // edi
  bool v27; // cl
  bool v28; // bl
  char v29; // si
  char result; // al
  char Buffer[512]; // [esp+1Ch] [ebp-40Ch] BYREF
  char ArgList[512]; // [esp+21Ch] [ebp-20Ch] BYREF
  char v33[4]; // [esp+41Ch] [ebp-Ch]
  _DWORD *v34; // [esp+420h] [ebp-8h]
  float v35; // [esp+424h] [ebp-4h]
  bool v36; // [esp+433h] [ebp+Bh]

  v34 = this;
  sub_1022C220(ArgList, 512, 0, 0);
  v2 = *(_DWORD *)(a2 + 20);
  if ( v2 < 16 )
  {
    v8 = *(_DWORD **)(a2 + 28);
    v9 = *(_DWORD *)(a2 + 16);
    v10 = 16 - v2;
    v11 = *(_DWORD **)(a2 + 24);
    if ( v11 == v8 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v11 > v8 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
LABEL_15:
        if ( *(_BYTE *)(a2 + 4) )
        {
          v4 = 0;
          goto LABEL_19;
        }
        v12 = *(_DWORD *)(a2 + 16);
        v13 = (v12 & dword_1039BF80[v10]) << *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a2 + 20) = 32 - v10;
        v4 = v13 | v9;
        v5 = v12 >> v10;
        goto LABEL_18;
      }
      *(_DWORD *)(a2 + 16) = *v11;
    }
    *(_DWORD *)(a2 + 24) = v11 + 1;
    goto LABEL_15;
  }
  v3 = *(_DWORD *)(a2 + 16);
  v4 = v3;
  *(_DWORD *)(a2 + 20) = v2 - 16;
  if ( v2 != 16 )
  {
    v5 = HIWORD(v3);
LABEL_18:
    *(_DWORD *)(a2 + 16) = v5;
    goto LABEL_19;
  }
  v6 = *(_DWORD **)(a2 + 24);
  v7 = *(_DWORD **)(a2 + 28);
  *(_DWORD *)(a2 + 20) = 32;
  if ( v6 == v7 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)(a2 + 24) = v6 + 1;
  }
  else if ( v6 <= v7 )
  {
    *(_DWORD *)(a2 + 16) = *v6;
    *(_DWORD *)(a2 + 24) = v6 + 1;
  }
  else
  {
    *(_BYTE *)(a2 + 4) = 1;
    *(_DWORD *)(a2 + 16) = 0;
  }
LABEL_19:
  v14 = *(_DWORD *)(a2 + 20);
  v35 = (double)v4 * 0.1;
  if ( v14 >= 8 )
  {
    v15 = *(_DWORD *)(a2 + 16);
    v16 = v15;
    v17 = v14 - 8;
    *(_DWORD *)(a2 + 20) = v17;
    if ( v17 )
    {
      v18 = v15 >> 8;
    }
    else
    {
      v19 = *(unsigned int **)(a2 + 24);
      v20 = *(unsigned int **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v19 == v20 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v19 + 1;
        goto LABEL_37;
      }
      if ( v19 > v20 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_37;
      }
      v18 = *v19;
      *(_DWORD *)(a2 + 24) = v19 + 1;
    }
    goto LABEL_36;
  }
  v21 = *(_DWORD **)(a2 + 28);
  v22 = *(_DWORD *)(a2 + 16);
  v23 = 8 - v14;
  v24 = *(_DWORD **)(a2 + 24);
  if ( v24 == v21 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
LABEL_32:
    *(_DWORD *)(a2 + 24) = v24 + 1;
    goto LABEL_33;
  }
  if ( v24 <= v21 )
  {
    *(_DWORD *)(a2 + 16) = *v24;
    goto LABEL_32;
  }
  *(_BYTE *)(a2 + 4) = 1;
  *(_DWORD *)(a2 + 16) = 0;
LABEL_33:
  if ( *(_BYTE *)(a2 + 4) )
  {
    v16 = 0;
    goto LABEL_37;
  }
  v25 = *(_DWORD *)(a2 + 16);
  v26 = (v25 & dword_1039BF80[v23]) << *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = 32 - v23;
  v18 = v25 >> v23;
  v16 = v26 | v22;
LABEL_36:
  *(_DWORD *)(a2 + 16) = v18;
LABEL_37:
  v27 = (v16 & 8) != 0;
  v28 = (v16 & 4) != 0;
  v33[0] = (v16 & 2) != 0;
  v36 = v27;
  if ( (v16 & 1) != 0 )
  {
    if ( !(*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, ArgList) )
      Warning("No caption found for '%s'\n", ArgList);
    v27 = v36;
  }
  v29 = v33[0];
  if ( !v28 && !v27 )
    return sub_100C5580(v34, ArgList, 0, v35, v29, 0);
  sub_10228370(Buffer, 0x200u, "%s_%s", (char)ArgList);
  result = sub_100C5580(v34, Buffer, 0, v35, v29, 0);
  if ( !result )
    return sub_100C5580(v34, ArgList, 0, v35, v29, 0);
  return result;
}
