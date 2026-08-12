_DWORD *__thiscall sub_101C4DF0(int *this, int *a2)
{
  int *v2; // ebx
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int *v10; // ecx
  _DWORD *v11; // eax
  int v12; // [esp+4h] [ebp-8h]

  v2 = this;
  if ( this == a2 )
    return 0;
  if ( (this[191] & 1) == 0
    || (dword_106BA7CC[0]
      ? (v4 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_106BA7CC[0] + 4))(dword_106BA7CC[0], this))
      : (v4 = 0),
        (v12 = v4) == 0) )
  {
    v2[191] |= 1u;
    if ( dword_106BA7CC[0] )
      v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_106BA7CC[0] + 8))(dword_106BA7CC[0], v2);
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
    v8 = (_DWORD *)sub_1042FCC0(12);
    v9 = v8;
    if ( v8 )
    {
      v10 = a2;
      ++dword_106BA694;
      if ( a2 )
      {
        v11 = (_DWORD *)(*(int (__thiscall **)(int *))(*a2 + 8))(a2);
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
      if ( v10 && (v2[63] & 1) == 0 && (v10[63] & 1) == 0 )
        sub_100EA940(v10, 1);
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
    if ( *result == -1 || (v2 = this, off_1061BE18[4 * (*result & 0xFFF) + 2] != *result >> 12) )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*result & 0xFFF) + 1];
    if ( (int *)v6 == a2 )
      return result;
    result = (_DWORD *)result[1];
    if ( result == (_DWORD *)v4 )
      goto LABEL_20;
  }
}
