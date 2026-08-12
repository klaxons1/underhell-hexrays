int __thiscall sub_101E7640(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax

  if ( a2 )
    this[1066] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[1066] = -1;
  v3 = this[1066];
  if ( v3 == -1 )
    return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31D0 + 192))(
             dword_106B31D0,
             this[6],
             this[6]);
  v4 = &off_1061BE18[4 * (this[1066] & 0xFFF) + 1];
  v5 = v3 >> 12;
  if ( off_1061BE18[4 * (this[1066] & 0xFFF) + 2] != v5 || !*v4 )
    return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31D0 + 192))(
             dword_106B31D0,
             this[6],
             this[6]);
  if ( off_1061BE18[4 * (this[1066] & 0xFFF) + 2] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31D0 + 192))(
           dword_106B31D0,
           this[6],
           *(_DWORD *)(v6 + 24));
}
