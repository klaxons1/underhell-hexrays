int __thiscall sub_10177380(int **this)
{
  int result; // eax
  int v3; // eax
  int v4; // et2
  int v5; // edi
  int *v6; // ecx

  ((void (__thiscall *)(int **))(*this)[25])(this);
  ((void (__thiscall *)(int **, const char *))(*this)[26])(this, "models/props_junk/popcan01a.mdl");
  result = sub_10177C60(this);
  if ( !this[212] )
  {
    v3 = sub_10219A30();
    v4 = v3 % 6;
    result = v3 / 6;
    v5 = v4;
    if ( this[212] != (int *)v4 )
    {
      result = (int)this;
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        this[212] = (int *)v5;
      }
      else
      {
        v6 = this[6];
        if ( v6 )
          result = sub_100194B0(v6, 848);
        this[212] = (int *)v5;
      }
    }
  }
  return result;
}
