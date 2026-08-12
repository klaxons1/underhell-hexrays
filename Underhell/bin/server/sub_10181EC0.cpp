char *__cdecl sub_10181EC0(char *a1, _BYTE *a2)
{
  char *v2; // esi
  int v3; // edi
  char *v5; // ecx
  char i; // al
  int v7; // eax

  v2 = a1;
  v3 = 0;
  *a2 = 0;
  if ( a1 )
  {
    if ( byte_1062FF4C )
    {
      byte_1062FF4C = 0;
      memset(byte_106B6620, 0, sizeof(byte_106B6620));
      v5 = off_1062FF48;
      for ( i = *off_1062FF48; *v5; i = *v5 )
      {
        ++v5;
        byte_106B6620[i] = 1;
      }
    }
    LOBYTE(v7) = *a1;
    while ( 1 )
    {
      v7 = (char)v7;
      if ( (char)v7 <= 32 )
        break;
LABEL_10:
      if ( v7 != 47 )
      {
        if ( v7 == 34 )
        {
          ++v2;
          while ( 1 )
          {
            v7 = *v2++;
            if ( v7 == 34 || !v7 )
              break;
            a2[v3] = v7;
            if ( ++v3 >= 2048 )
            {
              a2[--v3] = 0;
              goto LABEL_22;
            }
          }
        }
        else
        {
LABEL_22:
          if ( byte_106B6620[v7] )
          {
            a2[v3] = v7;
            a2[v3 + 1] = 0;
            return v2 + 1;
          }
          do
          {
            a2[v3] = v7;
            v7 = *++v2;
            ++v3;
            if ( byte_106B6620[v7] )
              break;
            if ( v3 >= 2048 )
              a2[--v3] = 0;
          }
          while ( v7 > 32 );
        }
        a2[v3] = 0;
        return v2;
      }
      if ( v2[1] != 47 )
        goto LABEL_22;
      LOBYTE(v7) = *v2;
      if ( *v2 )
      {
        do
        {
          if ( (_BYTE)v7 == 10 )
            break;
          LOBYTE(v7) = *++v2;
        }
        while ( (_BYTE)v7 );
      }
    }
    while ( v7 )
    {
      v7 = *++v2;
      if ( v7 > 32 )
        goto LABEL_10;
    }
  }
  return 0;
}
