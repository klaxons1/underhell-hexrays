char __stdcall sub_10321AE0(int a1)
{
  if ( a1 )
  {
    if ( *(char **)(a1 + 92) == "npc_turret_floor"
      || sub_100D6240((_DWORD *)a1, "npc_turret_floor")
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 264))(a1) )
    {
      return 0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 320))(a1) )
    {
      if ( (*(_DWORD *)(__RTDynamicCast(
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&CBaseCombatCharacter `RTTI Type Descriptor',
                          (int)&CBasePlayer `RTTI Type Descriptor',
                          0)
                      + 3416)
          & 0x40) != 0 )
        return 0;
    }
    else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1088))(a1) )
    {
      return 0;
    }
  }
  return 1;
}
