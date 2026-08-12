BOOL __stdcall sub_10272650(int a1, int a2)
{
  return (dword_106CF894[a2 + ((a1 - 1) >> 5)] & (1 << ((a1 - 1) & 0x1F))) != 0;
}
