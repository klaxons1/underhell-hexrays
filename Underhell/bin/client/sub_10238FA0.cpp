char __thiscall sub_10238FA0(_DWORD *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v12; // eax

  if ( dword_103FCF4C == -1 )
    return 0;
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C);
  if ( !v2 )
    return 0;
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = sub_10278FB0();
  if ( !(*(int (__thiscall **)(int, int, int))(v4 + 216))(v3, v2, v5) )
    return 0;
  if ( dword_103FCF4C == -1
    || (v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C)) == 0 )
  {
    v10 = 0;
  }
  else
  {
    v7 = dword_1047CA70;
    v8 = *(_DWORD *)dword_1047CA70;
    v9 = sub_10278FB0();
    v10 = (*(int (__thiscall **)(int, int, int))(v8 + 216))(v7, v6, v9);
  }
  if ( (_DWORD *)v10 == this )
    return 1;
  if ( *(_BYTE *)(this[9] + 88) || !(*(int (__thiscall **)(_DWORD *))(*this + 144))(this) )
    return 0;
  v12 = (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 644))(v12);
}
