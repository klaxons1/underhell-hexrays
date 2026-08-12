void __thiscall sub_1026C450(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // esi

  if ( !this[90] )
  {
    v3 = dword_1047CA70;
    v4 = *(_DWORD *)dword_1047CA70;
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 104))(this);
    v6 = (*(int (__thiscall **)(int, int, int))(v4 + 216))(v3, a2, v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1052))(v6);
    sub_1026EF90(v6);
    sub_1026C2F0(this, v6);
  }
}
