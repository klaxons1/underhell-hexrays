int __stdcall sub_10020EC0(int a1)
{
  if ( a1 )
  {
    if ( *(_WORD *)(a1 + 816) == 100 )
      return 4;
    if ( *(_WORD *)(a1 + 816) == 101 )
      return 5;
  }
  return 3;
}
