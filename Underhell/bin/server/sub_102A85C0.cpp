char __thiscall sub_102A85C0(int *this)
{
  int v1; // eax

  v1 = __RTDynamicCast(
         this[1],
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
         (int)&CNPC_MetroPolice `RTTI Type Descriptor',
         0);
  if ( v1 )
    return sub_10389BD0(v1);
  else
    return 0;
}
