bool __thiscall sub_10074240(int *this)
{
  int HSteamUser; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int HSteamPipe; // [esp+8h] [ebp-4h]

  if ( !SteamClient() )
    return 0;
  HSteamUser = GetHSteamUser();
  HSteamPipe = GetHSteamPipe();
  v4 = SteamClient();
  v5 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)v4 + 20))(
         v4,
         HSteamUser,
         HSteamPipe,
         "SteamUser008");
  *this = v5;
  if ( !v5 )
    return 0;
  v6 = SteamClient();
  v7 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)v6 + 32))(
         v6,
         HSteamUser,
         HSteamPipe,
         "SteamFriends003");
  this[1] = v7;
  if ( !v7 )
    return 0;
  v8 = SteamClient();
  v9 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)v8 + 36))(v8, HSteamUser, "SteamUtils002");
  this[2] = v9;
  if ( !v9 )
    return 0;
  v10 = SteamClient();
  v11 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)v10 + 40))(
          v10,
          HSteamUser,
          HSteamPipe,
          "SteamMatchMaking001");
  this[3] = v11;
  if ( !v11 )
    return 0;
  v12 = SteamClient();
  v13 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)v12 + 52))(
          v12,
          HSteamUser,
          HSteamPipe,
          "SteamMatchMakingServers001");
  this[6] = v13;
  if ( !v13 )
    return 0;
  v14 = SteamClient();
  v15 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)v14 + 68))(
          v14,
          HSteamUser,
          HSteamPipe,
          "STEAMUSERSTATS_INTERFACE_VERSION002");
  this[4] = v15;
  if ( !v15 )
    return 0;
  v16 = SteamClient();
  v17 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)v16 + 72))(
          v16,
          HSteamUser,
          HSteamPipe,
          "STEAMAPPS_INTERFACE_VERSION001");
  this[5] = v17;
  return v17 != 0;
}
