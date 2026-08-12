int __thiscall sub_10162100(int *this, int a2)
{
  int v2; // esi
  bool v3; // zf
  int v5; // eax
  int *v6; // ebx
  int v7; // edi
  bool v8; // bl
  int v9; // eax
  int *v10; // edi
  bool v11; // bl
  int v12; // eax
  int v13; // edi
  int result; // eax
  int v15; // [esp-4h] [ebp-18h]
  int v16; // [esp-4h] [ebp-18h]
  int v17; // [esp-4h] [ebp-18h]
  int v18; // [esp-4h] [ebp-18h]
  int Src; // [esp+Ch] [ebp-8h] BYREF
  int *v20; // [esp+10h] [ebp-4h]

  v2 = a2;
  v3 = (*(_BYTE *)(a2 + 21) & 1) == 0;
  v5 = *this;
  v20 = this;
  if ( v3 )
    sub_10087980((_BYTE *)a2, v5);
  else
    sub_1042E0C0(a2, "%d", v5);
  v15 = this[1];
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%d", v15);
  else
    sub_10087980((_BYTE *)v2, v15);
  v16 = this[2];
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%d", v16);
  else
    sub_10087980((_BYTE *)v2, v16);
  v17 = this[3];
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%d", v17);
  else
    sub_10087980((_BYTE *)v2, v17);
  v18 = this[4];
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    sub_1042E0C0(v2, "%d", v18);
  else
    sub_10087980((_BYTE *)v2, v18);
  v6 = this + 5;
  a2 = 3;
  do
  {
    v7 = *v6;
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    {
      sub_1042E0C0(v2, "%d", *v6);
    }
    else
    {
      Src = *v6;
      if ( (unsigned __int8)sub_1042D470(4) )
      {
        if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          sub_100868D0(
            (_BYTE *)(v2 + 44),
            (int *)(*(_DWORD *)(v2 + 16) + *(_DWORD *)v2 - *(_DWORD *)(v2 + 32)),
            (char *)&Src,
            1);
        else
          *(_DWORD *)(*(_DWORD *)v2 - *(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 16)) = v7;
        *(_DWORD *)(v2 + 16) += 4;
        sub_1042D4C0(v2);
      }
    }
    ++v6;
    --a2;
  }
  while ( a2 );
  v8 = *((_BYTE *)v20 + 32) != 0;
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
  {
    v9 = *(_DWORD *)(v2 + 16);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2 - 1) == 10 )
        sub_10088130((_DWORD *)v2);
    }
  }
  if ( (unsigned __int8)sub_1042D470(1) )
  {
    *(_BYTE *)(*(_DWORD *)v2 - *(_DWORD *)(v2 + 32) + (*(_DWORD *)(v2 + 16))++) = v8;
    sub_1042D4C0(v2);
  }
  v10 = v20;
  v11 = *((_BYTE *)v20 + 33) != 0;
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
  {
    v12 = *(_DWORD *)(v2 + 16);
    if ( v12 )
    {
      if ( *(_BYTE *)(v12 - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2 - 1) == 10 )
        sub_10088130((_DWORD *)v2);
    }
  }
  if ( (unsigned __int8)sub_1042D470(1) )
  {
    *(_BYTE *)(*(_DWORD *)v2 - *(_DWORD *)(v2 + 32) + (*(_DWORD *)(v2 + 16))++) = v11;
    sub_1042D4C0(v2);
  }
  v13 = v10[9];
  if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    return sub_1042E0C0(v2, "%d", v13);
  a2 = v13;
  result = sub_1042D470(4);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
      sub_100868D0(
        (_BYTE *)(v2 + 44),
        (int *)(*(_DWORD *)(v2 + 16) + *(_DWORD *)v2 - *(_DWORD *)(v2 + 32)),
        (char *)&a2,
        1);
    else
      *(_DWORD *)(*(_DWORD *)v2 - *(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 16)) = v13;
    *(_DWORD *)(v2 + 16) += 4;
    return sub_1042D4C0(v2);
  }
  return result;
}
