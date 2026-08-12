_DWORD *__thiscall sub_102AC860(_DWORD *this, char *String2, int a3, int a4)
{
  _DWORD *v5; // edi
  int i; // esi
  char *v7; // eax
  _DWORD *result; // eax
  char *v9; // eax
  char *v10; // eax

  if ( (this[62] & 0x1000) != 0 )
  {
    if ( this[248] == -1 || off_1061BE18[4 * (this[248] & 0xFFF) + 2] != this[248] >> 12 )
      v5 = 0;
    else
      v5 = (_DWORD *)off_1061BE18[4 * (this[248] & 0xFFF) + 1];
    for ( i = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 5);
          i > 0;
          v5 = sub_1012BF20(&dword_1069E3E0, (int)v5, v7, (int)this, a3, a4, 0) )
    {
      v7 = String2;
      if ( !String2 )
        v7 = (char *)String;
      --i;
    }
    if ( v5 )
    {
      result = *(_DWORD **)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
      this[248] = result;
      return result;
    }
    v9 = String2;
    if ( !String2 )
      v9 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, 0, v9, (int)this, a3, a4, 0);
    if ( result )
      goto LABEL_15;
    this[248] = -1;
  }
  else
  {
    v10 = String2;
    if ( !String2 )
      v10 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, 0, v10, (int)this, a3, a4, 0);
    if ( result )
    {
LABEL_15:
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
      this[248] = *result;
      return result;
    }
    this[248] = -1;
  }
  return result;
}
