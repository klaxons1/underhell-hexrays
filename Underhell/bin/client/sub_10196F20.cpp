int __cdecl sub_10196F20(int a1, int a2)
{
  int result; // eax
  bool v3; // zf

  result = a2;
  v3 = *(_BYTE *)(a2 + 2008) == 1;
  *(float *)(a2 + 1960) = *(float *)(a1 + 4);
  if ( v3 )
    *(float *)(a2 + 2012) = *(float *)(a2 + 1996);
  return result;
}
