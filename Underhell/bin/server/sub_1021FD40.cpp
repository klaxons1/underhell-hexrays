_DWORD *__stdcall sub_1021FD40(const char *a1, char *String2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  const char *v4; // ecx
  const char *v5; // eax
  char *v6; // eax
  const char *v7; // esi
  const char *v8; // eax

  result = (_DWORD *)sub_1012BC10(&dword_1069E3E0, 0);
  v3 = result;
  if ( result )
  {
    while ( 1 )
    {
      v4 = String2;
      if ( !String2 )
        v4 = String;
      v5 = (const char *)v3[24];
      if ( !v5 )
        v5 = String;
      if ( v5 == v4 || !_stricmp(v5, v4) )
        break;
      v3 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, (int)v3);
      if ( !v3 )
        return v3;
    }
    if ( !v3 )
      return v3;
    v6 = (char *)a1;
    if ( !a1 )
      v6 = (char *)String;
    if ( (char *)v3[23] == v6 || sub_100D6240(v3, v6) )
      return v3;
    v7 = (const char *)v3[23];
    if ( !v7 )
      v7 = String;
    v8 = String2;
    if ( !String2 )
      v8 = String;
    Warning("Global entity found %s, wrong class %s [expects class %s]\n", v8, v7, a1);
    return 0;
  }
  return result;
}
