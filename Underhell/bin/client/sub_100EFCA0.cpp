_DWORD *__thiscall sub_100EFCA0(int *this, int a2)
{
  int v3; // esi
  _DWORD *result; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  int *v7; // esi
  unsigned __int16 v8; // ax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // esi
  unsigned __int16 v13; // [esp+10h] [ebp+8h]

  v3 = (*(_DWORD *)(a2 + 16) >> 6) & 7;
  result = (_DWORD *)this[v3 + 38];
  if ( result )
  {
    while ( *result != *(_DWORD *)(a2 + 16) )
    {
      result = (_DWORD *)result[7];
      if ( !result )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = (_DWORD *)sub_100DDA40(32);
    if ( v5 )
    {
      v5[1] = v5 + 1;
      v5[2] = v5 + 1;
      *v5 = 0;
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    *v6 = *(_DWORD *)(a2 + 16);
    v6[7] = this[v3 + 38];
    this[v3 + 38] = (int)v6;
    v7 = this + 46;
    v8 = sub_100EC160(this + 46, 0);
    v9 = v8;
    sub_1003A300(v7, v8);
    v10 = *v7;
    v11 = 8 * v9;
    *(_WORD *)(v10 + v11 + 6) = -1;
    v13 = *((_WORD *)v7 + 7);
    *(_WORD *)(v10 + v11 + 4) = v13;
    *((_WORD *)v7 + 7) = v9;
    if ( v13 == 0xFFFF )
      *((_WORD *)v7 + 6) = v9;
    else
      *(_WORD *)(*v7 + 8 * v13 + 6) = v9;
    ++*((_WORD *)v7 + 9);
    v12 = (_DWORD *)(v11 + *v7);
    if ( v12 )
      *v12 = v6;
    return v6;
  }
  return result;
}
