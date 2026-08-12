_BYTE *__stdcall sub_102AAF90(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ebp
  _BYTE *v7; // eax
  int v8; // eax

  v3 = a1[3];
  v4 = a1[7] - v3;
  v5 = v3 + *a1 - a1[8];
  v6 = 0;
  v7 = (_BYTE *)v5;
  if ( a3 > 0 )
  {
    while ( 2 )
    {
      *(_DWORD *)(a2 + 4 * v6) = &v7[-v5];
      do
      {
        if ( (int)&v7[-v5] >= v4 )
        {
          v8 = sub_1022E450(a1, v4 + 1, 0);
          v5 = v8;
          if ( !v8 )
            return 0;
          v7 = (_BYTE *)(v8 + v4);
          v4 = a1[7] - a1[3];
        }
      }
      while ( *v7++ );
      if ( ++v6 < a3 )
        continue;
      break;
    }
  }
  return &v7[-v5];
}
