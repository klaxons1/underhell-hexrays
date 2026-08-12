char __cdecl sub_100249E0(int a1)
{
  int v1; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseAnimating `RTTI Type Descriptor',
         (int)&C_AI_BaseNPC `RTTI Type Descriptor',
         0);
  if ( v1 )
    return *(_BYTE *)(v1 + 3376);
  else
    return 0;
}
