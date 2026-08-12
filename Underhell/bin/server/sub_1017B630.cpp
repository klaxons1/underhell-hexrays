int __cdecl sub_1017B630(int *a1)
{
  char *v1; // esi
  const char *v2; // eax
  int v3; // edi
  int v4; // eax
  char *v6; // eax

  v1 = (char *)String;
  if ( *a1 > 1 )
    v1 = (char *)a1[259];
  if ( *a1 > 2 )
    v2 = (const char *)a1[260];
  else
    v2 = String;
  if ( !v1 || !v2 )
    return Msg(
             "Usage: global_set <globalname> <state>: Sets the state of the given env_global (0 = OFF, 1 = ON, 2 = DEAD).\n");
  v3 = atoi(v2);
  v4 = sub_101679A0((int)v1);
  if ( v4 >= 0 )
    return sub_101678B0(v4, v3);
  v6 = *(char **)(dword_106B31C8 + 60);
  if ( !v6 )
    v6 = (char *)String;
  return sub_10167E00(v1, v6, v3);
}
