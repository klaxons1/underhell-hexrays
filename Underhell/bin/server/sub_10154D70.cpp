int __cdecl sub_10154D70(int *a1)
{
  const char *v1; // esi
  int result; // eax
  int *v3; // esi
  char *v4; // eax
  char *v5; // eax
  int v6; // edi
  const char *v7; // ecx
  const char *v8; // eax
  int v9; // ebx
  int v10; // esi
  const char *v11; // ecx
  const char *v12; // ecx
  const char *v13; // eax
  int v14[66]; // [esp+4h] [ebp-108h] BYREF

  sub_1042CBA0("sv_cheats");
  v1 = *(const char **)(dword_106B31C8 + 60);
  if ( !v1 )
    v1 = String;
  if ( strstr(v1, "background") == v1 )
  {
    result = Msg("saving in a background map not allowed!\n");
    if ( dword_106B639C > 0 )
      --dword_106B639C;
    return result;
  }
  memset(v14, 0, 256);
  v3 = a1;
  v4 = (char *)String;
  if ( *a1 > 0 )
    v4 = (char *)a1[258];
  sub_10429750((int)v14, v4, 256, -1);
  sub_10429750((int)v14, " ", 256, -1);
  v5 = (char *)String;
  if ( *a1 > 1 )
    v5 = (char *)a1[259];
  sub_10429750((int)v14, v5, 256, -1);
  sub_10429750((int)v14, "\n", 256, -1);
  v6 = dword_106B639C;
  if ( !*(_DWORD *)(v14[65] + 48) && dword_106B639C <= 0 )
  {
    if ( *a1 > 0 )
      v7 = (const char *)a1[258];
    else
      v7 = String;
    if ( strcmp("save", v7) )
      return Msg("No console saving allowed with cheats off\n");
    v8 = *a1 > 1 ? (const char *)a1[259] : String;
    if ( sub_10001320("modeswitchsave", v8) )
      return Msg("No console saving allowed with cheats off\n");
    v3 = a1;
  }
  v9 = g_pCVar;
  if ( !g_pCVar )
    return Msg("No console saving allowed with cheats off\n");
  if ( v6 > 0 )
    dword_106B639C = v6 - 1;
  v10 = *v3;
  v11 = String;
  if ( v10 > 0 )
    v11 = (const char *)a1[258];
  if ( !strcmp("save", v11) )
  {
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)g_pCVar + 28))(g_pCVar, &unk_106B33C8);
  }
  else
  {
    v12 = String;
    if ( v10 > 0 )
      v12 = (const char *)a1[258];
    if ( !strcmp("autosave", v12) )
    {
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)g_pCVar + 28))(g_pCVar, &unk_106B33EC);
    }
    else
    {
      v13 = String;
      if ( v10 > 0 )
        v13 = (const char *)a1[258];
      if ( !sub_10001320("quicksave", v13) )
        (*(void (__thiscall **)(int, void *))(*(_DWORD *)v9 + 28))(v9, &unk_106B3410);
    }
  }
  return (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, v14);
}
