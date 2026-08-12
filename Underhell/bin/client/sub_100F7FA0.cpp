int *__thiscall sub_100F7FA0(int this, int a2)
{
  int *result; // eax
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  int *v10; // esi
  int **v11; // ebx
  int v12; // eax
  int v13; // [esp+8h] [ebp-4h]

  if ( this == a2 )
    return 0;
  v4 = *(_DWORD *)(this + 324);
  if ( v4 == -1
    || (v5 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4),
        *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) != v4 >> 12) )
  {
    v6 = 0;
  }
  else
  {
    v6 = *v5;
  }
  if ( v6 == a2 )
    return 0;
  v7 = *(_DWORD *)(a2 + 324);
  if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 324) & 0xFFF) + 2) != v7 >> 12 )
    v8 = 0;
  else
    v8 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 324) & 0xFFF) + 1);
  if ( this == v8
    || ((*(_DWORD *)(this + 732) | *(_DWORD *)(a2 + 732)) & 0x400000) != 0
    || (*(_BYTE *)(this + 388) & 8) != 0
    && (*(_BYTE *)(a2 + 388) & 8) != 0
    && !sub_100116C0((_BYTE *)this)
    && !sub_100116C0((_BYTE *)a2)
    || (*(_BYTE *)(a2 + 312) & 1) != 0
    || (*(_BYTE *)(this + 312) & 1) != 0 )
  {
    return 0;
  }
  if ( (*(_DWORD *)(this + 1132) & 2) != 0
    && (dword_10435FF0
      ? (v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10435FF0 + 4))(dword_10435FF0, this))
      : (v9 = 0),
        (v13 = v9) != 0) )
  {
    v10 = *(int **)(v9 + 8);
    v11 = (int **)(v9 + 8);
    if ( v10 != (int *)v9 )
    {
      while ( *v10 != a2 )
      {
        v10 = (int *)v10[2];
        if ( v10 == (int *)v9 )
          goto LABEL_35;
      }
      v10[1] = *(_DWORD *)(this + 156);
      if ( !byte_10404B60 )
      {
        sub_100F75D0((_BYTE *)this, a2);
        return v10;
      }
      return v10;
    }
  }
  else
  {
    *(_DWORD *)(this + 1132) |= 2u;
    if ( dword_10435FF0 )
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10435FF0 + 8))(dword_10435FF0, this);
    else
      v12 = 0;
    v11 = (int **)(v12 + 8);
    v13 = v12;
    *(_DWORD *)(v12 + 12) = v12;
    *(_DWORD *)(v12 + 8) = v12;
  }
LABEL_35:
  result = (int *)sub_100F7480();
  v10 = result;
  if ( !result )
    return result;
  result[1] = *(_DWORD *)(this + 156);
  *result = a2;
  result[4] = 0;
  result[2] = (int)*v11;
  result[3] = v13;
  *v11 = result;
  *(_DWORD *)(result[2] + 12) = result;
  if ( (sub_100116C0((_BYTE *)this) && (*(_BYTE *)(this + 388) & 0x20) == 0 || (*(_BYTE *)(this + 388) & 8) != 0)
    && (*(_BYTE *)(a2 + 388) & 8) == 0 )
  {
    v10[4] |= 1u;
    if ( !byte_10404B60 )
      sub_100F7600((_BYTE *)this, a2);
  }
  return v10;
}
