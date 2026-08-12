double __cdecl sub_10246760(char a1, float *a2, float *a3)
{
  if ( (a1 & 0x40) != 0 )
    return a2[2] - a3[2];
  if ( a1 >= 0 )
    return a2[1] - a3[1];
  return *a2 - *a3;
}
