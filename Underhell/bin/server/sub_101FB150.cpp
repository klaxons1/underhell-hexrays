int __cdecl sub_101FB150(int a1, int a2, int a3)
{
  int result; // eax

  result = __RTDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
             0);
  if ( result )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)result + 12))(result, a2, a3);
  return result;
}
