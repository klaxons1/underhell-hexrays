int __stdcall sub_10266030(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 3296) &= ~0x20u;
  return result;
}
