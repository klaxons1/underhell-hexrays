int __cdecl sub_10227CC0(_BYTE *a1)
{
  _BYTE *v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  char v5; // dl
  char *v6; // esi
  int v7; // ecx
  char *i; // esi

  v1 = a1;
  AssertValidStringPtr(a1, 0xFFFFFF);
  if ( *a1 == 45 )
  {
    v2 = -1;
    v1 = a1 + 1;
  }
  else
  {
    v2 = 1;
  }
  LOBYTE(v3) = *v1;
  v4 = 0;
  if ( *v1 == 48 && ((v5 = v1[1], v5 == 120) || v5 == 88) )
  {
    v6 = v1 + 2;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = *v6++;
          if ( (unsigned int)(v7 - 48) > 9 )
            break;
          v4 = v7 + 16 * (v4 - 3);
        }
        if ( (unsigned int)(v7 - 97) > 5 )
          break;
        v4 = v7 + 16 * v4 - 87;
      }
      if ( (unsigned int)(v7 - 65) > 5 )
        break;
      v4 = v7 + 16 * v4 - 55;
    }
  }
  else
  {
    if ( (_BYTE)v3 == 39 )
      return v2 * (char)v1[1];
    v3 = (char)v3;
    for ( i = v1 + 1; v3 >= 48; v3 = *i++ )
    {
      if ( v3 > 57 )
        break;
      v4 = v3 + 10 * v4 - 48;
    }
  }
  return v2 * v4;
}
