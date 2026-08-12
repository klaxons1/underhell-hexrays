int __thiscall sub_10051350(_DWORD **this, float a2, int a3)
{
  int v4; // eax

  v4 = (*(int (__thiscall **)(_DWORD *))(*this[1] + 368))(this[1]);
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD **, _DWORD, int))(*this[1] + 1928))(
           this[1],
           v4,
           this + 7,
           LODWORD(a2),
           a3);
}
