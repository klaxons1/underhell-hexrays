char __cdecl sub_1040BA20(int a1, float *a2)
{
  int v2; // eax

  v2 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CWeaponStriderBuster `RTTI Type Descriptor',
         0);
  if ( !v2 )
    return 0;
  sub_1040B840(v2, a2);
  return 1;
}
