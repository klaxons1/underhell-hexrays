int __stdcall sub_1012BE00(const char *a1, int a2, int a3, int a4)
{
  const char *v4; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( *a1 != 33 )
    return 0;
  v4 = a1 + 1;
  if ( a1 + 1 == "player" || !_stricmp(a1 + 1, "player") )
    return sub_1025FB50(1);
  if ( v4 != "pvsplayer" && _stricmp(a1 + 1, "pvsplayer") )
  {
    if ( v4 == "activator" || !_stricmp(a1 + 1, "activator") )
      return a3;
    if ( v4 == "caller" || !_stricmp(a1 + 1, "caller") )
      return a4;
    if ( sub_10043F40((char *)a1 + 1, "picker") )
    {
      v8 = sub_1025FB50(1);
      return sub_101E94B0(v8);
    }
    if ( sub_10043F40((char *)a1 + 1, "self") )
      return a2;
    Warning("Invalid entity search name %s\n", a1);
    return 0;
  }
  v6 = a2;
  if ( !a2 )
  {
    v6 = a3;
    if ( !a3 )
      return sub_1025FB50(1);
  }
  v7 = sub_10262560(*(_DWORD *)(v6 + 24));
  return sub_100AC640(v7);
}
