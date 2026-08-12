char __thiscall sub_100D6190(_DWORD *this, char *String2)
{
  char *v2; // edi
  char *v5; // esi
  char v6; // al
  char v7; // bl
  char *String2a; // [esp+10h] [ebp+8h]

  v2 = String2;
  if ( !_stricmp("!player", String2) )
    return (*(int (__thiscall **)(_DWORD *))(*this + 320))(this);
  v5 = (char *)this[65];
  if ( !v5 )
    return !*String2 || *String2 == 42;
  if ( v5 == String2 )
    return 1;
  if ( *v5 )
  {
    while ( 1 )
    {
      v6 = *v2;
      if ( !*v2 )
        break;
      v7 = *v5;
      if ( *v5 == v6 || (String2a = (char *)tolower(v6), (char *)tolower(v7) == String2a) )
      {
        ++v5;
        ++v2;
        if ( *v5 )
          continue;
      }
      goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    if ( *v2 )
      return *v2 == 42;
  }
  if ( !*v5 )
    return 1;
  return *v2 == 42;
}
