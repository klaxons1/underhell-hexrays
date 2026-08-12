bool __cdecl sub_1015E3F0(int a1)
{
  bool result; // al
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = 1;
  if ( !(unsigned __int8)sub_10163140(a1) )
  {
    v2 = *(_DWORD *)(a1 + 76);
    if ( !v2 )
      return 0;
    if ( *(_BYTE *)(v2 + 306) != 7 )
      return 0;
    if ( *(char **)(v2 + 92) != "prop_door_rotating" && !sub_100D6240((_DWORD *)v2, "prop_door_rotating") )
    {
      v3 = *(_DWORD *)(a1 + 76);
      if ( *(char **)(v3 + 92) != "func_door" && !sub_100D6240((_DWORD *)v3, "func_door") )
      {
        v4 = *(_DWORD *)(a1 + 76);
        if ( *(char **)(v4 + 92) != "func_door_rotating" && !sub_100D6240((_DWORD *)v4, "func_door_rotating") )
          return 0;
      }
    }
  }
  return result;
}
