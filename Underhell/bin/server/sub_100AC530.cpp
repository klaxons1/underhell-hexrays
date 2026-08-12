int *sub_100AC530()
{
  if ( (dword_106950F4 & 1) == 0 )
  {
    dword_106950F4 |= 1u;
    dword_106950D8 = (int)"CAI_SentenceBase";
    dword_106950E0 = 0;
    dword_106950E4 = 0;
    dword_106950E8 = 0;
    dword_106950EC = 0;
    dword_106950F0 = 0;
    dword_106950DC = 16;
    atexit(sub_1046F5C0);
  }
  dword_1060B2C0 = 0;
  dword_1060B2B8 = 4;
  dword_1060B2B4 = (int)&unk_1060B324;
  return &dword_1060B2B4;
}
