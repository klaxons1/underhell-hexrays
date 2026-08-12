int __thiscall sub_102498A0(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this[54] + 104))(this[54], a2, a3);
  v4 = *this;
  v5 = (*(int (__thiscall **)(int *, int))(*this + 876))(this, a2);
  (*(void (__thiscall **)(int *, int))(v4 + 824))(this, v5);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  return (*(int (__thiscall **)(int *))(*this + 16))(this);
}
