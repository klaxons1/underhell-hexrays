int __thiscall sub_10236310(int (__thiscall ***this)(void *, int), int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = dword_1047CA70;
  v3 = *(_DWORD *)dword_1047CA70;
  v4 = (**this)(this, a2);
  return (*(int (__thiscall **)(int, int))(v3 + 56))(v2, v4);
}
