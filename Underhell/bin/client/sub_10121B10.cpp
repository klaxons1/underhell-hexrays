int __thiscall sub_10121B10(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax

  v1 = this[13];
  if ( v1 == -1 )
    return -1;
  v2 = (int *)((char *)off_103DCD74 + 16 * (v1 & 0xFFF) + 4);
  v3 = v1 >> 12;
  if ( v2[1] != v3 || !*v2 )
    return -1;
  if ( v2[1] == v3 )
    v4 = *v2;
  else
    v4 = 0;
  return (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 36))(v4 + 8);
}
