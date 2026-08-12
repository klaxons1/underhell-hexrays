int __thiscall sub_10236340(int (__thiscall ***this)(_DWORD))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v3 = (**this)(this);
  return (*(int (__thiscall **)(int, int))(v2 + 60))(v1, v3);
}
