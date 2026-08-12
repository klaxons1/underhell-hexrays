float *__cdecl sub_10063860(int *a1)
{
  const char *v1; // eax
  float *result; // eax
  char v3; // bl
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int v7; // eax

  if ( *a1 <= 1 || (v1 = (const char *)a1[259], v1 == String) || (result = (float *)_stricmp(v1, String)) == 0 )
  {
    v3 = 0;
    v4 = sub_10022B00(0);
    if ( !v4 )
      goto LABEL_11;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v4 + 236) & 0x1000) != 0 )
      {
        v3 = 1;
        sub_10028840((float *)v4);
      }
      result = (float *)sub_1012BC10(v4);
      v5 = (int)result;
      if ( !result )
        break;
      while ( 1 )
      {
        v6 = __RTDynamicCast(
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CAI_BaseNPC `RTTI Type Descriptor',
               0);
        if ( v6 )
          break;
        result = (float *)sub_1012BC10(v5);
        v5 = (int)result;
        if ( !result )
          goto LABEL_10;
      }
      v4 = v6;
    }
LABEL_10:
    if ( !v3 )
    {
LABEL_11:
      v7 = sub_10153490();
      result = (float *)sub_101E94B0(v7);
      if ( result )
      {
        result = (float *)sub_100D7680(result);
        if ( result )
          return (float *)sub_10028840(result);
      }
    }
  }
  return result;
}
