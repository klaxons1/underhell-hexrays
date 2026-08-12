int __thiscall sub_10241380(_DWORD *this, int (***a2)(void))
{
  int v3; // edi
  int (__thiscall **v4)(int, int); // esi
  int v5; // eax
  int result; // eax
  int v7; // esi
  int v8; // edx
  _DWORD *v9; // edi

  v3 = dword_1047CA74;
  v4 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 60);
  v5 = (**a2)();
  result = (*v4)(v3, v5);
  v7 = this[24];
  v8 = 0;
  if ( v7 <= 0 )
    goto LABEL_7;
  v9 = (_DWORD *)this[21];
  while ( *v9 != result )
  {
    ++v8;
    ++v9;
    if ( v8 >= v7 )
      goto LABEL_7;
  }
  if ( v8 == -1 )
  {
LABEL_7:
    a2 = (int (***)(void))result;
    return sub_10258C50(v7, &a2);
  }
  return result;
}
