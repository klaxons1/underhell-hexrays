bool __thiscall sub_1012D420(int *this, int a2, int a3)
{
  _DWORD *v5; // esi

  return sub_1012D010(a2, a3)
      && (!this[1] || sub_1012D3A0(a2, this[1]))
      && (v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2)) != 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*v5 + 548))(v5, this[2], a3)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10412D50 + 112))(
           dword_10412D50,
           this[2],
           v5[184]) != 0;
}
