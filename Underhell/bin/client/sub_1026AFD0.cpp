int __thiscall sub_1026AFD0(_DWORD *this, int a2)
{
  this[96] = a2;
  if ( a2 )
    this[53] = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, a2) + 2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
