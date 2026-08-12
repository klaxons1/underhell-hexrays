bool __cdecl sub_10135A60(int a1)
{
  int v1; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CEnvZoom `RTTI Type Descriptor',
         0);
  return v1 && (*(_BYTE *)(v1 + 248) & 1) != 0;
}
