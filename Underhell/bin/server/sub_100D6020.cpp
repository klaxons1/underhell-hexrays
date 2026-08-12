void __thiscall sub_100D6020(_DWORD *this, int a2)
{
  const char *v3; // eax

  if ( !a2 )
    sub_101B4EF0(this);
  if ( !this[106] )
  {
    v3 = (const char *)this[23];
    if ( !v3 )
      v3 = String;
    Warning("Bad vphysics swap for %s\n", v3);
  }
  this[106] = a2;
}
