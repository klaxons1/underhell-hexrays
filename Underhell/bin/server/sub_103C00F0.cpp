bool __thiscall sub_103C00F0(_DWORD *this, int a2)
{
  return ((this[62] & 0x100) == 0 || (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) != 3)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2272))(this)
      && sub_10020EB0(this, a2);
}
