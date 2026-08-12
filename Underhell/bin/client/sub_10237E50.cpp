int __thiscall sub_10237E50(int (__thiscall ***this)(void *, int), int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = dword_1047CA70;
  v3 = *(_DWORD *)dword_1047CA70;
  v4 = (**this)(this, a2);
  (*(void (__thiscall **)(int, int))(v3 + 124))(v2, v4);
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 360))(dword_1047CA6C);
}
