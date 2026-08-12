unsigned int __cdecl sub_101C05B0(unsigned int a1, _BYTE *a2, int a3)
{
  unsigned int result; // eax
  unsigned int v4; // esi

  result = a1;
  v4 = a1 + 4 * a3;
  if ( a1 < v4 )
  {
    do
    {
      *a2 = *(_BYTE *)(result + 3);
      result += 4;
      ++a2;
    }
    while ( result < v4 );
  }
  return result;
}
