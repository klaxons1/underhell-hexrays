int sub_102B16F0()
{
  if ( ((unsigned __int8)&dword_10403330 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  dword_10403330 = 0;
  dword_10403334 = 0;
  return atexit(sub_102C8270);
}
