int __cdecl sub_100BAC80(int a1, int a2)
{
  int v2; // ebx
  int result; // eax
  const char *v4; // esi

  v2 = sub_10245550(a2);
  *(_DWORD *)(v2 + 12) |= 0x1000u;
  if ( a1 )
  {
    if ( a2 >= 0 && a2 < sub_10245270(a1) )
    {
      result = sub_10245550(a2);
      v4 = (const char *)(result + *(_DWORD *)(result + 8));
      if ( !*v4 )
        return result;
      goto LABEL_5;
    }
    Msg("Bad sequence in GetSequenceActivityName() for model '%s'!\n", (const char *)(*(_DWORD *)a1 + 12));
  }
  v4 = "Unknown";
LABEL_5:
  result = sub_10002030((int)v4);
  if ( result == -1 )
    result = sub_100032E0((int)v4);
  *(_DWORD *)(v2 + 16) = result;
  return result;
}
