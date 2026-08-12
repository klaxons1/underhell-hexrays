char **__thiscall sub_10022230(_DWORD *this, int a2)
{
  const char *v3; // eax
  char **result; // eax
  char *v5; // esi
  int v6; // edi

  if ( ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x4000000) != 0 )
  {
    result = (char **)(a2 + 8);
    if ( *(_DWORD *)(a2 + 24) != 2 )
    {
      a2 = 0;
      result = (char **)&a2;
    }
    v5 = *result;
    this[700] = *result;
    if ( v5 )
    {
      v6 = sub_100B0F90(v5);
      if ( !v6 )
        v6 = sub_100B2200(v5);
      result = (char **)sub_100B20E0(this);
      this[699] = v6;
    }
    else if ( this[699] )
    {
      result = (char **)sub_100B1AB0(this, 1);
      this[699] = 0;
    }
  }
  else
  {
    v3 = (const char *)sub_100D6390(this);
    return (char **)Warning("SetSquad Input received for NPC %s, but that NPC can't use squads.\n", v3);
  }
  return result;
}
