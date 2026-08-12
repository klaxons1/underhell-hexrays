int sub_10023510()
{
  int result; // eax
  int v1; // esi
  int v2; // esi
  int v3; // eax

  result = sub_10022B00(0);
  v1 = result;
  if ( result )
  {
    while ( 1 )
    {
      sub_10044510("CAI_BaseNPC::ClearAllSchedules");
      sub_10081C10(*(_DWORD *)(v1 + 2588));
      result = sub_1012BC10(v1);
      v2 = result;
      if ( !result )
        break;
      while ( 1 )
      {
        v3 = __RTDynamicCast(
               v2,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CAI_BaseNPC `RTTI Type Descriptor',
               0);
        if ( v3 )
          break;
        result = sub_1012BC10(v2);
        v2 = result;
        if ( !result )
          return result;
      }
      v1 = v3;
    }
  }
  return result;
}
