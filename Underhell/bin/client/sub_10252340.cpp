int __thiscall sub_10252340(_DWORD *this, int a2)
{
  int v3; // edx

  v3 = *this;
  this[83] = a2;
  (*(void (__stdcall **)(_DWORD, _DWORD))(v3 + 244))(0, 0);
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
