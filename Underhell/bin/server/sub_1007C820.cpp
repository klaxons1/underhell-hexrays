BOOL __thiscall sub_1007C820(_DWORD *this)
{
  return sub_100CF460(this[1])
      || ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1672))(this[1]) & 0x20000) != 0
      || ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1672))(this[1]) & 0x40000) != 0;
}
