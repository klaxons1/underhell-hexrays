char __thiscall sub_100D0050(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi

  if ( *(_DWORD *)(a2 + 420) == 11 || a2 == this[4] )
    return 0;
  if ( *(int *)(a2 + 220) > 0 )
  {
    v4 = __RTDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBreakable `RTTI Type Descriptor',
           0);
    v5 = v4;
    if ( v4 )
    {
      if ( (unsigned __int8)sub_101486C0(v4) && !*(_DWORD *)(v5 + 812) )
        return 0;
    }
  }
  return sub_10265750(a2, a3);
}
