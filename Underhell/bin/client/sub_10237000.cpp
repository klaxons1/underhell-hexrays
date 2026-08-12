int __thiscall sub_10237000(int (__thiscall ***this)(void *, _DWORD, int, int, int, int), int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax

  v3 = dword_1047CA6C;
  v4 = *(_DWORD *)dword_1047CA6C;
  v5 = (**this)(this, 0, a2, a3, 1, 1);
  return (*(int (__thiscall **)(int, int))(v4 + 188))(v3, v5);
}
