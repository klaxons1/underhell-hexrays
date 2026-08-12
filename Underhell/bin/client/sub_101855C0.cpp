int __thiscall sub_101855C0(_BYTE *this)
{
  this[4] = 1;
  (*(void (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "game_newmap",
    0);
  this[4] = 1;
  (*(void (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "round_start",
    0);
  this[4] = 1;
  (*(void (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "player_connect",
    0);
  this[4] = 1;
  (*(void (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "player_info",
    0);
  this[4] = 1;
  (*(void (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "player_team",
    0);
  this[4] = 1;
  (*(void (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "player_spawn",
    0);
  this[4] = 1;
  (*(void (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "player_death",
    0);
  this[4] = 1;
  return (*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
           dword_104131A8,
           this,
           "player_disconnect",
           0);
}
