int __thiscall sub_10166450(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax

  v2 = this[288];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[288] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = __RTDynamicCast(
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CSprite `RTTI Type Descriptor',
               0);
        if ( v6 )
          sub_1012F1D0(v6, 0.0);
      }
    }
  }
  v7 = this[289];
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (this[289] & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (this[289] & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        v10 = off_1061BE18[4 * (this[289] & 0xFFF) + 2] == v9 ? *v8 : 0;
        v11 = __RTDynamicCast(
                v10,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CEntityFlame `RTTI Type Descriptor',
                0);
        if ( v11 )
          sub_1012B210(v11, 1.0);
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
    return sub_1025FAC0(this);
  sub_100EC3F0(this, (int)sub_100E1560, 0.0, 0);
  return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
}
