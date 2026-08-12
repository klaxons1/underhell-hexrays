int __cdecl sub_102B6820(int a1)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  int result; // eax

  v1 = *(_DWORD *)(a1 + 308);
  if ( v1 == -1 )
    return 0;
  v2 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] != v3 || !*v2 )
    return 0;
  v4 = off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] == v3 ? *v2 : 0;
  result = __RTDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseViewModel `RTTI Type Descriptor',
             0);
  if ( !result )
    return 0;
  return result;
}
