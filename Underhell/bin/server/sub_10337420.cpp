char __thiscall sub_10337420(_DWORD *this, int a2, int a3)
{
  if ( !__RTDynamicCast(
          a2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CAI_BehaviorBase `RTTI Type Descriptor',
          (int)&CAI_FollowBehavior `RTTI Type Descriptor',
          0)
    || !sub_100296A0(this) )
  {
    return 1;
  }
  if ( a3 )
    this[1492] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    this[1492] = -1;
  return 0;
}
