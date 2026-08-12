int __thiscall sub_1013C200(int *this, int a2)
{
  int v3; // edi
  bool v5; // zf
  int v6; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( !sub_104291C0(v3, "server_", 7) )
    return 1;
  if ( !sub_104291C0(v3, "player_", 7) )
    return (*(int (__thiscall **)(int *, int))(*this + 16))(this, a2);
  if ( !sub_104291C0(v3, "team_", 5) )
    return (*(int (__thiscall **)(int *, int))(*this + 20))(this, a2);
  v5 = sub_104291C0(v3, "game_", 5) == 0;
  v6 = *this;
  if ( v5 )
    return (*(int (__thiscall **)(int *, int))(v6 + 12))(this, a2);
  else
    return (*(int (__thiscall **)(int *, int))(v6 + 24))(this, a2);
}
