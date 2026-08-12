int __thiscall sub_10130610(_DWORD *this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // edi
  const char *v5; // eax
  const char *v6; // esi

  v2 = (char *)this[217];
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  v4 = __RTDynamicCast(
         (int)v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPointTemplate `RTTI Type Descriptor',
         0);
  if ( !v4 )
  {
    v5 = (const char *)this[217];
    if ( !v5 )
      v5 = String;
    v6 = (const char *)this[65];
    if ( !v6 )
      v6 = String;
    Warning("env_entity_maker %s failed to find template %s.\n", v6, v5);
  }
  return v4;
}
