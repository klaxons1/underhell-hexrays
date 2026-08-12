int __cdecl sub_10025D80(int a1, int a2, int a3)
{
  int result; // eax

  result = sub_1009AE10(a1, a2, a3);
  if ( a2 )
  {
    *(_BYTE *)(a2 + 1812) = 1;
    return sub_10039310(a2);
  }
  return result;
}
