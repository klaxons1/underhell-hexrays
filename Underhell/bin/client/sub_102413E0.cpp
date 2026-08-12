int __thiscall sub_102413E0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD **v4; // ecx
  int v5; // esi
  int v6; // edx
  _DWORD *v7; // edi

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 60))(dword_1047CA74, a2);
  v4 = (_DWORD **)(this + 21);
  v5 = this[24];
  v6 = 0;
  if ( v5 <= 0 )
    goto LABEL_7;
  v7 = *v4;
  while ( *v7 != result )
  {
    ++v6;
    ++v7;
    if ( v6 >= v5 )
      goto LABEL_7;
  }
  if ( v6 == -1 )
  {
LABEL_7:
    a2 = result;
    return sub_10258C50(v5, &a2);
  }
  return result;
}
