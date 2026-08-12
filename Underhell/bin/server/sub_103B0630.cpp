int __thiscall sub_103B0630(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // eax

  v1 = this[975];
  if ( v1 == -1 || (v2 = &off_1061BE18[4 * (this[975] & 0xFFF) + 1], v2[1] != v1 >> 12) )
    v3 = 0;
  else
    v3 = *v2;
  return __RTDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPC_Bullseye `RTTI Type Descriptor',
           0);
}
