int __cdecl sub_100BF920(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 20);
  *(_BYTE *)(result + 16) |= 2u;
  return result;
}
