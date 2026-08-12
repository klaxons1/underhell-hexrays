unsigned int __cdecl sub_10219370(int a1)
{
  unsigned int result; // eax
  int v2; // esi
  int v3; // eax
  unsigned int v4; // eax

  result = *(_DWORD *)(a1 + 312);
  if ( result == -1 || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != result) )
    v2 = 0;
  else
    v2 = off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1];
  if ( v2 )
  {
    do
    {
      v3 = __RTDynamicCast(
             v2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRagdollBoogie `RTTI Type Descriptor',
             0);
      if ( v3 )
        ++*(_DWORD *)(v3 + 812);
      v4 = *(_DWORD *)(v2 + 316);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 2] != v4 >> 12 )
        result = 0;
      else
        result = off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 1];
      v2 = result;
    }
    while ( result );
  }
  return result;
}
