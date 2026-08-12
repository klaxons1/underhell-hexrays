void __thiscall sub_100BD3B0(_DWORD *this, char *String2)
{
  int v3; // eax
  int v4; // esi
  const char *v5; // edi
  const char *v6; // eax
  const char *v7; // esi
  int v8; // [esp-4h] [ebp-Ch]

  v8 = 0;
  if ( !String2 )
    goto LABEL_13;
  v3 = sub_1012BF20(0, String2, 0, 0, 0, 0);
  v4 = v3;
  if ( !v3 )
  {
    v5 = (const char *)this[23];
    if ( !v5 )
      v5 = String;
    DevWarning("%s: Could not find info_lighting_relative '%s'!\n", v5, String2);
    return;
  }
  if ( __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CInfoLightingRelative `RTTI Type Descriptor',
         0) )
  {
    v8 = v4;
LABEL_13:
    (*(void (__stdcall **)(int))(*this + 828))(v8);
    this[262] = String2;
    return;
  }
  v6 = *(const char **)(v4 + 260);
  if ( !v6 )
    v6 = String;
  v7 = *(const char **)(v4 + 92);
  if ( !v7 )
    v7 = String;
  DevWarning("%s: Specified entity '%s' must be a info_lighting_relative!\n", v7, v6);
}
