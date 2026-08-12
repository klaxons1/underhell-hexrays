_DWORD *__thiscall sub_10225530(_DWORD *this, char *Str, char a3)
{
  const char *v3; // eax
  unsigned int v5; // eax
  const char *v7; // eax
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  _DWORD *v11; // eax

  v3 = Str;
  if ( !Str )
    v3 = String;
  if ( !_stricmp(v3, "!activator") )
  {
    v5 = this[378];
    if ( v5 == -1 || off_1061BE18[4 * (this[378] & 0xFFF) + 2] != v5 >> 12 )
      return 0;
    else
      return (_DWORD *)off_1061BE18[4 * (this[378] & 0xFFF) + 1];
  }
  else
  {
    v7 = Str;
    if ( !Str )
      v7 = String;
    if ( strchr(v7, 42) )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = Str;
        if ( !Str )
          v10 = (char *)String;
        v11 = sub_1012BF20(&dword_1069E3E0, v9, v10, 0, 0, 0, 0);
        v9 = (int)v11;
        if ( !v11 )
          break;
        if ( !a3
          || __RTDynamicCast(
               (int)v11,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseFlex `RTTI Type Descriptor',
               0) )
        {
          return (_DWORD *)v9;
        }
      }
      return 0;
    }
    else
    {
      v8 = Str;
      if ( !Str )
        v8 = (char *)String;
      return sub_1012BF20(&dword_1069E3E0, 0, v8, 0, 0, 0, 0);
    }
  }
}
