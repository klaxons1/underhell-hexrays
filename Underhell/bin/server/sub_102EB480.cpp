void __cdecl sub_102EB480(int a1)
{
  unsigned int v1; // eax
  int v2; // esi
  unsigned int v3; // eax
  int v4; // edi

  v1 = *(_DWORD *)(a1 + 312);
  if ( v1 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != v1 >> 12 )
    v2 = 0;
  else
    v2 = off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1];
  while ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 316);
    v4 = v2;
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 2] != v3 >> 12 )
      v2 = 0;
    else
      v2 = off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 1];
    if ( __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CInfoDarknessLightSource `RTTI Type Descriptor',
           0) )
    {
      sub_1025FAC0(v4);
    }
  }
}
