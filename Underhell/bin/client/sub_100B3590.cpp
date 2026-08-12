int __thiscall sub_100B3590(int this)
{
  int result; // eax

  *(_BYTE *)(this + 4) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "game_newmap",
    0);
  *(_BYTE *)(this + 4) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "hltv_cameraman",
    0);
  *(_BYTE *)(this + 4) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "hltv_fixed",
    0);
  *(_BYTE *)(this + 4) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "hltv_chase",
    0);
  *(_BYTE *)(this + 4) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "hltv_message",
    0);
  *(_BYTE *)(this + 4) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "hltv_title",
    0);
  *(_BYTE *)(this + 4) = 1;
  (*(void (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this,
    "hltv_status",
    0);
  sub_100B2F10(this);
  *(_DWORD *)(this + 84) = 0;
  *(_BYTE *)(this + 88) = 0;
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "tv_transmitall");
  dword_1042F990 = result;
  return result;
}
