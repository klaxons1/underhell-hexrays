char __thiscall sub_1040BC00(_DWORD *this)
{
  int *v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax
  int *v6; // esi
  _DWORD *v7; // eax

  LOBYTE(v2) = sub_100C1080((int)this);
  v3 = this[428];
  if ( v3 != -1 )
  {
    v2 = &off_1061BE18[4 * (this[428] & 0xFFF) + 1];
    v4 = v3 >> 12;
    if ( off_1061BE18[4 * (this[428] & 0xFFF) + 2] == v4 )
    {
      if ( *v2 )
      {
        if ( off_1061BE18[4 * (this[428] & 0xFFF) + 2] == v4 )
          v5 = *v2;
        else
          v5 = 0;
        v2 = (int *)__RTDynamicCast(
                      v5,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CNPC_Strider `RTTI Type Descriptor',
                      0);
        v6 = v2;
        if ( v2 )
        {
          sub_103AE8D0(v2);
          v7 = (_DWORD *)sub_103B4C40(v6, this[425]);
          LOBYTE(v2) = sub_1040B030(this, v7);
          if ( !(_BYTE)v2 )
            LOBYTE(v2) = Msg("Failed to reattach to bone follower %d\n", this[425]);
        }
      }
    }
  }
  return (char)v2;
}
