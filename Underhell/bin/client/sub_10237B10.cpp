int __thiscall sub_10237B10(
        int (__stdcall ***this)(_DWORD),
        int a2,
        int (__thiscall ***a3)(_DWORD, _DWORD, int),
        float a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v4 = dword_1047CA74;
  v5 = *(_DWORD *)dword_1047CA74;
  v6 = (**this)(LODWORD(a4));
  v7 = (**a3)(a3, LODWORD(a4), v6);
  return (*(int (__thiscall **)(int, int))(v5 + 80))(v4, v7);
}
