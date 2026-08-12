void __thiscall sub_103E89E0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // esi
  unsigned int v9; // ecx
  int *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  float *v13; // eax
  int v14; // esi

  v3 = this[518];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[518] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        v6 = v4[1] == v5 ? *v4 : 0;
        v7 = (float *)__RTDynamicCast(
                        v6,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CAI_RadialLinkController `RTTI Type Descriptor',
                        0);
        v8 = (int)v7;
        if ( v7 )
        {
          sub_10069DD0(v7, 0);
          sub_1025FAC0(v8);
          this[518] = -1;
        }
      }
    }
  }
  v9 = this[519];
  if ( v9 != -1 )
  {
    v10 = &off_1061BE18[4 * (this[519] & 0xFFF) + 1];
    v11 = v9 >> 12;
    if ( off_1061BE18[4 * (this[519] & 0xFFF) + 2] == v11 )
    {
      if ( *v10 )
      {
        if ( off_1061BE18[4 * (this[519] & 0xFFF) + 2] == v11 )
          v12 = *v10;
        else
          v12 = 0;
        v13 = (float *)__RTDynamicCast(
                         v12,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CAI_RadialLinkController `RTTI Type Descriptor',
                         0);
        v14 = (int)v13;
        if ( v13 )
        {
          sub_10069DD0(v13, 0);
          sub_1025FAC0(v14);
          this[519] = -1;
        }
      }
    }
  }
}
