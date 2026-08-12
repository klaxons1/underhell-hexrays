char __stdcall sub_1013C440(int ArgList)
{
  int v2; // edi
  int v3; // ebx
  char v4; // di
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // ebx
  int v10; // esi
  int v11; // ebx
  int v12; // eax
  _DWORD *v13; // esi
  int v14; // ebx
  int v15; // eax
  char v16; // si
  int v17; // eax
  int v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+10h] [ebp-8h]
  const char *ArgLista; // [esp+20h] [ebp+8h]
  char ArgListb; // [esp+20h] [ebp+8h]
  int ArgListc; // [esp+20h] [ebp+8h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)ArgList + 4))(ArgList);
  ArgLista = (const char *)v2;
  v3 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)ArgList + 24))(ArgList, "userid", 0);
  if ( !sub_104291C0(v2, "player_connect", 14) )
  {
    v4 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(ArgList, "name", String);
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(ArgList, "address", String);
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(ArgList, "networkid", String);
    sub_1025F5A0("\"%s<%i><%s><>\" connected, address \"%s\"\n", v4);
    return 1;
  }
  if ( !sub_104291C0(v2, "player_disconnect", 17) )
  {
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(ArgList, "reason", String);
    ArgListb = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(
                 ArgList,
                 "name",
                 String);
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(ArgList, "networkid", String);
    v6 = (_DWORD *)sub_10261A90(v3);
    if ( v6 )
    {
      v7 = sub_100D87F0(v6);
      if ( v7 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 728))(v7);
    }
    sub_1025F5A0("\"%s<%i><%s><%s>\" disconnected (reason \"%s\")\n", ArgListb);
    return 1;
  }
  v8 = (_DWORD *)sub_10261A90(v3);
  if ( !v8 )
  {
    DevMsg("CEventLog::PrintPlayerEvent: Failed to find player (userid: %i, event: %s)\n", v3, ArgLista);
    return 0;
  }
  if ( sub_104291C0(ArgLista, "player_team", 11) )
  {
    if ( sub_104291C0(ArgLista, "player_death", 12) )
    {
      if ( !sub_104291C0(ArgLista, "player_activate", 15) )
      {
        sub_101E77C0(v8);
        sub_1025F5A0("\"%s<%i><%s><>\" entered the game\n", (_BYTE)v8 - 56);
        return 1;
      }
      if ( sub_104291C0(ArgLista, "player_changename", 17) )
        return 0;
      (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(ArgList, "newname", String);
      v16 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)ArgList + 32))(
              ArgList,
              "oldname",
              String);
      v17 = sub_100D87F0(v8);
      if ( v17 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 728))(v17);
      sub_101E77C0(v8);
      sub_1025F5A0("\"%s<%i><%s><%s>\" changed name to \"%s\"\n", v16);
      return 1;
    }
    else
    {
      v18 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)ArgList + 24))(ArgList, "attacker", 0);
      v13 = (_DWORD *)sub_10261A90(v18);
      v14 = sub_100D87F0(v8);
      if ( v13 )
        sub_100D87F0(v13);
      if ( v8 == v13 )
      {
        if ( v14 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 728))(v14);
        sub_101E77C0(v8);
        sub_1025F5A0("\"%s<%i><%s><%s>\" committed suicide with \"%s\"\n", (_BYTE)v8 - 56);
        return 1;
      }
      else if ( v13 )
      {
        v15 = sub_100D87F0(v13);
        v19 = v15;
        if ( v14 )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 728))(v14);
          v15 = v19;
        }
        if ( v15 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 728))(v15);
        sub_101E77C0(v8);
        sub_101E77C0(v13);
        sub_1025F5A0("\"%s<%i><%s><%s>\" killed \"%s<%i><%s><%s>\"\n", (_BYTE)v13 - 56);
        return 1;
      }
      else
      {
        if ( v14 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 728))(v14);
        sub_101E77C0(v8);
        sub_1025F5A0("\"%s<%i><%s><%s>\" committed suicide with \"world\"\n", (_BYTE)v8 - 56);
        return 1;
      }
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)ArgList + 20))(
            ArgList,
            "disconnect",
            0) )
    {
      v9 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)ArgList + 24))(ArgList, "team", 0);
      ArgListc = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)ArgList + 24))(ArgList, "oldteam", 0);
      v10 = sub_10249D60(v9);
      v11 = sub_10249D60(ArgListc);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, v8[6]);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 728))(v10);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 728))(v11, v12);
      sub_101E77C0(v8);
      sub_1025F5A0("\"%s<%i><%s><%s>\" joined team \"%s\"\n", (_BYTE)v8 - 56);
    }
    return 1;
  }
}
