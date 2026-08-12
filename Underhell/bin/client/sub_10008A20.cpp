const char *__cdecl sub_10008A20(int a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    if ( a2 >= 0 && a2 < sub_10126D70(a1) )
    {
      v2 = sub_10127960(a2);
      return (const char *)(v2 + *(_DWORD *)(v2 + 4));
    }
    Msg("Bad sequence in GetSequenceName() for model '%s'!\n", (const char *)(*(_DWORD *)a1 + 12));
  }
  return "Unknown";
}
