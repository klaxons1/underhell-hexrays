int __cdecl sub_10122360(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  if ( a4 )
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[6] = 0;
    a4[7] = 0;
  }
  a4[(a5 - 1) >> 5] |= 1 << ((a5 - 1) & 0x1F);
  return a3;
}
