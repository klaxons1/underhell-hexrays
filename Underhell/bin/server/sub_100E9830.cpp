bool __thiscall sub_100E9830(_DWORD *this)
{
  if ( ((*(int (__thiscall **)(_DWORD *))(this[80] + 48))(this + 80) & 0x10) != 0 )
    return 0;
  if ( (*(int (__thiscall **)(_DWORD *))(this[80] + 44))(this + 80) == 1
    || (*(int (__thiscall **)(_DWORD *))(this[80] + 44))(this + 80) == 6
    || (*(int (__thiscall **)(_DWORD *))(this[80] + 44))(this + 80) == 2 )
  {
    return 1;
  }
  return sub_100E8AC0(this);
}
