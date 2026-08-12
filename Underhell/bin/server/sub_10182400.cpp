int __cdecl sub_10182400(char *a1)
{
  int result; // eax
  int v3; // edi
  char *v4; // ecx
  char i; // al
  int v6; // eax
  _BYTE v7[2048]; // [esp+8h] [ebp-800h] BYREF
  int v8; // [esp+810h] [ebp+8h]

  result = 0;
  v8 = 0;
  if ( a1 )
  {
    do
    {
      v3 = 0;
      v7[0] = 0;
      if ( a1 )
      {
        if ( byte_1062FF4C )
        {
          byte_1062FF4C = 0;
          memset(byte_106B6620, 0, sizeof(byte_106B6620));
          v4 = off_1062FF48;
          for ( i = *off_1062FF48; *v4; i = *v4 )
          {
            ++v4;
            byte_106B6620[i] = 1;
          }
        }
        LOBYTE(v6) = *a1;
        while ( 1 )
        {
          v6 = (char)v6;
          if ( (char)v6 <= 32 )
          {
            while ( v6 )
            {
              v6 = *++a1;
              if ( v6 > 32 )
                goto LABEL_11;
            }
            goto LABEL_3;
          }
LABEL_11:
          if ( v6 != 47 )
            break;
          if ( a1[1] != 47 )
            goto LABEL_23;
          LOBYTE(v6) = *a1;
          if ( *a1 )
          {
            do
            {
              if ( (_BYTE)v6 == 10 )
                break;
              LOBYTE(v6) = *++a1;
            }
            while ( (_BYTE)v6 );
          }
        }
        if ( v6 == 34 )
        {
          ++a1;
          while ( 1 )
          {
            v6 = *a1++;
            if ( v6 == 34 || !v6 )
              goto LABEL_29;
            v7[v3++] = v6;
            if ( v3 >= 2048 )
            {
              v7[--v3] = 0;
              break;
            }
          }
        }
LABEL_23:
        if ( byte_106B6620[v6] )
        {
          v7[v3] = v6;
          v7[v3 + 1] = 0;
          ++a1;
          goto LABEL_30;
        }
        do
        {
          ++a1;
          v7[v3] = v6;
          v6 = *a1;
          ++v3;
          if ( byte_106B6620[v6] )
            break;
          if ( v3 >= 2048 )
            v7[--v3] = 0;
        }
        while ( v6 > 32 );
LABEL_29:
        v7[v3] = 0;
LABEL_30:
        if ( v7[0] == 125 )
          return v8;
      }
      else
      {
LABEL_3:
        a1 = 0;
      }
      ++v8;
      a1 = sub_10181EC0(a1, v7);
    }
    while ( a1 );
    return v8;
  }
  return result;
}
