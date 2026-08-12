int *sub_10134480()
{
  if ( (dword_106AFB0C & 1) == 0 )
  {
    dword_106AFB0C |= 1u;
    dword_106AFAF0 = (int)"CTextureToggle";
    dword_106AFAF8 = 0;
    dword_106AFAFC = 0;
    dword_106AFB00 = 0;
    dword_106AFB04 = 0;
    dword_106AFB08 = 0;
    dword_106AFAF4 = 14;
    atexit(sub_10470E80);
  }
  dword_1061F93C = (int)&dword_1060F348;
  dword_1061F934 = 2;
  dword_1061F930 = (int)&unk_1061F9D4;
  return &dword_1061F930;
}
