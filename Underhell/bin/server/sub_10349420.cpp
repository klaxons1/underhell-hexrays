char *__thiscall sub_10349420(_DWORD *this)
{
  char *result; // eax
  bool v3; // zf
  char *v4; // eax
  const char *v5; // eax
  const char *v6; // esi
  int v7; // [esp+4h] [ebp-4h] BYREF

  result = sub_100422B0(this);
  if ( !this[1032] )
  {
    v3 = this[1031] == 0;
    this[1032] = 0;
    if ( !v3 )
    {
      v4 = (char *)this[1031];
      if ( !v4 )
        v4 = (char *)String;
      result = (char *)*sub_1024B3F0(&v7, v4);
      this[1032] = result;
      if ( !result )
      {
        v5 = (const char *)this[1031];
        if ( !v5 )
          v5 = String;
        v6 = (const char *)this[65];
        if ( !v6 )
          v6 = String;
        return (char *)Warning("npc_combinedropship %s: Rollermine Template %s not found!\n", v6, v5);
      }
    }
  }
  return result;
}
