bool __thiscall sub_10012EB0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // esi
  int v7; // eax

  v2 = this[1032];
  if ( v2 == -1 )
    return 1;
  v3 = (int *)((char *)off_103DCD74 + 16 * (this[1032] & 0xFFF) + 4);
  if ( v3[1] != v2 >> 12 )
    return 1;
  v4 = *v3;
  if ( !v4 )
    return 1;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 332))(v4);
  if ( !v5 )
    return 1;
  v7 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 4))(v5, this);
  return (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 12))(v5, v7) != 0;
}
