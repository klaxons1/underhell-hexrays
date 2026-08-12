int __thiscall sub_10171AB0(char *this)
{
  int result; // eax
  int *v3; // ecx

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(this, "models/items/buckshot.mdl");
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
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        result = sub_100194B0(v3, 771);
      *(_DWORD *)(this + 771) = 1693501540;
    }
  }
  return result;
}
