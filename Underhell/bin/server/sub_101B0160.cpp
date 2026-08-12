int __cdecl sub_101B0160(int a1)
{
  int result; // eax
  int v2; // ecx

  result = __RTDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CPhysConstraint `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v2 = *(_DWORD *)(result + 800);
    if ( v2 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 48))(v2);
  }
  return result;
}
