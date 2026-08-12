int __stdcall sub_102DCD30(int a1)
{
  const char *v1; // esi
  const char *v2; // eax

  if ( *(_DWORD *)(dword_10696BCC + 48) )
  {
    v1 = *(const char **)(a1 + 92);
    if ( !v1 )
      v1 = String;
    v2 = sub_10276110(4u);
    Msg("Player switched to %s, proficiency is %s\n", v1, v2);
  }
  return 4;
}
