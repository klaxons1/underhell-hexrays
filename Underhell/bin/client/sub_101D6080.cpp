char __thiscall sub_101D6080(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6,
        char a7)
{
  unsigned int i; // edi
  int *v8; // eax
  unsigned int j; // edx
  int v10; // ebx

  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= this[2] )
      break;
    v8 = (int *)(this[5] + (i + a3) * this[3] + 4 * a2);
    for ( j = 0; j < a4; ++v8 )
    {
      if ( j + a2 >= this[1] )
        break;
      v10 = *(unsigned __int8 *)(j + i * a4 + a6) << a7;
      ++j;
      *v8 = ~(255 << a7) & *v8 | v10;
    }
  }
  return 1;
}
