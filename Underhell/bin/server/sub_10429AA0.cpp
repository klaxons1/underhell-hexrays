char *__cdecl sub_10429AA0(const char *a1, char *Destination, signed int Count)
{
  unsigned int v3; // kr00_4
  int v4; // ecx
  unsigned int v5; // eax
  char v6; // dl
  unsigned int v7; // eax
  char v8; // dl
  int v9; // ecx
  signed int v10; // esi
  int v11; // eax
  const char *v12; // edi
  char *result; // eax
  char v14; // dl

  if ( a1 && *a1 )
  {
    v3 = strlen(a1);
    v4 = v3 - 1;
    v5 = v3 - 1;
    if ( v3 != 1 )
    {
      do
      {
        v6 = a1[v5];
        if ( v6 == 46 )
          break;
        if ( v6 == 92 )
          break;
        if ( v6 == 47 )
          break;
        --v5;
      }
      while ( v5 );
    }
    if ( a1[v5] == 46 )
      v7 = v5 - 1;
    else
      v7 = v3 - 1;
    if ( v4 < 0 )
      goto LABEL_15;
    while ( 1 )
    {
      v8 = a1[v4];
      if ( v8 == 92 || v8 == 47 )
        break;
      if ( --v4 < 0 )
        goto LABEL_15;
    }
    v14 = a1[v4];
    if ( v14 == 92 || v14 == 47 )
      v9 = v4 + 1;
    else
LABEL_15:
      v9 = 0;
    v10 = Count;
    v11 = v7 - v9 + 2;
    if ( v11 < Count )
      v10 = v11;
    v12 = &a1[v9];
    AssertValidWritePtr(Destination, v10);
    AssertValidStringPtr(v12, 0xFFFFFF);
    result = strncpy(Destination, v12, v10);
    if ( v10 > 0 )
      Destination[v10 - 1] = 0;
  }
  else
  {
    result = Destination;
    *Destination = 0;
  }
  return result;
}
