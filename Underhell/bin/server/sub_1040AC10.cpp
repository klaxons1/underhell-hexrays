double __cdecl sub_1040AC10(int a1)
{
  int v1; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CWeaponStriderBuster `RTTI Type Descriptor',
         0);
  if ( v1 )
    return *(float *)(v1 + 1704);
  else
    return 0.0;
}
