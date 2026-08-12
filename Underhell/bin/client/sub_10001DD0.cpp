char *sub_10001DD0()
{
  int v0; // edi
  int *v1; // ebx
  int v2; // esi
  int v3; // eax
  char *v4; // esi
  unsigned int v5; // kr04_4

  if ( strlen(Str) )
    return Str;
  v0 = CommandLine_Tier0();
  v1 = (int *)CommandLine_Tier0();
  v2 = *v1;
  v3 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v0 + 32))(v0, "-defaultgamedir", "hl2");
  v4 = (char *)(*(int (__thiscall **)(int *, const char *, int))(v2 + 32))(v1, "-game", v3);
  sub_102282F0(Str, v4, 0x104u);
  if ( strchr(Str, 47) || strchr(Str, 92) )
  {
    sub_102288A0(Str, 0x104u);
    v5 = strlen(Str);
    sub_102282F0(Str, &v4[v5], 260 - v5);
  }
  return Str;
}
