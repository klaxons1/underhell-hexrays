int *sub_1031F950()
{
  if ( (dword_106E4EC0 & 1) == 0 )
  {
    dword_106E4EC0 |= 1u;
    dword_106E4EA4 = (int)"CBombSuppressor";
    dword_106E4EAC = 0;
    dword_106E4EB0 = 0;
    dword_106E4EB4 = 0;
    dword_106E4EB8 = 0;
    dword_106E4EBC = 0;
    dword_106E4EA8 = 15;
    atexit(sub_10477B60);
  }
  dword_1066C978 = (int)&dword_1060F348;
  dword_1066C970 = 1;
  dword_1066C96C = (int)&unk_106E4E70;
  return &dword_1066C96C;
}
