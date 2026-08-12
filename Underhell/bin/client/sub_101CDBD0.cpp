void __cdecl sub_101CDBD0(signed int a1, int a2, double *a3, int a4, int a5)
{
  signed int v5; // ebx
  int v6; // edx
  double v7; // st7
  double v8; // st6
  signed int v9; // ebx
  signed int i; // ecx
  signed int v11; // edi
  signed int v12; // ecx
  signed int v13; // ebp
  signed int j; // ecx
  signed int v15; // edi
  signed int v16; // ecx
  signed int v17; // ebp
  _DWORD v18[48]; // [esp+10h] [ebp-C0h] BYREF

  v5 = 0;
  if ( a1 > 0 )
  {
    v6 = a2 + 8;
    memset32(v18, 1, a1);
    do
    {
      v7 = *(double *)(v6 + 8) * a3[2];
      v8 = *(double *)(v6 - 8) * *a3;
      ++v5;
      v6 += 24;
      *(&X + v5) = v7 + v8 + a3[1] * *(double *)(v6 - 24);
    }
    while ( v5 < a1 );
  }
  v9 = 0;
  if ( a5 )
  {
    if ( a1 > 0 )
    {
      do
      {
        for ( i = 0; i < a1; ++i )
        {
          if ( v18[i] )
            break;
        }
        v11 = i;
        v12 = i + 1;
        if ( v12 < a1 )
        {
          v13 = v11;
          do
          {
            if ( v18[v12] )
            {
              if ( dbl_10455228[v12] <= dbl_10455228[v13] )
              {
                v11 = v12;
                v13 = v12;
              }
            }
            ++v12;
          }
          while ( v12 < a1 );
        }
        ++v9;
        v18[v11] = 0;
        *(_DWORD *)(a4 + 4 * v9 - 4) = v11;
      }
      while ( v9 < a1 );
    }
  }
  else if ( a1 > 0 )
  {
    do
    {
      for ( j = 0; j < a1; ++j )
      {
        if ( v18[j] )
          break;
      }
      v15 = j;
      v16 = j + 1;
      if ( v16 < a1 )
      {
        v17 = v15;
        do
        {
          if ( v18[v16] && dbl_10455228[v16] < dbl_10455228[v17] )
          {
            v15 = v16;
            v17 = v16;
          }
          ++v16;
        }
        while ( v16 < a1 );
      }
      ++v9;
      v18[v15] = 0;
      *(_DWORD *)(a4 + 4 * v9 - 4) = v15;
    }
    while ( v9 < a1 );
  }
}
