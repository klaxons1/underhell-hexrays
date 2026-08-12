int __cdecl sub_10167910(int a1, int a2)
{
  int v2; // ecx

  if ( byte_106B4FDC || a1 < 0 || a1 >= dword_106B4FEC )
    return 0;
  v2 = dword_106B4FE0;
  *(_DWORD *)(dword_106B4FE0 + 12 * a1 + 8) += a2;
  return *(_DWORD *)(v2 + 12 * a1 + 8);
}
