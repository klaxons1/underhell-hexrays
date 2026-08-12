_BYTE *__cdecl sub_10227EE0(_BYTE *a1, unsigned __int8 *a2)
{
  _BYTE *v2; // edi
  unsigned __int8 *v3; // esi
  int v4; // ebx
  unsigned __int8 v5; // al
  _BYTE *v6; // esi
  int v7; // edi
  int v8; // ebx

  v2 = a1;
  AssertValidStringPtr(a1, 0xFFFFFF);
  v3 = a2;
  AssertValidStringPtr(a2, 0xFFFFFF);
  if ( a1 && a2 && *a1 )
  {
    while ( 1 )
    {
      v4 = tolower((unsigned __int8)*v2);
      if ( v4 == tolower(*v3) )
        break;
LABEL_14:
      a1 = ++v2;
      if ( !*v2 )
        return 0;
    }
    v5 = v3[1];
    v6 = v3 + 1;
    if ( !v5 )
      return v2;
    v7 = v2 - v6;
    while ( v6[v7 + 1] )
    {
      v8 = tolower(v5);
      if ( tolower((unsigned __int8)v6[v7 + 1]) != v8 )
      {
        if ( !*v6 )
          return a1;
        v3 = a2;
        v2 = a1;
        goto LABEL_14;
      }
      v5 = *++v6;
      if ( !v5 )
        return a1;
    }
  }
  return 0;
}
