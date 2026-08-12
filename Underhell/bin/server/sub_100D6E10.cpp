int __cdecl sub_100D6E10(int *a1)
{
  int v3; // esi
  const char *v4; // edi
  const char *v5; // eax
  const char *v6; // edi
  const char *v7; // eax
  const char *v8; // edi
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  int v12; // [esp+Ch] [ebp+8h]

  if ( *a1 < 2 )
    return Msg("Removes all entities of the specified type\n\tArguments:   \t{entity_name} / {class_name}\n");
  v12 = 0;
  v3 = sub_1012BC10(0);
  if ( !v3 )
    goto LABEL_20;
  do
  {
    v4 = *(const char **)(v3 + 260);
    if ( v4 )
    {
      v5 = sub_100634F0(a1, 1);
      if ( v5 == v4 || !_stricmp(v5, v4) )
        goto LABEL_14;
    }
    v6 = *(const char **)(v3 + 92);
    if ( v6 )
    {
      v7 = sub_100634F0(a1, 1);
      if ( v7 == v6 || !_stricmp(v7, v6) )
        goto LABEL_14;
    }
    v8 = *(const char **)(v3 + 92);
    if ( !v8 )
      v8 = String;
    v9 = sub_100634F0(a1, 1);
    if ( v9 == v8 || !_stricmp(v9, v8) )
    {
LABEL_14:
      sub_1025FAC0(v3);
      ++v12;
    }
    v3 = sub_1012BC10(v3);
  }
  while ( v3 );
  if ( v12 )
  {
    v10 = String;
    if ( *a1 > 1 )
      v10 = (const char *)a1[259];
    return Msg("Removed %d %s's\n", v12, v10);
  }
  else
  {
LABEL_20:
    v11 = String;
    if ( *a1 > 1 )
      v11 = (const char *)a1[259];
    return Msg("No %s found.\n", v11);
  }
}
