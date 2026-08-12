char __thiscall sub_1013C2C0(char *this)
{
  char *v1; // esi

  v1 = this - 8;
  *(this - 4) = 1;
  (*(void (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    this - 8,
    "player_changename",
    1);
  v1[4] = 1;
  (*(void (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    v1,
    "player_activate",
    1);
  v1[4] = 1;
  (*(void (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    v1,
    "player_death",
    1);
  v1[4] = 1;
  (*(void (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    v1,
    "player_team",
    1);
  v1[4] = 1;
  (*(void (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    v1,
    "player_disconnect",
    1);
  v1[4] = 1;
  (*(void (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_106B31F8 + 12))(
    dword_106B31F8,
    v1,
    "player_connect",
    1);
  return 1;
}
