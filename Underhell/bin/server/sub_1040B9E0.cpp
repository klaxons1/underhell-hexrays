void __cdecl sub_1040B9E0(int a1)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)__RTDynamicCast(
                   a1,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CWeaponStriderBuster `RTTI Type Descriptor',
                   0);
  if ( v1 )
  {
    if ( (v1[62] & 0x800000) == 0 )
      sub_10163300(v1);
  }
}
