int __cdecl sub_10421D60(int a1)
{
  int result; // eax
  int i; // ecx

  result = 0;
  for ( i = a1 >> 1; i; i >>= 1 )
    ++result;
  return result;
}
