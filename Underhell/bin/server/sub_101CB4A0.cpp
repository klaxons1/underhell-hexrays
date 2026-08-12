int __cdecl sub_101CB4A0(int a1)
{
  int v1; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CRagdollProp `RTTI Type Descriptor',
         0);
  if ( v1 )
    return v1 + 1132;
  else
    return 0;
}
