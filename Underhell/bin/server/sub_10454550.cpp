int sub_10454550()
{
  if ( ((unsigned __int8)&dword_1069A678 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  dword_1069A678 = 0;
  dword_1069A67C = 0;
  return atexit(sub_104702C0);
}
