void __thiscall sub_1026AF70(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // eax

  if ( !this[90] )
  {
    v2 = dword_1047CA70;
    v3 = *(_DWORD *)dword_1047CA70;
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 104))(this);
    v5 = (*(int (__thiscall **)(int, int, int))(v3 + 216))(v2, a2, v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 1056))(v5);
  }
}
