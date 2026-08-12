bool __thiscall sub_103F9E80(int *this, int a2, int a3)
{
  void *v5; // eax
  int v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  if ( a2 == this[3] )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    return 0;
  v5 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  v6 = (int)v5;
  if ( !v5 )
    return 0;
  if ( sub_103F9DE0(v5) )
  {
    v7 = (_DWORD *)__RTDynamicCast(
                     v6,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CPhysicsProp `RTTI Type Descriptor',
                     0);
    if ( v7 )
      return sub_10209990(v7);
    if ( *(char **)(v6 + 92) == "prop_physics" || sub_100D6240((_DWORD *)v6, "prop_physics") )
    {
      v7 = (_DWORD *)__RTDynamicCast(
                       v6,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CPhysicsProp `RTTI Type Descriptor',
                       0);
      if ( v7 )
        return sub_10209990(v7);
    }
    else if ( *(char **)(v6 + 92) == "func_physbox" || sub_100D6240((_DWORD *)v6, "func_physbox") )
    {
      v8 = (_DWORD *)__RTDynamicCast(
                       v6,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CPhysBox `RTTI Type Descriptor',
                       0);
      if ( v8 )
        return sub_101DD750(v8);
    }
    return 0;
  }
  return sub_10265590(this, a2, a3);
}
