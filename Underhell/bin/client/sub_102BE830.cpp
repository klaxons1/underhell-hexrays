int sub_102BE830()
{
  if ( ((unsigned __int8)&dword_1043C868 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  dword_1043C868 = 0;
  dword_1043C86C = 0;
  return atexit(sub_102CC5E0);
}
