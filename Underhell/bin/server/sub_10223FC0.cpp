const char *__cdecl sub_10223FC0(int a1)
{
  int v1; // eax
  const char *result; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CSceneEntity `RTTI Type Descriptor',
         0);
  if ( !v1 )
    return String;
  result = *(const char **)(v1 + 804);
  if ( !result )
    return String;
  return result;
}
