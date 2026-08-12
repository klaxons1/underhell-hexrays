int __thiscall sub_10236170(int (__thiscall ***this)(void *, int, int), int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax

  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**this)(this, a2, a3);
  return (*(int (__thiscall **)(int, int))(v4 + 12))(v3, v5);
}
