bool __thiscall sub_103B0920(void *this, int a2)
{
  unsigned int v2; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  void *v6; // edi
  int v7; // ecx
  unsigned int v9; // eax
  int v10; // esi
  int *v11; // ecx

  v2 = *(_DWORD *)(a2 + 40);
  if ( v2 == -1 )
    return 0;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  v5 = v2 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v5 )
    return 0;
  v6 = (void *)*v4;
  if ( !*v4 )
    return 0;
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v5 )
    v7 = *v4;
  else
    v7 = 0;
  if ( (unsigned __int8)sub_103D2100(v7) )
    return 1;
  v9 = *(_DWORD *)(a2 + 44);
  if ( v9 == -1
    || (v11 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v9 >> 12) )
  {
    v10 = 0;
  }
  else
  {
    v10 = *v11;
    if ( *v11
      && (*(char **)(v10 + 92) == "weapon_striderbuster"
       || sub_100D6240((_DWORD *)v10, "weapon_striderbuster")
       || *(char **)(v10 + 92) == "npc_grenade_magna"
       || sub_100D6240((_DWORD *)v10, "npc_grenade_magna")) )
    {
      return 1;
    }
  }
  return v6 == this && (void *)v10 == this;
}
