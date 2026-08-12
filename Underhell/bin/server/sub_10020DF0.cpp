BOOL __thiscall sub_10020DF0(_DWORD *this)
{
  char *v2; // edi
  const char *v3; // eax
  int v5; // esi

  if ( this[699] || ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x4000000) == 0 )
    return this[699] != 0;
  v2 = (char *)this[700];
  if ( v2 )
  {
    v5 = sub_100B0F90(v2);
    if ( !v5 )
      v5 = sub_100B2200(v2);
    sub_100B20E0(this);
    this[699] = v5;
    return this[699] != 0;
  }
  v3 = (const char *)this[23];
  if ( !v3 )
    v3 = String;
  DevMsg(2, "Found %s that isn't in a squad\n", v3);
  return this[699] != 0;
}
