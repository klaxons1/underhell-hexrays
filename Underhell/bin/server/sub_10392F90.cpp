char __thiscall sub_10392F90(_BYTE *this, _DWORD *a2)
{
  unsigned int v2; // eax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx

  v2 = a2[11];
  if ( v2 == -1 || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v2 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
  if ( *(char **)(v4 + 92) == "npc_headcrab_black" || sub_100D6240((_DWORD *)v4, "npc_headcrab_black") )
    return 0;
  v5 = a2[11];
  if ( v5 == -1 || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
  if ( *(char **)(v6 + 92) == "npc_headcrab_poison" || sub_100D6240((_DWORD *)v6, "npc_headcrab_poison") )
    return 0;
  else
    return sub_10023590(this, a2);
}
