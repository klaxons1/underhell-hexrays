int __thiscall sub_1024DA20(int (__thiscall ***this)(_DWORD))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = dword_1047CA6C;
  v2 = *(_DWORD *)dword_1047CA6C;
  v3 = (**this)(this);
  return (*(int (__thiscall **)(int, int))(v2 + 172))(v1, v3);
}
