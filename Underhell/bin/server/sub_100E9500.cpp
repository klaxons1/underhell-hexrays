void __thiscall sub_100E9500(_DWORD *this, int a2)
{
  const char *v3; // eax

  if ( this[106] )
  {
    if ( a2 )
    {
      v3 = (const char *)this[23];
      if ( !v3 )
        v3 = String;
      Warning("Overwriting physics object for %s\n", v3);
    }
    this[106] = a2;
  }
  else
  {
    this[106] = a2;
  }
}
