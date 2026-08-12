char __thiscall sub_10211160(_DWORD *this, int (__thiscall ****a2)(_DWORD))
{
  unsigned int v3; // eax
  int *v4; // ecx
  const char *v5; // edi
  int v6; // ebx
  int v8[11]; // [esp+14h] [ebp-54h] BYREF
  int v9; // [esp+40h] [ebp-28h]
  _BYTE v10[4]; // [esp+64h] [ebp-4h] BYREF

  v3 = this[358];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[358] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      if ( *v4 )
        goto LABEL_11;
    }
  }
  v5 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v10);
  if ( !v5 )
    v5 = String;
  if ( !_stricmp(v5, "models/PG_props/pg_obj/pg_glow_stick.mdl") )
  {
    v6 = this[212];
    sub_1020FA00(this, 360.0);
    a2 = (int (__thiscall ****)(_DWORD))(v6 + 1);
    return (unsigned __int8)sub_10031670(this + 212, &a2);
  }
  if ( !_stricmp(v5, "models/PG_props/pg_obj/pg_flare.mdl") || !_stricmp(v5, "models/props_junk/flare.mdl") )
    return sub_1020F790((int)this, 90.0);
LABEL_11:
  sub_10247EC0(v8);
  if ( this )
    v9 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
  else
    v9 = -1;
  return sub_1020BA60((unsigned int)this, *a2, (int)v8);
}
