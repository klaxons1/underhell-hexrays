int __cdecl sub_100AE0E0(int a1, int a2, int a3, int a4, char *String1)
{
  int v5; // esi
  int result; // eax

  if ( dword_10412D50 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10412D50 + 48))(dword_10412D50, 1);
  v5 = dword_1042EA48;
  dword_10412D50 = 0;
  if ( dword_1042EA48 )
  {
    while ( _stricmp(String1, *(const char **)v5) )
    {
      v5 = *(_DWORD *)(v5 + 8);
      if ( !v5 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v5 = 0;
    Error("OnGameRulesCreationStringChanged: missing gamerules class '%s' on the client", String1);
  }
  result = (*(int (**)(void))(v5 + 4))();
  if ( !dword_10412D50 )
    return Error("OnGameRulesCreationStringChanged: game rules entity (%s) not created", String1);
  return result;
}
