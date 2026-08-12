BOOL __cdecl sub_102FCD60(_DWORD *a1)
{
  return a1
      && (*(int (__thiscall **)(_DWORD *))(*a1 + 220))(a1) == 4
      && (a1[62] & 0x40000) != 0
      && __RTDynamicCast(
           (int)a1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPC_Antlion `RTTI Type Descriptor',
           0);
}
