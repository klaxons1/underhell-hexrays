const char *__stdcall sub_1015E540(int a1)
{
  int v1; // esi
  int v2; // eax
  const char *v3; // eax
  char *v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  const char *result; // eax
  int v9; // eax
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v1 = a1;
  v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
  v3 = (const char *)(*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                       dword_106B31D0,
                       v2,
                       "name");
  v4 = (char *)v3;
  if ( *(_BYTE *)(a1 + 4296) && strcmp((const char *)(a1 + 4296), v3) )
  {
    sub_10429A00(Buffer, 0x100u, "%s changed name to %s\n", a1 - 56);
    sub_10260160(3, Buffer, 0, 0, 0, 0);
    v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
           dword_106B31F8,
           "player_changename",
           0);
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v5 + 40))(v5, "userid", v6);
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v5 + 48))(v5, "oldname", a1 + 4296);
      (*(void (__thiscall **)(int, const char *, char *))(*(_DWORD *)v5 + 48))(v5, "newname", v4);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v5, 0);
    }
    sub_101E37A0(v4);
    v1 = a1;
  }
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v1 + 24));
  result = (const char *)(*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                           dword_106B31D0,
                           v7,
                           "fov_desired");
  if ( result )
  {
    v9 = atoi(result);
    if ( v9 <= 90 )
    {
      if ( v9 < 75 )
        v9 = 75;
      return (const char *)sub_101EE710(v9);
    }
    else
    {
      return (const char *)sub_101EE710(90);
    }
  }
  return result;
}
