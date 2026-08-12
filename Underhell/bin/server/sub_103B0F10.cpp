bool __thiscall sub_103B0F10(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  bool result; // al

  v1 = this[103];
  result = 0;
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( v2[1] == v3 )
    {
      if ( *v2 )
      {
        v4 = v2[1] == v3 ? *v2 : 0;
        if ( *(char **)(v4 + 92) == "npc_combinedropship" || sub_100D6240((_DWORD *)v4, "npc_combinedropship") )
          return 1;
      }
    }
  }
  return result;
}
