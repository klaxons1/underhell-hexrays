int __thiscall sub_102362C0(int (__thiscall ***this)(_DWORD))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v3 = (**this)(this);
  v4 = (*(int (__thiscall **)(int, int))(v2 + 76))(v1, v3);
  if ( !v4 )
    return 0;
  v5 = dword_1047CA70;
  v6 = *(_DWORD *)dword_1047CA70;
  v7 = sub_10278FB0();
  return (*(int (__thiscall **)(int, int, int))(v6 + 216))(v5, v4, v7);
}
