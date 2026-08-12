int __thiscall sub_100DEDC0(_BYTE *this)
{
  sub_1012CAB0("ShowMenu", sub_100DED90);
  this[300] = 0;
  this[280] = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 24))(this);
}
