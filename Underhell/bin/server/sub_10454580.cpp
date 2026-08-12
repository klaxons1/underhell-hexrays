int sub_10454580()
{
  if ( ((unsigned __int8)&dword_1069A688 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  dword_1069A688 = 0;
  dword_1069A68C = 0;
  return atexit(sub_104702D0);
}
