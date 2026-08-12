int __thiscall sub_101650F0(void *this, int a2, float a3, float a4, int a5, int a6)
{
  int v6; // eax

  v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1656))(this);
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int, int))(*(_DWORD *)v6 + 4))(
           v6,
           a2,
           LODWORD(a3),
           LODWORD(a4),
           a5,
           a6);
}
