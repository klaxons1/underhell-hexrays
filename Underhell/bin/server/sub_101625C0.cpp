int __thiscall sub_101625C0(int *this, int a2)
{
  unsigned __int16 i; // di
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int16 v10; // bx
  int result; // eax
  _WORD *v12; // eax
  int v13; // [esp-4h] [ebp-Ch]
  int v14; // [esp-4h] [ebp-Ch]
  int *v15; // [esp+10h] [ebp+8h]
  char v16; // [esp+10h] [ebp+8h]
  bool v17; // [esp+10h] [ebp+8h]
  bool v18; // [esp+10h] [ebp+8h]
  __int16 v19; // [esp+10h] [ebp+8h]

  v13 = *this;
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    sub_1042E0C0(a2, "%d", v13);
  else
    sub_10087980((_BYTE *)a2, v13);
  sub_10162100(this + 1, a2);
  v14 = *((unsigned __int16 *)this + 31);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    sub_1042E0C0(a2, "%d", v14);
  else
    sub_10087980((_BYTE *)a2, v14);
  for ( i = sub_10160510((int)(this + 11)); i != 0xFFFF; i = sub_101605E0(this + 11, i) )
  {
    v5 = this[12];
    v6 = 52 * i;
    v15 = (int *)(v6 + v5 + 12);
    sub_1042DFE0(*(char **)(v6 + v5 + 8));
    sub_10162100(v15, a2);
  }
  v16 = *((_BYTE *)this + 76);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 16);
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2 - 1) == 10 )
        sub_10088130((_DWORD *)a2);
    }
  }
  if ( (unsigned __int8)sub_1042D470(1) )
  {
    *(_BYTE *)(*(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2) = v16;
    ++*(_DWORD *)(a2 + 16);
    sub_1042D4C0(a2);
  }
  v17 = *((_BYTE *)this + 72) != 0;
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v8 = *(_DWORD *)(a2 + 16);
    if ( v8 )
    {
      if ( *(_BYTE *)(v8 - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2 - 1) == 10 )
        sub_10088130((_DWORD *)a2);
    }
  }
  if ( (unsigned __int8)sub_1042D470(1) )
  {
    *(_BYTE *)(*(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2) = v17;
    ++*(_DWORD *)(a2 + 16);
    sub_1042D4C0(a2);
  }
  v18 = *((_BYTE *)this + 73) != 0;
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v9 = *(_DWORD *)(a2 + 16);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2 - 1) == 10 )
        sub_10088130((_DWORD *)a2);
    }
  }
  if ( (unsigned __int8)sub_1042D470(1) )
  {
    *(_BYTE *)(*(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2) = v18;
    ++*(_DWORD *)(a2 + 16);
    sub_1042D4C0(a2);
  }
  v10 = *((_WORD *)this + 40);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    return sub_1042E0C0(a2, "%d", v10);
  v19 = v10;
  result = sub_1042D470(2);
  if ( !(_BYTE)result )
    return result;
  if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
  {
    *(_WORD *)(*(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2) = v10;
    goto LABEL_36;
  }
  v12 = (_WORD *)(*(_DWORD *)a2 + *(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 32));
  if ( !v12 )
  {
LABEL_36:
    *(_DWORD *)(a2 + 16) += 2;
    return sub_1042D4C0(a2);
  }
  if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
  {
    LOBYTE(v19) = HIBYTE(v10);
    HIBYTE(v19) = v10;
  }
  *v12 = v19;
  *(_DWORD *)(a2 + 16) += 2;
  return sub_1042D4C0(a2);
}
