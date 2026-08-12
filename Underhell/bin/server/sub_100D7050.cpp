int __cdecl sub_100D7050(int *a1)
{
  const char *v2; // eax
  int v3; // esi
  int v4; // eax
  const char *v5; // ecx
  const char *v6; // eax

  if ( *a1 < 2 )
    return Msg("Format: find_ent_index <index>\n");
  v2 = String;
  if ( *a1 > 1 )
    v2 = (const char *)a1[259];
  v3 = atoi(v2);
  v4 = sub_1025FCC0(v3);
  if ( !v4 )
    return Msg("Found no entity at %d.\n", v3);
  v5 = *(const char **)(v4 + 260);
  if ( !v5 )
    v5 = String;
  v6 = *(const char **)(v4 + 92);
  if ( !v6 )
    v6 = String;
  return Msg("   '%s' : '%s' (entindex %d) \n", v6, v5, v3);
}
