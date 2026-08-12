int *sub_1031F620()
{
  if ( (dword_106E4DF8 & 1) == 0 )
  {
    dword_106E4DF8 |= 1u;
    dword_106E4DDC = (int)"CBombDropSensor";
    dword_106E4DE4 = 0;
    dword_106E4DE8 = 0;
    dword_106E4DEC = 0;
    dword_106E4DF0 = 0;
    dword_106E4DF4 = 0;
    dword_106E4DE0 = 15;
    atexit(sub_10477AF0);
  }
  dword_1066C918 = (int)&dword_1060F348;
  dword_1066C910 = 5;
  dword_1066C90C = (int)&unk_1066CC5C;
  return &dword_1066C90C;
}
