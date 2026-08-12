int __cdecl sub_101223A0(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  if ( a4 )
  {
    *a4 = -1;
    a4[1] = -1;
    a4[2] = -1;
    a4[3] = -1;
    a4[4] = -1;
    a4[5] = -1;
    a4[6] = -1;
    a4[7] = -1;
  }
  a4[(a5 - 1) >> 5] &= ~(1 << ((a5 - 1) & 0x1F));
  return a3;
}
