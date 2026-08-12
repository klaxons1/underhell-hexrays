int __thiscall sub_100D7D60(_DWORD *this, char *String2, int a3, int a4)
{
  char *v4; // eax
  int v6; // ebx
  char *v7; // eax
  const char *v8; // edx
  const char *v9; // ecx
  const char *v11; // edx
  const char *v12; // ecx
  const char *v13; // eax

  v4 = String2;
  if ( !String2 )
    v4 = (char *)String;
  v6 = sub_1012BF20(0, v4, 0, a3, 0, 0);
  v7 = String2;
  if ( String2 )
  {
    if ( !v6 )
    {
      if ( this )
      {
        if ( this[65] )
        {
          v8 = (const char *)this[65];
        }
        else
        {
          v8 = (const char *)this[23];
          if ( !v8 )
            v8 = String;
        }
      }
      else
      {
        v8 = "<<null>>";
      }
      v9 = (const char *)this[23];
      if ( !v9 )
        v9 = String;
      return Msg("Entity %s(%s) has bad parent %s\n", v9, v8, String2);
    }
  }
  else
  {
    v7 = (char *)String;
  }
  if ( sub_1012BF20(v6, v7, 0, a3, 0, 0) )
  {
    v11 = String2;
    if ( !String2 )
      v11 = String;
    if ( this )
    {
      if ( this[65] )
      {
        v12 = (const char *)this[65];
      }
      else
      {
        v12 = (const char *)this[23];
        if ( !v12 )
          v12 = String;
      }
    }
    else
    {
      v12 = "<<null>>";
    }
    v13 = (const char *)this[23];
    if ( !v13 )
      v13 = String;
    Msg("Entity %s(%s) has ambigious parent %s\n", v13, v12, v11);
  }
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 140))(this, v6, a4);
}
