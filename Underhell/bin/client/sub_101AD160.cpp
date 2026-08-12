_DWORD *__userpurge sub_101AD160@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, _DWORD *ArgList)
{
  _DWORD *v4; // edi
  const char *v5; // eax
  const char *v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  char *v11; // eax
  unsigned int v12; // eax
  _DWORD *v13; // eax
  void (__thiscall **v15)(void *, const char *); // [esp+8h] [ebp-4h]
  void (__thiscall **v16)(void *, const char *, char *); // [esp+8h] [ebp-4h]
  int ArgLista; // [esp+14h] [ebp+8h]

  a1[108] = -1;
  v4 = (_DWORD *)sub_10033760();
  if ( v4 )
    v5 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v4 + 1172))(v4);
  else
    v5 = " ";
  (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(off_103E0D18, "(weapon_print_name)", v5);
  if ( v4 )
    v6 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v4 + 1168))(v4);
  else
    v6 = " ";
  (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(off_103E0D18, "(weapon_name)", v6);
  if ( v4 && ArgList && sub_1000B670(v4) )
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 268))(a1, 1, a2);
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 264))(a1, 1);
    v7 = (*(int (__thiscall **)(_DWORD *))(*v4 + 1196))(v4);
    a1[111] = sub_1014FF90(v7);
    v8 = v4[510];
    v9 = (*(int (__thiscall **)(_DWORD *))(*v4 + 1196))(v4);
    v10 = sub_1000A5F0(ArgList, v9);
    if ( v8 >= 0 )
    {
      ArgLista = v10;
    }
    else
    {
      v8 = v10;
      ArgLista = 0;
    }
    v15 = *(void (__thiscall ***)(void *, const char *))off_103E0D18;
    sub_10076640("%d", v8);
    (*v15)(off_103E0D18, "(ammo_primary)");
    v16 = *(void (__thiscall ***)(void *, const char *, char *))off_103E0D18;
    v11 = sub_10076640("%d", ArgLista);
    (*v16)(off_103E0D18, "(ammo_secondary)", v11);
    v12 = a1[107];
    if ( v12 == -1 || *((_DWORD *)off_103DCD74 + 4 * (a1[107] & 0xFFF) + 2) != v12 >> 12 )
      v13 = 0;
    else
      v13 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (a1[107] & 0xFFF) + 1);
    if ( v4 == v13 )
    {
      sub_101AC9F0(a1, v8, 1);
      return (_DWORD *)sub_101ACA50(a1, ArgLista, 1);
    }
    else
    {
      sub_101AC9F0(a1, v8, 0);
      sub_101ACA50(a1, ArgLista, 0);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 1184))(v4) )
      {
        sub_100D0E40(a1, 1);
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
        sub_10248C80("WeaponUsesClips");
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
        sub_10248C80("WeaponDoesNotUseClips");
        sub_100D0E40(a1, 0);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10248C80("WeaponChanged");
      return sub_1000F020(a1 + 107, (int)v4);
    }
  }
  else
  {
    (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(off_103E0D18, "(ammo_primary)", "n/a");
    (**(void (__thiscall ***)(void *, const char *, const char *))off_103E0D18)(off_103E0D18, "(ammo_secondary)", "n/a");
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 268))(a1, 0);
    return (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 264))(a1, 0);
  }
}
