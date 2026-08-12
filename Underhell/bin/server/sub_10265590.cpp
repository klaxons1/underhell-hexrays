bool __thiscall sub_10265590(int *this, int a2, int a3)
{
  _DWORD *v5; // esi

  return sub_102654D0(a2, a3)
      && (!this[1] || sub_10265430(a3, a2, this[1]))
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2)
      && (v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2)) != 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*v5 + 68))(v5, this[2], a3)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
           dword_106B3CDC,
           this[2],
           v5[105]) != 0;
}
