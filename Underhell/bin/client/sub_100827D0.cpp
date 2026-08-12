int __thiscall sub_100827D0(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // eax

  *(_DWORD *)(this + 16) = sub_100B4090("CHudChat");
  v2 = sub_100B4090("CHudWeaponSelection");
  v3 = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 24) = v2;
  (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v3 + 768))(v3, "scripts/HudLayout.res", 0, 0);
  *(_BYTE *)(this + 8) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 4,
    "player_connect",
    0);
  *(_BYTE *)(this + 8) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 4,
    "player_disconnect",
    0);
  *(_BYTE *)(this + 8) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 4,
    "player_team",
    0);
  *(_BYTE *)(this + 8) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 4,
    "server_cvar",
    0);
  *(_BYTE *)(this + 8) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 4,
    "player_changename",
    0);
  *(_BYTE *)(this + 8) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 4,
    "teamplay_broadcast_audio",
    0);
  *(_BYTE *)(this + 8) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 4,
    "achievement_earned",
    0);
  v5 = sub_100B1EE0(v4);
  sub_100B3590(v5);
  *(_DWORD *)(this + 20) = 1;
  sub_1012CAB0("VGUIMenu", sub_10082490);
  return sub_1012CAB0("Rumble", sub_100815C0);
}
