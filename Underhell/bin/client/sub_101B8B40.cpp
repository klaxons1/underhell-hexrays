bool __thiscall sub_101B8B40(int this)
{
  int v2; // eax
  int v3; // eax

  v2 = sub_100422D0();
  v3 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BasePlayer `RTTI Type Descriptor',
         (int)&C_BaseHLPlayer `RTTI Type Descriptor',
         0);
  if ( !v3 || *(_DWORD *)(dword_10430E6C + 48) )
    return 0;
  return (*(_BYTE *)(v3 + 5172) || *(_BYTE *)(this + 52)) && sub_100B68D0((int *)this);
}
