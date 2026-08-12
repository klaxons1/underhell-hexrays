void __thiscall sub_100B8270(int this, char *String2)
{
  char *v2; // eax
  int v4; // eax
  int v5; // esi
  const char *v6; // ecx
  const char *v7; // eax
  int v8; // eax
  const char *v9; // eax
  const char *v10; // esi

  v2 = String2;
  if ( !String2 )
    v2 = (char *)String;
  v4 = sub_1012BF20(0, v2, 0, 0, 0, 0);
  v5 = v4;
  if ( v4 )
  {
    v8 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPathTrack `RTTI Type Descriptor',
           0);
    if ( v8 )
    {
      sub_100B8130((float *)this, v8);
    }
    else
    {
      v9 = *(const char **)(v5 + 260);
      if ( !v9 )
        v9 = String;
      v10 = *(const char **)(v5 + 92);
      if ( !v10 )
        v10 = String;
      DevWarning("%s: Specified entity '%s' must be a path_track!\n", v10, v9);
    }
  }
  else
  {
    v6 = String2;
    if ( !String2 )
      v6 = String;
    v7 = *(const char **)(this + 92);
    if ( !v7 )
      v7 = String;
    DevWarning("%s: Could not find path_track '%s'!\n", v7, v6);
  }
}
