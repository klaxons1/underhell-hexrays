int __cdecl sub_10196F50(int a1, int a2)
{
  int result; // eax
  bool v3; // zf

  result = a2;
  v3 = *(_BYTE *)(a2 + 2009) == 1;
  *(float *)(a2 + 1964) = *(float *)(a1 + 4);
  if ( v3 )
    *(float *)(a2 + 2016) = *(float *)(a2 + 2000);
  return result;
}
