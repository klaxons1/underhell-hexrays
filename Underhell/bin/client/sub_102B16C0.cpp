int sub_102B16C0()
{
  if ( ((unsigned __int8)&dword_10403320 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  dword_10403320 = 0;
  dword_10403324 = 0;
  return atexit(sub_102C8260);
}
