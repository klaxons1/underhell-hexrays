void __cdecl sub_10219410(int a1)
{
  unsigned int v1; // eax
  int v2; // edx
  unsigned int v3; // eax
  int v4; // esi
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 312);
  if ( v1 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != v1 >> 12 )
    v2 = 0;
  else
    v2 = off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1];
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 316);
      if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 2] != v3 >> 12 )
        v4 = 0;
      else
        v4 = off_1061BE18[4 * (*(_DWORD *)(v2 + 316) & 0xFFF) + 1];
      v5 = __RTDynamicCast(
             v2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRagdollBoogie `RTTI Type Descriptor',
             0);
      if ( v5 )
      {
        if ( (int)--*(_DWORD *)(v5 + 812) <= 0 )
        {
          *(_DWORD *)(v5 + 812) = 0;
          if ( *(float *)(dword_106B31C8 + 12) - *(float *)(v5 + 800) >= *(float *)(v5 + 804) )
            sub_101BA8E0(v5 + 12);
        }
      }
      v2 = v4;
    }
    while ( v4 );
  }
}
