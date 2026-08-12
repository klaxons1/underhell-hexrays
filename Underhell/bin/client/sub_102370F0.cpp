int __thiscall sub_102370F0(int (__thiscall ***this)(void *, int, int, int, int), int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // edi
  int v7; // eax

  v5 = dword_1047CA70;
  v6 = *(_DWORD *)dword_1047CA70;
  v7 = (**this)(this, a2, a3, a4, a5);
  return (*(int (__thiscall **)(int, int))(v6 + 44))(v5, v7);
}
