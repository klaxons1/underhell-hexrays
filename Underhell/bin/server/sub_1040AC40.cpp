char __cdecl sub_1040AC40(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CWeaponStriderBuster `RTTI Type Descriptor',
         0);
  if ( v1 )
    return *(_DWORD *)(v1 + 1744) & 1;
  else
    LOBYTE(v2) = 0;
  return v2;
}
