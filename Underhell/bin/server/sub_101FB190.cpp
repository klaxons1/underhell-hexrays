int __cdecl sub_101FB190(int a1, int a2, int a3)
{
  int (__thiscall ***v3)(_DWORD, int, int); // eax

  v3 = (int (__thiscall ***)(_DWORD, int, int))__RTDynamicCast(
                                                 a1,
                                                 0,
                                                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                                                 (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
                                                 0);
  if ( v3 )
    return (**v3)(v3, a2, a3);
  else
    return 1;
}
