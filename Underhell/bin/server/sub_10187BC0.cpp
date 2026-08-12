int *sub_10187BC0()
{
  if ( (dword_106B6E04 & 1) == 0 )
  {
    dword_106B6E04 |= 1u;
    dword_106B6DE8 = (int)"CTemplateNPCMaker";
    dword_106B6DF0 = 0;
    dword_106B6DF4 = 0;
    dword_106B6DF8 = 0;
    dword_106B6DFC = 0;
    dword_106B6E00 = 0;
    dword_106B6DEC = 17;
    atexit(sub_10472170);
  }
  dword_10631370 = (int)&dword_10631334;
  dword_10631368 = 12;
  dword_10631364 = (int)&unk_10631CFC;
  return &dword_10631364;
}
