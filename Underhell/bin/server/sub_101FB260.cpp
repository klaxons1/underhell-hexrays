char __cdecl sub_101FB260(int a1, int a2)
{
  int v2; // eax

  v2 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
         0);
  if ( v2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 32))(v2, a2);
  else
    return 0;
}
