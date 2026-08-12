int __cdecl sub_100FB5C0(const char *a1, float a2)
{
  int v2; // eax
  int v3; // esi
  const char *v5; // [esp+4h] [ebp-4h]

  v2 = sub_101811E0("beam", -1);
  v3 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBeam `RTTI Type Descriptor',
         0);
  if ( !v3 )
    Warning("classname %s used to create wrong class type\n", v5);
  sub_100FB160(v3, a1, a2);
  return v3;
}
