void __thiscall sub_1000F430(_DWORD *this, int a2)
{
  const char *v3; // eax

  if ( this[46] )
  {
    if ( a2 )
    {
      v3 = (const char *)sub_10034D90(this);
      Warning("Overwriting physics object for %s\n", v3);
    }
    this[46] = a2;
  }
  else
  {
    this[46] = a2;
  }
}
