char __thiscall sub_10236760(int (__thiscall ***this)(void *, int), int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax

  if ( !a2 )
    return 0;
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**this)(this, a2);
  return (*(int (__thiscall **)(int, int))(v4 + 88))(v3, v5);
}
