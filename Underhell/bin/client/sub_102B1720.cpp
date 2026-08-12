int sub_102B1720()
{
  if ( ((unsigned __int8)&dword_10403328 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  dword_10403328 = 0;
  dword_1040332C = 0;
  return atexit(sub_102C8280);
}
