char __cdecl sub_1018BB50(int a1, char a2)
{
  int v2; // eax
  int v3; // eax

  if ( *(const char **)(a1 + 92) == "worldspawn"
    || sub_100D6240((_DWORD *)a1, "worldspawn")
    || *(const char **)(a1 + 92) == "player"
    || sub_100D6240((_DWORD *)a1, "player") )
  {
    return 0;
  }
  if ( *(char **)(a1 + 92) == "prop_door*"
    || sub_100D6240((_DWORD *)a1, "prop_door*")
    || *(char **)(a1 + 92) == "func_door*"
    || sub_100D6240((_DWORD *)a1, "func_door*") )
  {
    return a2 & 1;
  }
  if ( *(const char **)(a1 + 92) == "func_brush" || sub_100D6240((_DWORD *)a1, "func_brush") )
  {
    v2 = *(_DWORD *)(a1 + 800);
    if ( !v2 )
      return (a2 & 4) != 0;
    v3 = v2 - 1;
    if ( !v3 )
      return 1;
    if ( v3 == 1 )
      return 0;
  }
  if ( (*(char **)(a1 + 92) == "func_breakable" || sub_100D6240((_DWORD *)a1, "func_breakable"))
    && *(_DWORD *)(a1 + 220)
    && *(_BYTE *)(a1 + 225) == 2 )
  {
    return (a2 & 2) != 0;
  }
  if ( *(char **)(a1 + 92) != "func_breakable_surf" && !sub_100D6240((_DWORD *)a1, "func_breakable_surf")
    || *(_BYTE *)(a1 + 225) != 2 )
  {
    return 0;
  }
  return (a2 & 2) != 0;
}
