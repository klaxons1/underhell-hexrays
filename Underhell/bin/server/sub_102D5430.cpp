char __cdecl sub_102D5430(int a1)
{
  int v1; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CGrenadeFrag `RTTI Type Descriptor',
         0);
  if ( v1 )
    return *(_BYTE *)(v1 + 2150);
  else
    return 0;
}
