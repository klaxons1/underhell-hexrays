void __thiscall sub_10058A20(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax

  v2 = this[17];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        v4 = __RTDynamicCast(
               *v3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CAI_LeadBehaviorHandler `RTTI Type Descriptor',
               0);
        this[16] = v4;
        if ( !v4 )
        {
          DevMsg("Failed to reconnect to CAI_LeadBehaviorHandler\n");
          this[17] = -1;
        }
      }
    }
  }
}
