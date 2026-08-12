char __cdecl sub_10182250(char *a1, const char *a2, char *Destination)
{
  char *v3; // esi
  int v4; // edi
  char *v5; // ecx
  char i; // al
  int v7; // eax
  char Source[2048]; // [esp+Ch] [ebp-800h] BYREF

  v3 = a1;
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    v4 = 0;
    Source[0] = 0;
    if ( v3 )
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
      LOBYTE(v7) = *v3;
      while ( 1 )
      {
        v7 = (char)v7;
        if ( (char)v7 <= 32 )
        {
          while ( v7 )
          {
            v7 = *++v3;
            if ( v7 > 32 )
              goto LABEL_11;
          }
          goto LABEL_3;
        }
LABEL_11:
        if ( v7 != 47 )
          break;
        if ( v3[1] != 47 )
          goto LABEL_23;
        LOBYTE(v7) = *v3;
        if ( *v3 )
        {
          do
          {
            if ( (_BYTE)v7 == 10 )
              break;
            LOBYTE(v7) = *++v3;
          }
          while ( (_BYTE)v7 );
        }
      }
      if ( v7 == 34 )
      {
        ++v3;
        while ( 1 )
        {
          v7 = *v3++;
          if ( v7 == 34 || !v7 )
            goto LABEL_29;
          Source[v4++] = v7;
          if ( v4 >= 2048 )
          {
            Source[--v4] = 0;
            break;
          }
        }
      }
LABEL_23:
      if ( byte_106B6620[v7] )
      {
        Source[v4] = v7;
        Source[v4 + 1] = 0;
        ++v3;
        goto LABEL_30;
      }
      do
      {
        ++v3;
        Source[v4] = v7;
        v7 = *v3;
        ++v4;
        if ( byte_106B6620[v7] )
          break;
        if ( v4 >= 2048 )
          Source[--v4] = 0;
      }
      while ( v7 > 32 );
LABEL_29:
      Source[v4] = 0;
LABEL_30:
      if ( Source[0] == 125 )
        return 0;
    }
    else
    {
LABEL_3:
      v3 = 0;
    }
    if ( !strcmp(Source, a2) )
      break;
    v3 = sub_10181EC0(v3, Source);
    if ( !v3 )
      return 0;
  }
  sub_10181EC0(v3, Source);
  sub_104299C0(Destination, Source, 0x800u);
  return 1;
}
