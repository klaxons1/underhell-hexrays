bool __thiscall sub_102CA950(_DWORD *this, int a2)
{
  int v3; // eax
  int *v4; // ecx
  char *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  const char *v9; // esi

  if ( (this[62] & 0x20) == 0 )
    return 0;
  v3 = this[342];
  if ( v3 == -1
    || (v4 = &off_1061BE18[4 * (this[342] & 0xFFF) + 1], off_1061BE18[4 * (this[342] & 0xFFF) + 2] != this[342] >> 12)
    || !*v4 )
  {
    v5 = (char *)this[343];
    if ( v5 )
    {
      v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
      v7 = __RTDynamicCast(
             (int)v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseTrigger `RTTI Type Descriptor',
             0);
      if ( v7 )
        this[342] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      else
        this[342] = -1;
    }
    v8 = this[342];
    if ( (v8 == -1
       || off_1061BE18[4 * (this[342] & 0xFFF) + 2] != this[342] >> 12
       || !off_1061BE18[4 * (this[342] & 0xFFF) + 1])
      && (this[62] & 0x20) != 0 )
    {
      v9 = (const char *)this[65];
      if ( !v9 )
        v9 = String;
      Msg("ERROR: Couldn't find control volume for player-controllable func_tank %s.\n", v9);
      return 0;
    }
  }
  return sub_10257050(a2);
}
