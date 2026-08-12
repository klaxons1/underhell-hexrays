char __cdecl sub_10135B60(int a1, int a2, float *a3, float a4)
{
  int v4; // edx
  float *i; // ecx

  v4 = 0;
  if ( a2 <= 0 )
    return 0;
  for ( i = (float *)(a1 + 8); *(i - 2) * *a3 + *(i - 1) * a3[1] + *i * a3[2] - i[1] >= -a4; i += 4 )
  {
    if ( ++v4 >= a2 )
      return 0;
  }
  return 1;
}
