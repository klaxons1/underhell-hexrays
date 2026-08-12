int sub_1006AA70()
{
  _BYTE *v0; // esi
  int result; // eax
  int v2; // esi
  _BYTE *v3; // eax

  v0 = 0;
  while ( 1 )
  {
    result = sub_1012BC10(v0);
    v2 = result;
    if ( !result )
      break;
    while ( 1 )
    {
      v3 = (_BYTE *)__RTDynamicCast(
                      v2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CAI_DynamicLinkController `RTTI Type Descriptor',
                      0);
      if ( v3 )
        break;
      result = sub_1012BC10(v2);
      v2 = result;
      if ( !result )
        return result;
    }
    v0 = v3;
    sub_1006A7B0(v3);
  }
  return result;
}
