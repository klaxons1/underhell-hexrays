char __cdecl sub_1010FB40(int a1)
{
  int v1; // eax

  sub_1010FAF0(&dword_104373CC);
  v1 = dword_104373D8 - 1;
  if ( dword_104373D8 - 1 < 0 )
    return 0;
  while ( *(_DWORD *)(dword_104373CC + 8 * v1) != a1 )
  {
    if ( --v1 < 0 )
      return 0;
  }
  return 1;
}
