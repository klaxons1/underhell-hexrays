int sub_1019DDB0()
{
  int result; // eax
  _DWORD *v1; // eax
  int i; // esi
  _DWORD *v3; // eax

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    v1 = sub_1012BC90(&dword_1069E3E0, 0, "info_ladder");
    result = __RTDynamicCast(
               (int)v1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CInfoLadder `RTTI Type Descriptor',
               0);
    for ( i = result; result; i = result )
    {
      sub_1011BB20((int)&flt_106F1CA8, i + 800, i + 812, 0, 255, 0, 0, 600.0);
      if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
        sub_100DAE60(i);
      sub_1011BB20(i + 580, i + 800, i + 812, 0, 0, 255, 0, 600.0);
      v3 = sub_1012BC90(&dword_1069E3E0, i, "info_ladder");
      result = __RTDynamicCast(
                 (int)v3,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CInfoLadder `RTTI Type Descriptor',
                 0);
    }
  }
  return result;
}
