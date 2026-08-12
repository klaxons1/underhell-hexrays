bool __cdecl sub_1026FA70(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // eax
  int v5; // eax

  v2 = *(_DWORD *)(a2 + 300);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 300) & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (*(_DWORD *)(a2 + 300) & 0xFFF) + 1];
  if ( v3 == a1 )
    return 1;
  v5 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPropVehicleChoreoGeneric `RTTI Type Descriptor',
         0);
  return v5 && a2 && *(_BYTE *)(v5 + 2109) && sub_100233D0((_DWORD *)v5) == a2;
}
