_BYTE *__cdecl sub_10227FE0(_BYTE *a1, char *a2, int a3)
{
  _BYTE *v3; // edi
  char *v4; // esi
  int v5; // ebx
  char v6; // bl
  _BYTE *v7; // esi
  int v8; // edi
  int v9; // eax
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v3 = a1;
  AssertValidStringPtr(a1, 0xFFFFFF);
  v4 = a2;
  AssertValidStringPtr(a2, 0xFFFFFF);
  if ( a1 && a2 && *a1 )
  {
    while ( a3 > 0 )
    {
      v5 = tolower(*v4);
      if ( tolower((char)*v3) == v5 )
      {
        v6 = v4[1];
        v7 = v4 + 1;
        v8 = a3 - 1;
        if ( !v6 )
          return a1;
        v9 = a1 - v7 + 1;
        v11 = v9;
        while ( v8 > 0 && v7[v9] )
        {
          v12 = tolower((char)v7[v9]);
          if ( v12 != tolower(v6) )
          {
            if ( !*v7 )
              return a1;
            v4 = a2;
            v3 = a1;
            goto LABEL_15;
          }
          v6 = *++v7;
          --v8;
          if ( !v6 )
            return a1;
          v9 = v11;
        }
        return 0;
      }
LABEL_15:
      --a3;
      a1 = ++v3;
      if ( !*v3 )
        return 0;
    }
  }
  return 0;
}
