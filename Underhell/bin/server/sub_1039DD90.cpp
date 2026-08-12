char __thiscall sub_1039DD90(_DWORD *this, int a2)
{
  int v2; // eax

  if ( !a2 )
    return 0;
  if ( *(_DWORD *)(a2 + 92) != this[23] )
    return 0;
  if ( (_DWORD *)a2 == this )
    return 0;
  v2 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
         (int)&CNPC_RollerMine `RTTI Type Descriptor',
         0);
  if ( !v2 || *(_DWORD *)(v2 + 2324) != 1 )
    return 0;
  *(_BYTE *)(v2 + 3827) = 0;
  if ( *(_DWORD *)(v2 + 2336) != 2 )
    *(_DWORD *)(v2 + 2336) = 2;
  return 1;
}
