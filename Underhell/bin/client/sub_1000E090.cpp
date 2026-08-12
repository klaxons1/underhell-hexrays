int __cdecl sub_1000E090(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    result = *(_DWORD *)(a1 + 52);
    dword_103D89C4 = result;
  }
  else
  {
    dword_103D89C4 = -1;
  }
  return result;
}
