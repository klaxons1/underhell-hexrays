int __thiscall sub_102976E0(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // ecx

  v2 = this[a2 + 252];
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (this[a2 + 252] & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 || !*v3 )
    return 0;
  if ( v3[1] == v4 )
    v6 = *v3;
  else
    v6 = 0;
  v7 = *(_DWORD *)(v6 + 860);
  if ( v7 == -1 || (v8 = &off_1061BE18[4 * (*(_DWORD *)(v6 + 860) & 0xFFF) + 1], v8[1] != v7 >> 12) )
    v9 = 0;
  else
    v9 = *v8;
  return __RTDynamicCast(
           v9,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CAI_BaseNPC `RTTI Type Descriptor',
           0);
}
