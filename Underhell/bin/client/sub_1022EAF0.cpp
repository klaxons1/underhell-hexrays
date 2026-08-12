int __thiscall sub_1022EAF0(int this, int a2, char a3)
{
  int v4; // ebx
  int v5; // edi
  int v7; // edi
  char v8; // cl
  int v9; // edx
  _BYTE *v10; // eax
  int v11; // eax
  int v12; // edx
  char v13; // al
  int v14; // ecx
  char v15; // al
  int v16; // ecx
  char v17; // al
  int v18; // eax
  char v19; // al
  int v20; // [esp+8h] [ebp-14h]
  _BYTE *v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h] BYREF
  int v24; // [esp+18h] [ebp-4h]

  if ( (*(_BYTE *)(this + 21) & 1) == 0 )
    return sub_1022E940(this);
  v4 = a2;
  if ( !a2 )
    return sub_1022E940(this);
  v5 = sub_1022E8A0((_BYTE *)this, 0);
  if ( !sub_1022EA90((_BYTE *)this, v5, *(_BYTE **)(a2 + 8), *(_DWORD *)(a2 + 12)) )
    return 0;
  v20 = v5;
  v7 = *(_DWORD *)(a2 + 12) + v5;
  v22 = 1;
  while ( 1 )
  {
    v8 = *(_BYTE *)(this + 20);
    v9 = *(_DWORD *)(v4 + 12);
    v10 = *(_BYTE **)(v4 + 8);
    v24 = v9;
    v21 = v10;
    if ( (v8 & 2) == 0 )
      break;
LABEL_17:
    v15 = *(_BYTE *)(this + 20);
    if ( (v15 & 2) != 0 )
      goto LABEL_30;
    v16 = *(_DWORD *)(this + 12);
    v24 = v7 + 1;
    if ( *(_DWORD *)(this + 28) >= v16 + v7 + 1 )
    {
      if ( (v18 = *(_DWORD *)(this + 32), v16 >= v18) && *(_DWORD *)(this + 4) >= v16 + v24 - v18
        || (v17 = (*(int (__thiscall **)(int, int))(this + 36))(this, v24)) != 0 )
      {
        v17 = 1;
      }
      else
      {
        *(_BYTE *)(this + 20) |= 2u;
      }
    }
    else
    {
      *(_BYTE *)(this + 20) = v15 | 2;
      v17 = 0;
    }
    *(_BYTE *)(this + 20) &= ~2u;
    if ( !v17 )
      goto LABEL_30;
    ++v22;
    v19 = *(_BYTE *)(v7 + *(_DWORD *)this - *(_DWORD *)(this + 32) + *(_DWORD *)(this + 12));
    v7 = v24;
    if ( v19 == *(_BYTE *)(v4 + 4) )
    {
      v23 = *(_DWORD *)(v4 + 20);
      if ( !sub_1022E3E0(this, v24, &v23) )
        goto LABEL_30;
      (**(void (__thiscall ***)(int, int, int *))v4)(
        v4,
        *(_DWORD *)(this + 12) + v7 + *(_DWORD *)this - *(_DWORD *)(this + 32),
        &v23);
      v7 += v23;
    }
  }
  v11 = *(_DWORD *)(this + 12);
  v12 = v7 + v9;
  if ( *(_DWORD *)(this + 28) >= v11 + v12 )
  {
    v14 = *(_DWORD *)(this + 32);
    if ( v11 >= v14 && *(_DWORD *)(this + 4) >= v12 + v11 - v14
      || (v13 = (*(int (__thiscall **)(int, int))(this + 36))(this, v12)) != 0 )
    {
      v13 = 1;
    }
    else
    {
      *(_BYTE *)(this + 20) |= 2u;
    }
  }
  else
  {
    *(_BYTE *)(this + 20) = v8 | 2;
    v13 = 0;
  }
  *(_BYTE *)(this + 20) &= ~2u;
  if ( !v13 || sub_10227B20((_BYTE *)(*(_DWORD *)(this + 12) + v7 + *(_DWORD *)this - *(_DWORD *)(this + 32)), v21, v24) )
  {
    v4 = a2;
    goto LABEL_17;
  }
  v4 = a2;
LABEL_30:
  if ( a3 )
    return v22;
  else
    return *(_DWORD *)(v4 + 12) - v20 + v7 + 1;
}
