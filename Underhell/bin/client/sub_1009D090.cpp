char *__cdecl sub_1009D090(char *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4)
{
  char *v4; // esi
  _BYTE *v6; // eax
  int v7; // edx
  int v8; // eax
  char v9; // cl
  char i; // al
  char v11; // al
  int v12; // eax
  int v13; // ecx
  _BYTE *v14; // [esp+8h] [ebp+8h]

  if ( a3 )
    *a3 = 0;
  v4 = a1;
  if ( !a1 )
    return 0;
  if ( !byte_1042D820 )
  {
    sub_102311B0(&unk_1042D718, (int)"{}()'");
    sub_102311B0(&unk_1042D618, (int)"{}()':");
    byte_1042D820 = 1;
  }
  v6 = a4;
  if ( !a4 )
  {
    v6 = &unk_1042D718;
    if ( !byte_1042D821 )
      v6 = &unk_1042D618;
  }
  v7 = 0;
  v14 = v6;
  *a2 = 0;
LABEL_11:
  while ( 1 )
  {
    v8 = *v4;
    if ( v8 <= 32 )
      break;
LABEL_14:
    if ( v8 != 47 )
    {
      if ( v8 == 34 )
      {
        if ( a3 )
          *a3 = 1;
        v12 = v4[1];
        v4 += 2;
        if ( v12 != 34 )
        {
          while ( v12 )
          {
            a2[v7] = v12;
            v12 = *v4;
            ++v7;
            ++v4;
            if ( v12 == 34 )
            {
              a2[v7] = 0;
              return v4;
            }
          }
        }
      }
      else
      {
LABEL_35:
        if ( v14[v8] )
        {
          *a2 = v8;
          a2[1] = 0;
          return v4 + 1;
        }
        v13 = a2 - v4;
        do
        {
          v4[v13] = v8;
          v8 = *++v4;
          ++v7;
        }
        while ( !v14[v8] && v8 > 32 );
      }
      a2[v7] = 0;
      return v4;
    }
    v9 = v4[1];
    if ( v9 == 47 )
    {
      for ( i = *v4; i; i = *++v4 )
      {
        if ( i == 10 )
          break;
      }
    }
    else
    {
      if ( v9 != 42 )
        goto LABEL_35;
      v11 = v4[2];
      v4 += 2;
      if ( v11 )
      {
        while ( v11 != 42 || v4[1] != 47 )
        {
          v11 = *++v4;
          if ( !v11 )
            goto LABEL_11;
        }
        v4 += 2;
      }
    }
  }
  while ( v8 )
  {
    v8 = *++v4;
    if ( v8 > 32 )
      goto LABEL_14;
  }
  return 0;
}
