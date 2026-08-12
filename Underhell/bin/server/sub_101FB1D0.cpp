int __cdecl sub_101FB1D0(int a1, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
         0);
  if ( v4 )
    return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v4 + 4))(v4, a2, a3, a4);
  else
    return 0;
}
