char __thiscall sub_10037220(_DWORD *this, int a2, int a3)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax

  v3 = this[120];
  if ( v3 == -1 )
    return 0;
  v4 = (int *)((char *)off_103DCD74 + 16 * (v3 & 0xFFF) + 4);
  v5 = v3 >> 12;
  if ( v4[1] != v5 || !*v4 )
    return 0;
  if ( v4[1] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)(v6 + 4) + 100))(v6 + 4, a2, a3);
}
