int __cdecl sub_101678B0(int a1, int a2)
{
  int result; // eax

  if ( !byte_106B4FDC )
  {
    result = a1;
    if ( a1 >= 0 && a1 < dword_106B4FEC )
    {
      result = 3 * a1;
      *(_DWORD *)(dword_106B4FE0 + 12 * a1 + 4) = a2;
    }
  }
  return result;
}
