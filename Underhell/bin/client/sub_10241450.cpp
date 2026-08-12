int __thiscall sub_10241450(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int v3; // esi
  int v4; // edx

  if ( a2 )
    v2 = *(_DWORD *)(a2 + 4);
  else
    v2 = -1;
  this[33] = v2;
  if ( v2 == -1 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(MEMORY[0] + 44))(0, this);
  v3 = v2 & 0xFFFFF;
  if ( (v2 & 0xFFFFF) >= dword_10481998 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(MEMORY[0] + 44))(0, this);
  v4 = *(_DWORD *)(dword_1048198C + 8 * v3);
  if ( ((v4 ^ (v2 >> 20) & 0x7FF) & 0x7FFFFFFF) != 0 || (v4 & 0x80000000) == 0x80000000 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(MEMORY[0] + 44))(0, this);
  else
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_1048198C + 8 * v3 + 4) + 44))(
             *(_DWORD *)(dword_1048198C + 8 * v3 + 4),
             this);
}
