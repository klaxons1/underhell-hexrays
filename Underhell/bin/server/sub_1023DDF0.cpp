void __thiscall sub_1023DDF0(_DWORD *this)
{
  int v2; // eax
  char *v3; // ecx

  if ( this[17] )
  {
    v2 = sub_1023DDA0(this);
    if ( v2 >= 0 )
    {
      v3 = (char *)this[11];
      if ( !v3 )
        v3 = (char *)String;
      sub_1023AF30(v2, this[14], v3);
    }
    this[17] = 0;
  }
}
