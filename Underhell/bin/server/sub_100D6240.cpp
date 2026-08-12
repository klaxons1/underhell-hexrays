char __thiscall sub_100D6240(_DWORD *this, char *a2)
{
  char *v2; // esi
  char *v3; // edi
  char v5; // al
  char v6; // bl
  int v7; // [esp+10h] [ebp+8h]

  v2 = (char *)this[23];
  v3 = a2;
  if ( !v2 )
    return !*a2 || *a2 == 42;
  if ( v2 == a2 )
    return 1;
  if ( *v2 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( !*v3 )
        break;
      v6 = *v2;
      if ( *v2 == v5 || (v7 = tolower(v5), tolower(v6) == v7) )
      {
        ++v2;
        ++v3;
        if ( *v2 )
          continue;
      }
      goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( *v3 )
      return *v3 == 42;
  }
  if ( !*v2 )
    return 1;
  return *v3 == 42;
}
