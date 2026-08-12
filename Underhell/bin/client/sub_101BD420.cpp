int __cdecl sub_101BD420(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // edi
  int result; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v11; // ebx
  int v12; // ebp

  v5 = a3;
  if ( a3 <= 0 )
    v5 = 1;
  if ( a5 )
  {
    v10 = a1;
    v11 = a2;
    v12 = 0;
    while ( 1 )
    {
      v12 += sub_101BD420(v10, v11, v5, a4, 0);
      if ( v10 == 1 && v11 == 1 && v5 == 1 )
        break;
      v10 >>= 1;
      v11 >>= 1;
      v5 >>= 1;
      if ( v10 < 1 )
        v10 = 1;
      if ( v11 < 1 )
        v11 = 1;
      if ( v5 < 1 )
        v5 = 1;
    }
    return v12;
  }
  else if ( a4 == 13 || a4 == 14 || a4 == 15 || a4 == 37 || a4 == 38 )
  {
    v7 = a1;
    if ( (unsigned int)(a1 - 1) <= 2 )
      v7 = 4;
    v8 = a2;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v8 = 4;
    if ( (unsigned int)(v5 - 2) <= 1 )
      v5 = 4;
    v9 = v5 * ((v8 * v7) >> 4);
    switch ( a4 )
    {
      case 13:
      case 38:
        result = 8 * v9;
        break;
      case 14:
      case 15:
      case 37:
        result = 16 * v9;
        break;
      default:
        result = 0;
        break;
    }
  }
  else
  {
    return v5 * a2 * a1 * dword_103ED650[7 * a4];
  }
  return result;
}
