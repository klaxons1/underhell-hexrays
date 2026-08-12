char __thiscall sub_100590E0(_DWORD *this, int a2)
{
  int v3; // eax
  unsigned int v4; // eax

  this[16] = a2;
  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_LeadBehaviorHandler `RTTI Type Descriptor',
         (int)&CBaseEntity `RTTI Type Descriptor',
         0);
  if ( v3 )
    this[17] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    this[17] = -1;
  v4 = this[17];
  if ( v4 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v4 >> 12 || !off_1061BE18[4 * (this[17] & 0xFFF) + 1] )
    DevMsg(
      2,
      "Note: CAI_LeadBehaviorHandler connected to a sink that isn't an entity. Manual fixup on load will be necessary\n");
  return 1;
}
