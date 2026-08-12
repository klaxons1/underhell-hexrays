int __thiscall sub_10261A90(_DWORD *this, int a2, int a3, int (__thiscall ***a4)(_DWORD))
{
  sub_102393F0(this + 111, a4);
  this[112] = a2;
  this[113] = a3;
  ((void (__thiscall *)(int (__thiscall ***)(_DWORD), _DWORD *))(*a4)[39])(a4, this);
  ((void (__thiscall *)(int (__thiscall ***)(_DWORD), int))(*a4)[31])(a4, 1);
  ((void (__thiscall *)(int (__thiscall ***)(_DWORD), _DWORD))(*a4)[12])(a4, 0);
  (*a4)[53](a4);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
