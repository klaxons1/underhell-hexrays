int __thiscall sub_10075880(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int i; // esi
  int v9; // ecx
  int *v10; // edi
  int v11; // esi
  int HSteamPipe; // eax
  int *v13; // edi
  int v14; // esi
  int v15; // eax

  nullsub_4();
  sub_10073470();
  v2 = (int)*off_103E466C;
  v3 = sub_1013A340();
  (*(void (__thiscall **)(int (***)(), int))(v2 + 40))(off_103E466C, v3);
  v4 = (int)*off_103E466C;
  v5 = sub_100FACA0();
  (*(void (__thiscall **)(int (***)(), int))(v4 + 40))(off_103E466C, v5);
  v6 = (int)*off_103E466C;
  v7 = sub_10117B10();
  (*(void (__thiscall **)(int (***)(), int))(v6 + 40))(off_103E466C, v7);
  sub_1014C450();
  sub_100D9E50();
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 24))(dword_1044CC48);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 16))(dword_1044CC48);
  (*(void (__thiscall **)(int *))(*off_103ED0D8 + 28))(off_103ED0D8);
  sub_10150600();
  sub_1017CBC0();
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 12))(dword_10439968);
  sub_101FCC60(off_103EE614);
  for ( i = this[4] - 1; i >= 0; --i )
  {
    v9 = *(_DWORD *)(this[1] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 52))(v9);
  }
  this[4] = 0;
  sub_100D31B0();
  sub_100B55B0(&dword_1042FB78);
  sub_10132090();
  sub_10072B70();
  sub_10235400();
  sub_10233730();
  sub_102289E0();
  sub_1022CB30();
  v10 = (int *)SteamClient();
  v11 = *v10;
  GetHSteamUser();
  HSteamPipe = GetHSteamPipe();
  (*(void (__thiscall **)(int *, int))(v11 + 16))(v10, HSteamPipe);
  v13 = (int *)SteamClient();
  v14 = *v13;
  v15 = GetHSteamPipe();
  return (*(int (__thiscall **)(int *, int))(v14 + 4))(v13, v15);
}
