int __cdecl sub_10196F80(int a1, int a2)
{
  int result; // eax
  bool v3; // zf

  result = a2;
  v3 = *(_BYTE *)(a2 + 2010) == 1;
  *(float *)(a2 + 1968) = *(float *)(a1 + 4);
  if ( v3 )
    *(float *)(a2 + 2020) = *(float *)(a2 + 2004);
  return result;
}
