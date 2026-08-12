int __cdecl sub_10231680(int a1)
{
  _DWORD *v1; // eax
  int v2; // esi
  int result; // eax

  v1 = (_DWORD *)sub_1022F770(&dword_1069E3E0, 0);
  if ( !v1 )
    return 0;
  while ( (v1[62] & 0x10) == 0 || v1[206] != *(_DWORD *)(a1 + 260) )
  {
    v2 = sub_1012BC10(&dword_1069E3E0, (int)v1);
    if ( !v2 )
      return 0;
    while ( 1 )
    {
      v1 = (_DWORD *)__RTDynamicCast(
                       v2,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CAI_ScriptedSequence `RTTI Type Descriptor',
                       0);
      if ( v1 )
        break;
      result = sub_1012BC10(&dword_1069E3E0, v2);
      v2 = result;
      if ( !result )
        return result;
    }
  }
  result = v1[201];
  if ( !result )
    return 0;
  return result;
}
