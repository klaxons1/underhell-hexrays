int __thiscall sub_1025B4B0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, this[86]);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int))(*this + 892))(this, a2, a3, a4, a3 + 1, 1, 1);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int))(*this + 892))(this, a2, a3, a2 + 1, a5, 1, 1);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int))(*this + 892))(this, a2, a5 - 1, a4, a5, 1, 1);
  return (*(int (__thiscall **)(_DWORD *, int, int, int, int, int, int))(*this + 892))(this, a4 - 1, a3, a4, a5, 1, 1);
}
