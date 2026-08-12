int __stdcall sub_10022B00(int a1)
{
  int v1; // esi
  int result; // eax

  v1 = sub_1012BC10(a1);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    result = __RTDynamicCast(
               v1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CAI_BaseNPC `RTTI Type Descriptor',
               0);
    if ( result )
      break;
    v1 = sub_1012BC10(v1);
    if ( !v1 )
      return 0;
  }
  return result;
}
