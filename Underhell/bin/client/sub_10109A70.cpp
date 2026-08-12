void __thiscall sub_10109A70(_BYTE *this, int a2, _BYTE *a3, _BYTE *a4, int a5)
{
  const char *v6; // ecx
  const char *v7; // eax
  const char *v8; // eax

  if ( this[20] )
  {
    if ( !a2 )
    {
      v6 = "true";
      if ( !*a3 )
        v6 = "false";
      v7 = "true";
      if ( !*a4 )
        v7 = "false";
      sub_10109720((int)this, "bool differs (net %s pred %s)\n", v7, v6);
    }
    v8 = "true";
    if ( !*a3 )
      v8 = "false";
    sub_101097C0((int)this, a2, "bool (%s)\n", v8);
  }
}
