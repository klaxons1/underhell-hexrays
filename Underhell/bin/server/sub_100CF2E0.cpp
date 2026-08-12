void __thiscall sub_100CF2E0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // esi

  if ( (this[64] & 0x8000000) != 0 )
  {
    v3 = this[104];
    if ( v3 == -1 || off_1061BE18[4 * (this[104] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (this[104] & 0xFFF) + 1];
    v5 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CEntityFlame `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      sub_100EBDE0(0);
      sub_100EA940(0x8000000);
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      sub_100E0D20(a2 + 580);
      sub_1012B1B0(a2);
      *(_DWORD *)(v5 + 252) |= 0x80u;
      sub_100D8500(v5);
      sub_100EBDE0(v5);
      sub_100C35E0((_BYTE *)(a2 + 116), this[29], BYTE1(this[29]), BYTE2(this[29]));
    }
  }
}
