char __thiscall sub_10015A50(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  sub_1003CD70(a2, a3);
  v4 = __RTDynamicCast(
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
         (int)&C_Beam `RTTI Type Descriptor',
         0);
  if ( !v4 )
    return 1;
  if ( (*(_BYTE *)(v4 + 312) & 1) == 0 )
    return 1;
  this[78] |= 1u;
  return 0;
}
