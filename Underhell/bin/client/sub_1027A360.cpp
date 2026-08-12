char __thiscall sub_1027A360(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int (__thiscall ***v9)(void *, int, int); // esi

  *a7 = 0;
  *a6 = 0;
  *a5 = 0;
  *a4 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 880))(this, a2) )
    return 0;
  v9 = *(int (__thiscall ****)(void *, int, int))(this[58] + 12 * a2);
  if ( !((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v9)[32])(v9) )
    return 0;
  sub_10236250(v9, (int)a4, (int)a5, (int)a6, (int)a7);
  sub_10279170(v9, a3, a4, a6);
  return 1;
}
