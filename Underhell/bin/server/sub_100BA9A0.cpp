const char *__cdecl sub_100BA9A0(int a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    if ( a2 >= 0 && a2 < sub_10245270(a1) )
    {
      v2 = sub_10245550(a2);
      return (const char *)(v2 + *(_DWORD *)(v2 + 8));
    }
    Msg("Bad sequence in GetSequenceActivityName() for model '%s'!\n", (const char *)(*(_DWORD *)a1 + 12));
  }
  return "Unknown";
}
