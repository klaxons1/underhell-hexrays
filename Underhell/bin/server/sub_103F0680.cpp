char __userpurge sub_103F0680@<al>(int a1@<ecx>, int a2@<ebx>, char **a3)
{
  char result; // al
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax

  if ( a3[23] == "weapon_striderbuster"
    || sub_100D6240(a3, "weapon_striderbuster")
    || a3[23] == "npc_grenade_magna"
    || (result = sub_100D6240(a3, "npc_grenade_magna")) != 0 )
  {
    v5 = __RTDynamicCast(
           (int)a3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPhysicsProp `RTTI Type Descriptor',
           0);
    v6 = *(_DWORD *)(a1 + 412);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
    v8 = __RTDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPropJeepEpisodic `RTTI Type Descriptor',
           0);
    if ( v8 )
    {
      sub_101FB2A0((int)a3);
      (*((void (__thiscall **)(char **, int))*a3 + 148))(a3, a2);
      sub_101129A0((unsigned __int16 *)a3 + 160, 4);
      sub_100E0970((int)a3, v9, 0, 0);
      v10 = *(_DWORD *)(a1 + 412);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
      (*((void (__thiscall **)(char **, int))*a3 + 35))(a3, v11);
      sub_103F0390(v8, v5);
      sub_1040B9E0(v5);
      *(_DWORD *)(a1 + 196) = 0;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
