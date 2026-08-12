unsigned int *__thiscall sub_101C4FA0(int this, int a2)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ebx
  unsigned int *v10; // esi
  int v11; // eax
  const char *v12; // eax
  const char *v13; // [esp-18h] [ebp-28h]
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp-10h] [ebp-20h]
  int v16; // [esp-Ch] [ebp-1Ch]
  int v17; // [esp-8h] [ebp-18h]
  int v18; // [esp+8h] [ebp-8h]
  unsigned int **v19; // [esp+Ch] [ebp-4h]

  if ( this == a2 )
    return 0;
  v4 = *(_DWORD *)(this + 308);
  if ( v4 == -1
    || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != v4 >> 12) )
  {
    v6 = 0;
  }
  else
  {
    v6 = *v5;
  }
  if ( v6 == a2 )
    return 0;
  v7 = *(_DWORD *)(a2 + 308);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 308) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 308) & 0xFFF) + 1];
  if ( this == v8
    || ((*(_DWORD *)(this + 256) | *(_DWORD *)(a2 + 256)) & 0x400000) != 0
    || (*(_BYTE *)(this + 356) & 8) != 0
    && (*(_BYTE *)(a2 + 356) & 8) != 0
    && !sub_10023790((_BYTE *)this)
    && !sub_10023790((_BYTE *)a2)
    || (*(_BYTE *)(a2 + 252) & 1) != 0
    || (*(_BYTE *)(this + 252) & 1) != 0 )
  {
    return 0;
  }
  if ( (*(_DWORD *)(this + 764) & 2) != 0
    && (dword_106BA7D0
      ? (v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7D0 + 4))(dword_106BA7D0, this))
      : (v9 = 0),
        (v18 = v9) != 0) )
  {
    v10 = *(unsigned int **)(v9 + 8);
    v19 = (unsigned int **)(v9 + 8);
    if ( v10 != (unsigned int *)v9 )
    {
      while ( !sub_1012B040(v10, a2) )
      {
        v10 = (unsigned int *)v10[2];
        if ( v10 == (unsigned int *)v9 )
          goto LABEL_35;
      }
      v10[1] = *(_DWORD *)(this + 140);
      if ( !byte_1069727A )
      {
        sub_101C4800((_BYTE *)this, a2);
        return v10;
      }
      return v10;
    }
  }
  else
  {
    *(_DWORD *)(this + 764) |= 2u;
    if ( dword_106BA7D0 )
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7D0 + 8))(dword_106BA7D0, this);
    else
      v11 = 0;
    v18 = v11;
    *(_DWORD *)(v11 + 12) = v11;
    v19 = (unsigned int **)(v11 + 8);
    *(_DWORD *)(v11 + 8) = v11;
  }
LABEL_35:
  v10 = (unsigned int *)sub_101C4660();
  if ( *(_DWORD *)(dword_106BA764 + 48) )
  {
    v17 = dword_106BA6C4;
    v16 = dword_106BA690;
    v15 = sub_1001F3C0((_DWORD *)a2);
    v14 = sub_1001F3C0((_DWORD *)this);
    v13 = sub_100D6390((_DWORD *)a2);
    v12 = sub_100D6390((_DWORD *)this);
    Msg("add 0x%x: %s-%s (%d-%d) [%d in play, %d max]\n", v10, v12, v13, v14, v15, v16, v17);
  }
  if ( !v10 )
    return 0;
  v10[1] = *(_DWORD *)(this + 140);
  sub_10019680(v10, a2);
  v10[4] = 0;
  v10[2] = (unsigned int)*v19;
  v10[3] = v18;
  *v19 = v10;
  *(_DWORD *)(v10[2] + 12) = v10;
  if ( (sub_10023790((_BYTE *)this) && (*(_BYTE *)(this + 356) & 0x20) == 0 || (*(_BYTE *)(this + 356) & 8) != 0)
    && (*(_BYTE *)(a2 + 356) & 8) == 0 )
  {
    v10[4] |= 1u;
    if ( !byte_1069727A )
      sub_101C4830((_BYTE *)this, a2);
  }
  return v10;
}
