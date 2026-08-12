void __cdecl sub_100864A0(int *a1)
{
  const char *v1; // eax
  const char *v2; // esi

  v1 = String;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  dword_10608F94 = atoi(v1);
  if ( *a1 > 2 )
    v2 = (const char *)a1[260];
  else
    v2 = String;
  dword_10608F98 = atoi(v2);
  DevMsg("ai_debug_node_connect: debugging enbabled for %d <--> %d\n", dword_10608F94, dword_10608F98);
}
