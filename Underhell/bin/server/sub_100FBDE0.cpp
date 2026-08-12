int __cdecl sub_100FBDE0(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = a2;
  if ( (*(_DWORD *)(a2 + 248) & 0x400) == 0 )
    return sub_100D7AE0(a1, a2, a3, a4);
  *a4 = 0;
  return result;
}
