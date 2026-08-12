_DWORD *__thiscall sub_100EF4E0(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD **v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // eax

  v3 = this[43];
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    v6 = (_DWORD *)sub_100DDA40(4);
    if ( v6 )
    {
      *v6 = 0;
      v7 = v6;
    }
    else
    {
      v7 = 0;
    }
    v9 = this[43];
    v10 = this[41];
    if ( v9 + 1 > v10 )
      sub_1010AFF0(v9 - v10 + 1);
    ++this[43];
    v11 = this[40];
    v12 = this[43] - v9 - 1;
    this[44] = v11;
    if ( v12 > 0 )
      memcpy((void *)(v11 + 4 * v9 + 4), (const void *)(v11 + 4 * v9), 4 * v12);
    v13 = (_DWORD *)(this[40] + 4 * v9);
    if ( v13 )
      *v13 = v7;
    *v7 = a2;
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 48))(a2);
    return v7;
  }
  else
  {
    v5 = (_DWORD **)this[40];
    while ( **v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    return *(_DWORD **)(this[40] + 4 * v4);
  }
}
