void __thiscall sub_100B8380(_DWORD *this, char *String2)
{
  char *v2; // eax
  int v4; // eax
  const char *v5; // ecx
  const char *v6; // eax
  int v7; // eax
  const char *v8; // ecx
  const char *v9; // eax

  v2 = String2;
  if ( !String2 )
    v2 = (char *)String;
  v4 = sub_1012BF20(0, v2, 0, 0, 0, 0);
  if ( v4 )
  {
    v7 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPathTrack `RTTI Type Descriptor',
           0);
    if ( v7 )
    {
      sub_100B7F90((int)this, v7);
    }
    else
    {
      v8 = String2;
      if ( !String2 )
        v8 = String;
      v9 = (const char *)this[23];
      if ( !v9 )
        v9 = String;
      DevWarning("%s: Specified entity '%s' must be a path_track!\n", v9, v8);
    }
  }
  else
  {
    v5 = String2;
    if ( !String2 )
      v5 = String;
    v6 = (const char *)this[23];
    if ( !v6 )
      v6 = String;
    DevWarning("%s: Could not find path_track '%s'!\n", v6, v5);
  }
}
