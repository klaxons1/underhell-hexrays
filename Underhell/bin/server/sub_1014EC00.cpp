const char *__cdecl sub_1014EC00(int a1)
{
  int v1; // eax
  const char *result; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CFuncLadder `RTTI Type Descriptor',
         0);
  if ( !v1 )
    return "ladder";
  result = *(const char **)(v1 + 860);
  if ( !result )
    return "ladder";
  return result;
}
