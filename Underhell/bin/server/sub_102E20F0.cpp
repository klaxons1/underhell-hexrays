char sub_102E20F0()
{
  _DWORD *v0; // esi
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // edi
  int v4; // eax
  _BYTE *v5; // esi
  int v6; // eax
  int v7; // ecx

  v6 = sub_10153490();
  if ( v6 )
  {
    v6 = __RTDynamicCast(
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
           (int)&CHL2_Player `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 2329) )
      {
        v7 = v6;
        v0 = (_DWORD *)v6;
        v1 = *(_DWORD *)(v6 + 3512);
        if ( v1 != -1 && (v2 = &off_1061BE18[4 * (*(_DWORD *)(v7 + 3512) & 0xFFF) + 1], v2[1] == v1 >> 12) && *v2 )
        {
          LOBYTE(v6) = sub_102DEE70((int)v0);
        }
        else
        {
          v3 = *(_DWORD *)(dword_106E06A4 + 48);
          v4 = sub_100F5E70(v0);
          LOBYTE(v6) = sub_100F8040((int)v0, (int)v0, v4 - v3, 0.40000001, 0);
          if ( (_BYTE)v6 )
          {
            v5 = v0 + 1272;
            if ( *v5 != 1 )
            {
              LOBYTE(v6) = (**((int (__thiscall ***)(int, _BYTE *))v5 - 2))((int)(v5 - 8), v5);
              *v5 = 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
