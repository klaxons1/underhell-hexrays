int __thiscall sub_101741C0(char *this)
{
  int result; // eax
  int v3; // eax
  int v4; // et2
  int v5; // ebx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(
    this,
    "models/PG_props/pg_obj/pg_glow_stick_pack.mdl");
  sub_10177C60(this);
  result = sub_10219A30() % 2;
  if ( result )
  {
    v3 = sub_10219A30();
    v4 = v3 % 5;
    result = v3 / 5;
    v5 = v4;
    if ( *((_DWORD *)this + 212) != v4 )
    {
      result = (int)this;
      if ( this[84] )
      {
        this[88] |= 1u;
        *((_DWORD *)this + 212) = v5;
      }
      else
      {
        v6 = (int *)*((_DWORD *)this + 6);
        if ( v6 )
          result = sub_100194B0(v6, 848);
        *((_DWORD *)this + 212) = v5;
      }
    }
  }
  else if ( *((_DWORD *)this + 212) )
  {
    result = (int)this;
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        result = sub_100194B0(v7, 848);
    }
    *((_DWORD *)this + 212) = 0;
  }
  if ( *(_DWORD *)(this + 771) != 1684334310 )
  {
    result = (int)this;
    if ( this[84] )
    {
      this[88] |= 1u;
      *(_DWORD *)(this + 771) = 1684334310;
    }
    else
    {
      v8 = (int *)*((_DWORD *)this + 6);
      if ( v8 )
        result = sub_100194B0(v8, 771);
      *(_DWORD *)(this + 771) = 1684334310;
    }
  }
  return result;
}
