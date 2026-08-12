bool __cdecl sub_103FA810(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPlayerPickupController `RTTI Type Descriptor',
         0);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 9072);
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    return a2 == 0;
  else
    return off_1061BE18[4 * (v3 & 0xFFF) + 1] == a2;
}
