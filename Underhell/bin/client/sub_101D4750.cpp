char __thiscall sub_101D4750(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6,
        int a7)
{
  unsigned int i; // edi
  int v8; // edx
  unsigned int j; // eax

  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  for ( i = 0; i < a5; ++i )
  {
    if ( i + a3 >= this[2] )
      break;
    v8 = this[5] + (i + a3) * this[3] + 8 * a2;
    for ( j = 0; j < a4; v8 += 8 )
    {
      if ( j + a2 >= this[1] )
        break;
      *(_WORD *)(v8 + 2 * a7) = *(_WORD *)(a6 + 2 * (j + i * a4));
      ++j;
    }
  }
  return 1;
}
