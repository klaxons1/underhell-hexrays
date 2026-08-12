int __thiscall sub_103AFA20(_DWORD *this, int a2)
{
  int v3; // esi
  int result; // eax

  v3 = sub_1012BC10(this, a2);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    result = __RTDynamicCast(
               v3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CRagdollProp `RTTI Type Descriptor',
               0);
    if ( result )
      break;
    v3 = sub_1012BC10(this, v3);
    if ( !v3 )
      return 0;
  }
  return result;
}
