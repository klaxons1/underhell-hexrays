int *__cdecl sub_101CBD10(_BYTE *a1, int a2, int a3)
{
  int *result; // eax

  result = (int *)__RTDynamicCast(
                    a3,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CRagdollProp `RTTI Type Descriptor',
                    0);
  if ( result )
    return (int *)sub_101CBB70(result, a1, a2);
  return result;
}
