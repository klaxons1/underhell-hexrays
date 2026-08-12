BOOL __thiscall sub_100BC5D0(_BYTE *this)
{
  return (this[12] & 0x40) != 0
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this) > 0
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 20))(this);
}
