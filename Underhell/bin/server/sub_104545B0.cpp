int sub_104545B0()
{
  if ( ((unsigned __int8)&dword_1069A680 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  dword_1069A680 = 0;
  dword_1069A684 = 0;
  return atexit(sub_104702E0);
}
