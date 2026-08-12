bool __stdcall sub_103E5F50(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 64);
  return (v1 & 0x10) != 0 || (v1 & 0x40040) == 0;
}
