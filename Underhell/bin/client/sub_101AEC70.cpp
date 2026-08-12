int __thiscall sub_101AEC70(_DWORD *this, int a2)
{
  int v3; // edi
  unsigned __int8 v4; // al

  sub_10241570(a2);
  v3 = *this;
  v4 = (*(int (__thiscall **)(_DWORD *))(*(this - 11) + 36))(this - 11);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v3 + 124))(this, v4);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
}
