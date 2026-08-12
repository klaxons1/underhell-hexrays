void __thiscall sub_102194F0(int this, int a2)
{
  int v3; // esi
  unsigned int v4; // eax
  int v5; // edi
  int v6; // eax

  *(_DWORD *)(this + 812) = 0;
  if ( *(_DWORD *)(a2 + 312) == -1
    || off_1061BE18[4 * (*(_DWORD *)(a2 + 312) & 0xFFF) + 2] != *(_DWORD *)(a2 + 312) >> 12 )
  {
    v3 = 0;
  }
  else
  {
    v3 = off_1061BE18[4 * (*(_DWORD *)(a2 + 312) & 0xFFF) + 1];
  }
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 316);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 1];
      v6 = __RTDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRagdollBoogie `RTTI Type Descriptor',
             0);
      if ( v6 )
      {
        *(_DWORD *)(this + 812) = *(_DWORD *)(v6 + 812);
        sub_1025FAC0(v3);
      }
      v3 = v5;
    }
    while ( v5 );
  }
  sub_100EACE0((unsigned __int16 *)this, a2, 1);
}
