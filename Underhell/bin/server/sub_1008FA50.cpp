bool __thiscall sub_1008FA50(_DWORD *this, int a2, int a3)
{
  bool v3; // zf
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edi
  int v17; // esi
  int v18; // edi
  int *v19; // edi
  int v20; // esi
  int v21; // ebx
  float *v22; // eax
  float *v23; // [esp-8h] [ebp-4Ch]
  float *v24; // [esp-4h] [ebp-48h]
  float v25[3]; // [esp+Ch] [ebp-38h] BYREF
  float v26[3]; // [esp+18h] [ebp-2Ch] BYREF
  float v27[3]; // [esp+24h] [ebp-20h] BYREF
  _DWORD *v28; // [esp+30h] [ebp-14h]
  unsigned int v29; // [esp+34h] [ebp-10h]
  int v30; // [esp+38h] [ebp-Ch]
  int v31; // [esp+3Ch] [ebp-8h]
  float *v32; // [esp+40h] [ebp-4h]
  int v33; // [esp+50h] [ebp+Ch]

  v3 = (*(_BYTE *)(a2 + 14) & 2) == 0;
  v4 = (int)this;
  v28 = this;
  if ( !v3 )
  {
    v5 = *(_DWORD *)(a2 + 20);
    if ( !v5 )
      return 0;
    v6 = *(_DWORD *)(v5 + 824);
    if ( !v6 )
      return 0;
    v7 = this[1];
    if ( *(_BYTE *)(v5 + 828) )
    {
      if ( *(_DWORD *)(v7 + 260) == v6
        || (unsigned __int8)sub_100D6190(*(char **)(v5 + 824))
        || sub_10001410(*(_DWORD **)(v4 + 4), v6) )
      {
        return 0;
      }
    }
    else if ( *(_DWORD *)(v7 + 260) != v6
           && !(unsigned __int8)sub_100D6190(*(char **)(v5 + 824))
           && !sub_10001410(*(_DWORD **)(v4 + 4), v6) )
    {
      return 0;
    }
  }
  v9 = sub_10074630((__int16 *)a2, a3);
  v10 = *(int **)(v4 + 4);
  v31 = v9;
  v11 = *v10;
  v29 = *(unsigned __int8 *)(v10[419] + a2 + 4);
  v12 = v29 & (*(int (**)(void))(v11 + 1672))();
  v13 = *(_DWORD *)(v4 + 20);
  v30 = v12;
  if ( a3 < 0 || a3 >= *(_DWORD *)(v13 + 4) )
  {
    ++dword_10691DE0;
    v32 = 0;
  }
  else
  {
    v32 = *(float **)(*(_DWORD *)(v13 + 8) + 4 * a3);
  }
  v14 = v31;
  v15 = *(_DWORD *)(v4 + 20);
  if ( v31 < 0 || v31 >= *(_DWORD *)(v15 + 4) )
  {
    ++dword_10691DE0;
    v33 = 0;
  }
  else
  {
    v33 = *(_DWORD *)(*(_DWORD *)(v15 + 8) + 4 * v31);
  }
  if ( (v29 & 2) != 0 )
  {
    if ( !v12 )
    {
      v16 = *((_DWORD *)v32 + 24);
      v17 = *(_DWORD *)(v33 + 96);
      if ( !v16 )
        return 0;
      if ( !v17 )
        return 0;
      if ( *(_WORD *)(v16 + 816) != 901 )
        return 0;
      if ( *(_WORD *)(v17 + 816) != 901 )
        return 0;
      if ( ((*(_DWORD *)(v16 + 248) | *(_DWORD *)(v17 + 248)) & 0x10000) == 0 )
      {
        v29 = (unsigned int)(sub_10019640((_DWORD *)v16) + 2);
        if ( *((float *)sub_10019640((_DWORD *)v17) + 2) >= (double)*(float *)v29 )
          return 0;
      }
      if ( sub_1005CF90(v32) )
        return 0;
      v18 = *(_DWORD *)(v16 + 856);
      if ( v18 != -1 && v18 != v31 )
        return 0;
      v14 = v31;
      v30 = 2;
      v12 = 2;
    }
  }
  else if ( !v12 )
  {
    return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v4 + 4) + 1744))(
         *(_DWORD *)(v4 + 4),
         v14,
         *(_DWORD *)(v33 + 96)) )
  {
    return 0;
  }
  if ( v12 == 2 )
  {
    v19 = *(int **)(v4 + 4);
    v20 = v19[419];
    v21 = *v19;
    v24 = sub_1008D160(v33, v27, v20);
    v23 = sub_1008D160(v33, v26, v20);
    v22 = sub_1008D160((int)v32, v25, v20);
    if ( (*(unsigned __int8 (__thiscall **)(int *, float *, float *, float *))(v21 + 1720))(v19, v22, v23, v24) )
    {
      LOBYTE(v12) = v30;
      v4 = (int)v28;
      return (*(_BYTE *)(a2 + 14) & 1) == 0 || !sub_1008F940(v4, v12, (__int16 *)a2);
    }
    return 0;
  }
  return (*(_BYTE *)(a2 + 14) & 1) == 0 || !sub_1008F940(v4, v12, (__int16 *)a2);
}
