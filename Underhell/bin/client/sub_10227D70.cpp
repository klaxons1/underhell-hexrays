double __cdecl sub_10227D70(char *a1)
{
  char *v1; // esi
  int v2; // ecx
  double v3; // st7
  char v4; // al
  char *v5; // esi
  double v6; // st2
  double v7; // st2
  double v8; // rt0
  int v9; // eax
  double v10; // rt1
  double v11; // st2
  double v12; // st7
  double v13; // rt2
  double v14; // st2
  double v15; // st2
  double v16; // rtt
  double v17; // st2
  int v19; // edx
  int i; // ecx
  int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // [esp+4h] [ebp-4h]

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
  v3 = 0.0;
  v24 = v2;
  if ( *v1 == 48 )
  {
    v4 = v1[1];
    if ( v4 == 120 || v4 == 88 )
    {
      v5 = v1 + 2;
      v6 = 65.0;
      while ( 1 )
      {
        v9 = *v5++;
        if ( (unsigned int)(v9 - 48) > 9 )
        {
          if ( (unsigned int)(v9 - 97) > 5 )
          {
            if ( (unsigned int)(v9 - 65) > 5 )
              return v3 * (double)v2;
            v16 = v6;
            v17 = v3;
            v12 = v16;
            v15 = v17 * 16.0 + (double)v9 - v16;
          }
          else
          {
            v13 = v6;
            v14 = v3;
            v12 = v13;
            v15 = v14 * 16.0 + (double)v9 - 97.0;
          }
          v7 = v15 + 10.0;
        }
        else
        {
          v10 = v6;
          v11 = v3;
          v12 = v10;
          v7 = v11 * 16.0 + (double)v9 - 48.0;
        }
        v8 = v7;
        v6 = v12;
        v3 = v8;
      }
    }
  }
  if ( *v1 == 39 )
    return (double)(v2 * v1[1]);
  v19 = -1;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      v21 = *v1++;
      if ( v21 != 46 )
        break;
      v19 = i;
    }
    if ( (unsigned int)(v21 - 48) > 9 )
      break;
    v3 = v3 * 10.0 + (double)v21 - 48.0;
  }
  if ( v19 != -1 && i > v19 )
  {
    if ( i - v19 >= 8 )
    {
      v22 = ((unsigned int)(i - v19 - 8) >> 3) + 1;
      i -= 8 * v22;
      do
      {
        --v22;
        v3 = v3 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1;
      }
      while ( v22 );
    }
    if ( i > v19 )
    {
      v23 = i - v19;
      do
      {
        --v23;
        v3 = v3 * 0.1;
      }
      while ( v23 );
    }
  }
  return v3 * (double)v24;
}
