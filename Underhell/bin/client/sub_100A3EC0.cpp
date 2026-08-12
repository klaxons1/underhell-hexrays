int __thiscall sub_100A3EC0(_DWORD *this, int a2, int a3, float a4, float a5, float a6, float a7, float a8, int a9)
{
  return (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this[65] + 16))(
           this + 65,
           a2,
           a3,
           LODWORD(a4),
           LODWORD(a5),
           LODWORD(a6),
           LODWORD(a7),
           LODWORD(a8));
}
