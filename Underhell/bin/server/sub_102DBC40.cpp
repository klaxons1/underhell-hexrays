int __thiscall sub_102DBC40(_DWORD *this, int a2)
{
  const char *v3; // eax
  int v5; // edi
  const char *v6; // eax
  int v7; // eax

  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v3 = *(const char **)(a2 + 8);
    if ( !v3 )
      v3 = String;
  }
  else
  {
    v3 = sub_1010D460(a2 + 8);
  }
  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, v3) < 0 )
    return Warning("SetPlayerKickModel Called with model that was not cached!\n");
  v5 = sub_101E7EA0(this, 2);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v6 = *(const char **)(a2 + 8);
    if ( !v6 )
      v6 = String;
  }
  else
  {
    v6 = sub_1010D460(a2 + 8);
  }
  (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v5 + 840))(v5, v6, 0);
  v7 = sub_101E7EA0(this, 2);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 836))(v7, 1);
}
