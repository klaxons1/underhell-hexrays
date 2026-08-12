int __thiscall sub_10171C00(char *this)
{
  bool v2; // zf
  signed int v3; // eax
  void (__stdcall *v4)(const char *); // edx
  int result; // eax
  int *v6; // ecx

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 100))(this);
  v3 = sub_10219A30() & 0x80000001;
  v2 = v3 == 0;
  if ( v3 < 0 )
    v2 = (((_BYTE)v3 - 1) | 0xFFFFFFFE) == -1;
  v4 = *(void (__stdcall **)(const char *))(*(_DWORD *)this + 104);
  if ( v2 )
    v4("models/pg_props/pg_weapons/pg_smg_ammo.mdl");
  else
    v4("models/pg_props/pg_weapons/pg_smg_ammo_closed.mdl");
  result = sub_10177C60(this);
  if ( *(_DWORD *)(this + 771) != 1693501540 )
  {
    result = (int)this;
    if ( this[84] )
    {
      this[88] |= 1u;
      *(_DWORD *)(this + 771) = 1693501540;
    }
    else
    {
      v6 = (int *)*((_DWORD *)this + 6);
      if ( v6 )
        result = sub_100194B0(v6, 771);
      *(_DWORD *)(this + 771) = 1693501540;
    }
  }
  return result;
}
