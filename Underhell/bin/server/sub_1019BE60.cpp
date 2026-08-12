int sub_1019BE60()
{
  _DWORD *v0; // eax
  int result; // eax
  int i; // edi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // [esp-Ch] [ebp-14h]

  sub_1019EF10();
  v0 = sub_1012BC90(&dword_1069E3E0, 0, "info_ladder");
  result = __RTDynamicCast(
             (int)v0,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CInfoLadder `RTTI Type Descriptor',
             0);
  for ( i = result; result; i = result )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(i + 320) + 8))(i + 320);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(i + 320) + 4))(i + 320);
    sub_1019A700(v3, v5, 0);
    v4 = sub_1012BC90(&dword_1069E3E0, i, "info_ladder");
    result = __RTDynamicCast(
               (int)v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CInfoLadder `RTTI Type Descriptor',
               0);
  }
  return result;
}
