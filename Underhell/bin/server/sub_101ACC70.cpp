int __cdecl sub_101ACC70(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( !a1 || a2 && (*(_BYTE *)(a1 + 248) & 1) != 0 )
    return 0;
  return result;
}
