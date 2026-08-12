char __thiscall sub_101D5630(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6,
        int a7,
        char a8)
{
  unsigned int i; // edi
  int *v9; // eax
  unsigned int j; // edx
  int v11; // ebx

  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= this[2] )
      break;
    v9 = (int *)(this[5] + (i + a3) * this[3] + 4 * a2);
    for ( j = 0; j < a4; ++v9 )
    {
      if ( j + a2 >= this[1] )
        break;
      v11 = (unsigned __int16)(a7 & *(_WORD *)(a6 + 2 * (j + i * a4))) << a8;
      ++j;
      *v9 = ~(a7 << a8) & *v9 | v11;
    }
  }
  return 1;
}
