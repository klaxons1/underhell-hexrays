void __cdecl sub_10233770(int a1, int a2, __int16 a3)
{
  int i; // eax

  if ( a1 )
  {
    for ( i = 0; i < a2; ++i )
      *(_WORD *)(a1 + 2 * i) = a3 + i;
  }
}
