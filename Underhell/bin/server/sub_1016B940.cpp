char __thiscall sub_1016B940(int *this, char *String1, float a3, _DWORD *a4)
{
  int v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  int *v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax

  if ( !this[6] )
    return 0;
  v6 = 0;
  if ( this[4] <= 0 )
  {
LABEL_6:
    v7 = (_DWORD *)sub_10184390(28);
    if ( v7 )
      v8 = sub_1016B800(v7, (int)String1, a4, a3);
    else
      v8 = 0;
    v9 = this[2];
    v10 = this + 1;
    v11 = this[4];
    if ( v11 + 1 > v9 )
      sub_102ABFC0(v11 - v9 + 1);
    ++v10[3];
    v12 = *v10;
    v13 = v10[3] - v11 - 1;
    v10[4] = *v10;
    if ( v13 > 0 )
      memcpy((void *)(v12 + 4 * v11 + 4), (const void *)(v12 + 4 * v11), 4 * v13);
    v14 = (_DWORD *)(*v10 + 4 * v11);
    if ( v14 )
      *v14 = v8;
  }
  else
  {
    while ( !sub_1016B540(*(_DWORD *)(this[1] + 4 * v6), String1, a4) )
    {
      if ( ++v6 >= this[4] )
        goto LABEL_6;
    }
  }
  return 1;
}
