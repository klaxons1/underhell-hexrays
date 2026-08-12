int __cdecl sub_100367A0(int *a1)
{
  _DWORD *i; // ebx
  char *v3; // eax
  const char *v4; // edi
  bool v5; // zf
  const char *v6; // eax
  int v7; // eax
  const char *v8; // [esp-Ch] [ebp-10h]
  int v9; // [esp+0h] [ebp-4h]
  const char *v10; // [esp+Ch] [ebp+8h]

  if ( *a1 < 2 )
    return Msg("Format: cl_find_ent <substring>\n");
  v9 = 0;
  if ( *a1 > 1 )
    v10 = (const char *)a1[259];
  else
    v10 = Locale;
  Msg("Searching for client entities with classname containing substring: '%s'\n", v10);
  for ( i = (_DWORD *)sub_1007A820(0); i; i = (_DWORD *)sub_1007A820(i) )
  {
    v3 = sub_10034D90(i);
    v4 = v3;
    if ( v3 && *v3 && sub_10227EE0(v3, v10) )
    {
      ++v9;
      v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(i[2] + 32))(i + 2) == 0;
      v6 = "(DORMANT)";
      if ( v5 )
        v6 = Locale;
      v7 = (*(int (__thiscall **)(_DWORD *, const char *))(i[2] + 36))(i + 2, v6);
      Msg("   '%s' (entindex %d) %s \n", v4, v7, v8);
    }
  }
  return Msg("Found %d matches.\n", v9);
}
