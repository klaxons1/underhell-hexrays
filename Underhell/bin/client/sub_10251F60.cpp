int __thiscall sub_10251F60(_DWORD *this)
{
  void (__thiscall *v2)(_DWORD *); // edx

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1020))(this, 0);
  v2 = *(void (__thiscall **)(_DWORD *))(*this + 976);
  this[70] = 0;
  *((_BYTE *)this + 285) = 0;
  this[94] = 0;
  v2(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 980))(this);
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
