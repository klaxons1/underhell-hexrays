const char *__stdcall sub_10417D80(int a1)
{
  const char *v2; // eax

  if ( !a1 )
    return String;
  v2 = *(const char **)(a1 + 92);
  if ( !v2 )
    v2 = String;
  if ( !_stricmp(v2, "logic_choreographed_scene") )
    return sub_10223FC0(a1);
  else
    return String;
}
