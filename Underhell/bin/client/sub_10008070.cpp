char __thiscall sub_10008070(
        _DWORD *this,
        char *Source,
        int a3,
        int a4,
        const char *a5,
        const char *a6,
        const char *a7,
        float a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // eax

  LOBYTE(v12) = sub_10007FD0(this, Source, a3, a4, a9, a10, a11);
  if ( (_BYTE)v12 )
  {
    if ( a5 )
    {
      v12 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, a5);
      this[13 * this[1] + 12] = v12;
      if ( !this[13 * this[1] + 12] )
        LOBYTE(v12) = Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", Source, a5);
      this[13 * this[1] + 9] = -1;
    }
    if ( a6 )
    {
      v12 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, a6);
      this[13 * this[1] + 13] = v12;
      if ( !this[13 * this[1] + 13] )
        LOBYTE(v12) = Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", Source, a6);
      this[13 * this[1] + 10] = -1;
    }
    if ( a7 )
    {
      v12 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, a7);
      this[13 * this[1] + 14] = v12;
      if ( !this[13 * this[1] + 14] )
        LOBYTE(v12) = Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", Source, a7);
      this[13 * this[1] + 11] = -1;
    }
    *(float *)&this[13 * this[1]++ + 5] = a8;
  }
  return v12;
}
