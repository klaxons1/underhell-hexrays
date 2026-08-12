char __stdcall sub_103FA4D0(int a1)
{
  char result; // al
  int v2; // eax

  if ( sub_103D1B00(a1) )
    return 1;
  v2 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPhysicsProp `RTTI Type Descriptor',
         0);
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(v2 + 1120) + 92))(v2 + 1120, 12) )
      return 1;
  }
  if ( *(char **)(a1 + 92) == "grenade_helicopter" )
    return 1;
  if ( sub_100D6240((_DWORD *)a1, "grenade_helicopter") )
    return 1;
  if ( *(char **)(a1 + 92) == "weapon_striderbuster" )
    return 1;
  result = sub_100D6240((_DWORD *)a1, "weapon_striderbuster");
  if ( result )
    return 1;
  return result;
}
