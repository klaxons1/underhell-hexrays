int __thiscall sub_10172760(char *this)
{
  int result; // eax
  int *v3; // ecx

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(this, "models/PG_props/pg_obj/pg_bandage.mdl");
  result = sub_10177C60(this);
  if ( *(_DWORD *)(this + 771) != 1681049650 )
  {
    result = (int)this;
    if ( this[84] )
    {
      this[88] |= 1u;
      *(_DWORD *)(this + 771) = 1681049650;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        result = sub_100194B0(v3, 771);
      *(_DWORD *)(this + 771) = 1681049650;
    }
  }
  return result;
}
