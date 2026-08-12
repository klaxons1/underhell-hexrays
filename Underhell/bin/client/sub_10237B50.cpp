int __thiscall sub_10237B50(int (__stdcall ***this)(_DWORD), int a2, int a3, float a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax

  v4 = dword_1047CA74;
  v5 = *(_DWORD *)dword_1047CA74;
  v6 = (**this)(LODWORD(a4));
  return (*(int (__thiscall **)(int, int, _DWORD, int))(v5 + 80))(v4, a3, LODWORD(a4), v6);
}
