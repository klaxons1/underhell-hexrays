void __thiscall sub_1023FAD0(_DWORD *this)
{
  const char *v2; // esi
  const char *v3; // eax
  int v4; // eax
  const char *v5; // esi

  if ( this[207] )
  {
    v3 = (const char *)this[207];
    if ( !v3 )
      v3 = String;
    v4 = sub_102415E0(v3);
    this[208] = v4;
    if ( !(unsigned __int8)sub_102415F0(v4) )
    {
      v5 = (const char *)this[207];
      if ( !v5 )
        v5 = String;
      DevWarning("Can't find soundscape: %s\n", v5);
    }
  }
  else
  {
    v2 = (const char *)this[207];
    if ( !v2 )
      v2 = String;
    DevMsg("Found soundscape entity with no soundscape name.\n", v2);
  }
}
