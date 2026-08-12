_DWORD *__thiscall sub_100F7DF0(_BYTE *this, _BYTE *a2)
{
  _BYTE *v2; // ebx
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // edi
  _BYTE *v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _BYTE *v10; // ecx
  _DWORD *v11; // eax
  int v12; // [esp+4h] [ebp-8h]

  v2 = this;
  if ( this == a2 )
    return 0;
  if ( (this[1132] & 1) == 0
    || (dword_10435FEC[0]
      ? (v4 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10435FEC[0] + 4))(dword_10435FEC[0], this))
      : (v4 = 0),
        (v12 = v4) == 0) )
  {
    *((_DWORD *)v2 + 283) |= 1u;
    if ( dword_10435FEC[0] )
      v7 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10435FEC[0] + 8))(dword_10435FEC[0], v2);
    else
      v7 = 0;
    v5 = (_DWORD *)(v7 + 4);
    v12 = v7;
    *(_DWORD *)(v7 + 4) = v7;
    *(_DWORD *)(v7 + 8) = v7;
    goto LABEL_20;
  }
  result = *(_DWORD **)(v4 + 4);
  v5 = (_DWORD *)(v4 + 4);
  if ( result == (_DWORD *)v4 )
  {
LABEL_20:
    v8 = (_DWORD *)sub_1022FDF0(12);
    v9 = v8;
    if ( v8 )
    {
      v10 = a2;
      ++dword_10435EFC;
      if ( a2 )
      {
        v11 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 8))(a2);
        v10 = a2;
        *v9 = *v11;
      }
      else
      {
        *v8 = -1;
      }
      v9[1] = *v5;
      v9[2] = v12;
      *v5 = v9;
      *(_DWORD *)(v9[1] + 8) = v9;
      if ( v10 && (v2[312] & 1) == 0 && (v10[312] & 1) == 0 )
        sub_1000DEB0(v10, 1);
      return v9;
    }
    else
    {
      DevMsg("AllocGroundLink: failed to allocate groundlink_t.!!!\n");
      return 0;
    }
  }
  while ( 1 )
  {
    if ( *result == -1 || (v2 = this, *((_DWORD *)off_103DCD74 + 4 * (*result & 0xFFF) + 2) != *result >> 12) )
      v6 = 0;
    else
      v6 = (_BYTE *)*((_DWORD *)off_103DCD74 + 4 * (*result & 0xFFF) + 1);
    if ( v6 == a2 )
      return result;
    result = (_DWORD *)result[1];
    if ( result == (_DWORD *)v4 )
      goto LABEL_20;
  }
}
