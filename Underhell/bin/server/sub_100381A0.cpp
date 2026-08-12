int __thiscall sub_100381A0(_DWORD *this, int a2, int a3)
{
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int))(*this + 2024))(this, this + 145, a2, a3);
}
