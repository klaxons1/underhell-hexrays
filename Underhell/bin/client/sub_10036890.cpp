int __cdecl sub_10036890(int *a1)
{
  const char *v2; // eax
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  char *v6; // ebx
  char v7; // al
  const char *v8; // ecx
  const char *v9; // eax

  if ( *a1 < 2 )
    return Msg("Format: cl_find_ent_index <index>\n");
  v2 = Locale;
  if ( *a1 > 1 )
    v2 = (const char *)a1[259];
  v3 = atoi(v2);
  v4 = (_DWORD *)sub_1007A6A0(v3);
  v5 = v4;
  if ( !v4 )
    return Msg("Found no entity at %d.\n", v3);
  v6 = sub_10034D90(v4);
  v7 = (*(int (__thiscall **)(_DWORD *))(v5[2] + 32))(v5 + 2);
  v8 = "(DORMANT)";
  if ( !v7 )
    v8 = Locale;
  v9 = v6;
  if ( !v6 )
    v9 = "[NO NAME]";
  return Msg("   '%s' (entindex %d) %s \n", v9, v3, v8);
}
