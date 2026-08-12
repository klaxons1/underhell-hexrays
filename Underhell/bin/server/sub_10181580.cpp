int __cdecl sub_10181580(int a1)
{
  _DWORD *v1; // esi
  char *v2; // eax
  _DWORD *v3; // eax
  const char *v4; // eax

  v1 = (_DWORD *)a1;
  if ( !a1 || !*(_DWORD *)(a1 + 100) )
    return 1;
  v2 = (char *)*sub_10181480(&a1, *(char **)(a1 + 100));
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( !v3 )
    return 1;
  if ( v3 == v1 )
  {
    v4 = sub_100D6390(v1);
    Warning("LEVEL DESIGN ERROR: Entity %s is parented to itself!\n", v4);
    return 1;
  }
  return sub_10181580(v3) + 1;
}
