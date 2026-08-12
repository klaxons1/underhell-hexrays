int __thiscall sub_102823A0(int (__thiscall ***this)(_DWORD), int a2, float a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax

  v4 = *(_DWORD *)dword_106B31D0;
  v5 = (**this)(this);
  v6 = ((int (__thiscall *)(int (__thiscall ***)(_DWORD), _DWORD))**this)(this, *(_DWORD *)(v5 + 12));
  return (*(int (__thiscall **)(int, int, _DWORD, int (__thiscall ***)(_DWORD), _DWORD))(v4 + 244))(
           dword_106B31D0,
           a2,
           LODWORD(a3),
           this,
           *(_DWORD *)(v6 + 4));
}
