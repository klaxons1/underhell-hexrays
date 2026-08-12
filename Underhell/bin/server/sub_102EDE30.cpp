char __thiscall sub_102EDE30(char *this)
{
  char result; // al
  int *v3; // ecx

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/w_missile_closed.mdl");
  result = sub_10177C60((int)this);
  if ( *(_DWORD *)(this + 771) != 1693501540 )
  {
    result = (char)this;
    if ( this[84] )
    {
      this[88] |= 1u;
      *(_DWORD *)(this + 771) = 1693501540;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        result = sub_100194B0(v3, 771);
      *(_DWORD *)(this + 771) = 1693501540;
    }
  }
  return result;
}
