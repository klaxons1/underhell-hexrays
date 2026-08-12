unsigned int __cdecl sub_101C2780(unsigned int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int result; // eax
  int i; // esi
  int v7; // esi
  int v8; // ebx
  int v9; // edi
  double v10; // st7

  v4 = a1;
  result = a1 + 8 * a4 * a3;
  if ( a1 < result )
  {
    for ( i = a2 - a1; ; i = a2 - a1 )
    {
      v7 = v4 + i;
      v8 = v4 - v7;
      v9 = 4;
      do
      {
        v10 = sub_1001AB20(*(unsigned __int16 *)(v8 + v7)) * 4096.0;
        if ( v10 > 0.0 )
        {
          if ( v10 >= 65535.0 )
            v10 = 65535.0;
        }
        else
        {
          v10 = 0.0;
        }
        v7 += 2;
        result = (unsigned __int16)a3 | 0xC00;
        --v9;
        *(_WORD *)(v7 - 2) = (int)v10;
      }
      while ( v9 );
      v4 += 8;
      if ( v4 >= a1 + 8 * a4 * a3 )
        break;
    }
  }
  return result;
}
