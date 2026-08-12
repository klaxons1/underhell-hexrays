double __cdecl sub_10135AA0(int a1)
{
  int v1; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CEnvZoom `RTTI Type Descriptor',
         0);
  if ( v1 && (*(_BYTE *)(v1 + 248) & 1) != 0 )
    return (double)*(int *)(__RTDynamicCast(
                              a1,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                              (int)&CEnvZoom `RTTI Type Descriptor',
                              0)
                          + 804);
  else
    return 0.0;
}
