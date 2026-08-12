int __thiscall sub_10173F40(char *this)
{
  int result; // eax
  int *v3; // ecx
  float v4[4]; // [esp+8h] [ebp-10h] BYREF

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(this, "models/items/gasmask.mdl");
  sub_10177C60(this);
  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  result = sub_100E10C0((int)this, v4);
  v4[3] = 1.6889983e22;
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
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        result = sub_100194B0(v3, 771);
      *(_DWORD *)(this + 771) = 1684334310;
    }
  }
  return result;
}
