int __thiscall sub_10255050(_DWORD *this)
{
  int v2; // eax
  void (__thiscall *v3)(_DWORD *); // edx

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1020))(this, 0);
  v2 = sub_10254620((int)this);
  this[70] = v2;
  this[94] = v2;
  v3 = *(void (__thiscall **)(_DWORD *))(*this + 976);
  *((_BYTE *)this + 285) = 0;
  v3(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 980))(this);
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
