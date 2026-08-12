int __thiscall sub_1022E940(int this)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  int v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]

  if ( *(_BYTE *)(this + 20) )
    return 0;
  v3 = 0;
  v15 = 0;
  if ( (*(_BYTE *)(this + 21) & 1) != 0 )
  {
    v15 = sub_1022E8A0((_BYTE *)this, 0);
    v3 = v15;
  }
  v14 = v3;
  while ( 1 )
  {
LABEL_6:
    v4 = *(_DWORD *)(this + 12);
    v5 = *(_DWORD *)(this + 28);
    v6 = 128;
    if ( v4 + v3 >= v5 )
      goto LABEL_33;
    if ( v4 + v3 + 128 > v5 )
      v6 = v5 - v4 - v3;
    if ( (*(_BYTE *)(this + 20) & 2) == 0 )
    {
      v7 = v6 + v3;
      if ( v5 >= v7 + v4 )
      {
        v8 = *(_DWORD *)(this + 32);
        if ( (v4 < v8 || *(_DWORD *)(this + 4) < v4 + v7 - v8)
          && !(*(unsigned __int8 (__thiscall **)(int, int))(this + 36))(this, v7) )
        {
          *(_BYTE *)(this + 20) |= 2u;
        }
      }
      else
      {
        *(_BYTE *)(this + 20) |= 2u;
      }
      *(_BYTE *)(this + 20) &= ~2u;
      v3 = v15;
    }
    v9 = *(_DWORD *)(this + 12);
    if ( *(_DWORD *)(this + 28) - v9 < v6 )
      v6 = *(_DWORD *)(this + 28) - v9;
    if ( !v6 )
    {
LABEL_33:
      if ( v3 == v14 )
        return 0;
      else
        return v3 - v14 + 1;
    }
    v10 = v3 + *(_DWORD *)this + v9 - *(_DWORD *)(this + 32);
    v13 = v10;
    if ( (*(_BYTE *)(this + 21) & 1) != 0 )
      break;
    v11 = 0;
    if ( v6 > 0 )
    {
      while ( *(_BYTE *)(v11 + v10) )
      {
        if ( ++v11 >= v6 )
        {
          v3 += v6;
          v15 = v3;
          goto LABEL_6;
        }
      }
      return v11 - v14 + v3 + 1;
    }
LABEL_32:
    v3 += v6;
    v15 = v3;
  }
  v12 = 0;
  if ( v6 <= 0 )
  {
LABEL_31:
    v3 = v15;
    goto LABEL_32;
  }
  while ( !isspace(*(unsigned __int8 *)(v12 + v10)) && *(_BYTE *)(v12 + v13) )
  {
    if ( ++v12 >= v6 )
      goto LABEL_31;
    v10 = v13;
  }
  return v12 - v14 + v15 + 1;
}
