int __cdecl sub_100D6F30(int *a1)
{
  int v2; // ebx
  _DWORD *i; // esi
  const char *v4; // ecx
  const char *v5; // edi
  int v6; // eax
  const char *v7; // ecx
  const char *v8; // edx
  const char *v9; // [esp+8h] [ebp+8h]

  if ( *a1 < 2 )
    return Msg("Format: find_ent <substring>\n");
  v2 = 0;
  if ( *a1 > 1 )
    v9 = (const char *)a1[259];
  else
    v9 = String;
  Msg("Searching for entities with class/target name containing substring: '%s'\n", v9);
  for ( i = (_DWORD *)sub_1012BC10(0); i; i = (_DWORD *)sub_1012BC10(i) )
  {
    v4 = (const char *)i[23];
    if ( !v4 )
      v4 = String;
    v5 = (const char *)i[65];
    if ( !v5 )
      v5 = String;
    if ( v4 && *v4 && sub_10429530(v4, v9) || v5 && *v5 && sub_10429530(v5, v9) )
    {
      ++v2;
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, i[6]);
      v7 = (const char *)i[65];
      if ( !v7 )
        v7 = String;
      v8 = (const char *)i[23];
      if ( !v8 )
        v8 = String;
      Msg("   '%s' : '%s' (entindex %d) \n", v8, v7, v6);
    }
  }
  return Msg("Found %d matches.\n", v2);
}
