void __thiscall sub_101E66D0(_DWORD *this, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v4 = a2;
  if ( sub_10249D60(a2) )
  {
    if ( a2 != sub_100D8840(this) )
    {
      v6 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "player_team",
             0);
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, this[6]);
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v6 + 40))(v6, "userid", v7);
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v6 + 40))(v6, "team", a2);
        v8 = *(_DWORD *)v6;
        v9 = sub_100D8840(this);
        (*(void (__thiscall **)(int, const char *, int))(v8 + 40))(v6, "oldteam", v9);
        (*(void (__thiscall **)(int, const char *, bool))(*(_DWORD *)v6 + 40))(v6, "disconnect", this[1001] == 1);
        (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v6 + 40))(v6, "autoteam", a3);
        (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v6 + 40))(v6, "silent", a4);
        (*(void (__thiscall **)(int, const char *, _DWORD *))(*(_DWORD *)v6 + 48))(v6, "name", this + 1074);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v6, 0);
        v4 = a2;
      }
      if ( sub_100D87F0(this) )
      {
        v10 = sub_100D87F0(this);
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 764))(v10, this);
      }
      if ( v4 )
      {
        v11 = sub_10249D60(v4);
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 760))(v11, this);
      }
      sub_100E0CD0((int)this, v4);
    }
  }
  else
  {
    Warning("CBasePlayer::ChangeTeam( %d ) - invalid team index.\n", a2);
  }
}
