char sub_10153CB0()
{
  int v0; // eax

  sub_10167CF0();
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "exec game.cfg\n");
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 148))(dword_106B31D0);
  byte_1060F308 = 1;
  v0 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
         dword_106B31F8,
         "game_init",
         0);
  if ( v0 )
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v0, 0);
  return 1;
}
