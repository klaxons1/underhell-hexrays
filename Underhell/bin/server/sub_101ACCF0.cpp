void __thiscall sub_101ACCF0(_DWORD *this, int a2)
{
  const char *v3; // eax
  const char *v4; // ecx

  if ( a2 )
  {
    v3 = (const char *)this[205];
    if ( !v3 )
      v3 = String;
    v4 = *(const char **)(a2 + 260);
    if ( !v4 )
      v4 = String;
    if ( v4 != v3 )
    {
      if ( _stricmp(v4, v3) )
        this[201] = a2;
    }
  }
}
