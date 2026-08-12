int *sub_1006AE40()
{
  if ( (dword_10692EC4 & 1) == 0 )
  {
    dword_10692EC4 |= 1u;
    dword_10692EA8 = (int)"CAI_DynamicLink";
    dword_10692EB0 = 0;
    dword_10692EB4 = 0;
    dword_10692EB8 = 0;
    dword_10692EBC = 0;
    dword_10692EC0 = 0;
    dword_10692EAC = 15;
    atexit(sub_1046F110);
  }
  dword_10606824 = (int)&dword_1060F348;
  dword_1060681C = 8;
  dword_10606818 = (int)&unk_10606B9C;
  return &dword_10606818;
}
