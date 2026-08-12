void __thiscall sub_10280B70(_DWORD *this)
{
  const char *v2; // eax
  int v3; // eax
  const char *v4; // esi

  if ( this[202] )
  {
    v2 = (const char *)this[202];
    if ( !v2 )
      v2 = String;
    v3 = sub_1025EE70(v2, 1);
    this[200] = v3;
    if ( v3 < 0 )
    {
      v4 = (const char *)this[202];
      if ( !v4 )
        v4 = String;
      Warning("Can't find decal %s OnRestore\n", v4);
    }
  }
}
