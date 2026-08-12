char __cdecl sub_101534B0(char *Destination, size_t Count)
{
  int v2; // eax
  char *v3; // ebx
  unsigned int v5; // ecx

  v2 = CommandLine_Tier0();
  v3 = (char *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v2 + 32))(v2, "-game", "hl2");
  if ( strlen(v3) > Count )
    return 0;
  sub_104299C0(Destination, v3, Count);
  if ( sub_10429720(Destination, 47, Count) || sub_10429720(Destination, 92, Count) )
  {
    sub_10429C50(Destination, Count);
    v5 = strlen(Destination);
    sub_104299C0(Destination, &v3[v5], strlen(v3) + 1 - v5);
  }
  return 1;
}
