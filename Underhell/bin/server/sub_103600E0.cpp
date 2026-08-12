bool __thiscall sub_103600E0(unsigned int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi
  bool result; // al
  int v6; // esi
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // eax

  v2 = this[1047];
  result = 0;
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[1047] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(*v3) )
          return 1;
        v6 = __RTDynamicCast(
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBasePlayer `RTTI Type Descriptor',
               0);
        if ( v6 )
        {
          v7 = this[1046];
          if ( v7 == -1
            || off_1061BE18[4 * (this[1046] & 0xFFF) + 2] != v7 >> 12
            || !off_1061BE18[4 * (this[1046] & 0xFFF) + 1]
            || (v8 = *(_DWORD *)v6,
                v9 = sub_1026A890(this + 1046),
                (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(v8 + 548))(v6, v9, 16449, 0)) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, unsigned int *))(*(_DWORD *)v6 + 876))(v6, this) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
