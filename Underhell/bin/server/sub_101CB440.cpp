int __cdecl sub_101CB440(int a1)
{
  int result; // eax

  result = __RTDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRagdollPropAttached `RTTI Type Descriptor',
             0);
  if ( result )
    *(_BYTE *)(result + 5684) = 1;
  return result;
}
