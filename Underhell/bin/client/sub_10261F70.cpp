int __thiscall sub_10261F70(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  int (__thiscall **v6)(_DWORD *, _DWORD, int, _DWORD); // edi
  int v7; // eax

  v4 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(a2 + this[65]));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 868))(v4, -1);
  v5 = *(_DWORD **)(this[54] + 72 * *(unsigned __int8 *)(a2 + this[65]));
  v6 = (int (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*v5 + 836);
  v7 = sub_10279020(a3);
  return (*v6)(v5, 0, v7, 0);
}
