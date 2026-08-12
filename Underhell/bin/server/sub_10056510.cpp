int *sub_10056510()
{
  if ( (dword_106920C4 & 1) == 0 )
  {
    dword_106920C4 |= 1u;
    dword_106920A8 = (int)"AI_FollowNavInfo_t";
    dword_106920B0 = 0;
    dword_106920B4 = 0;
    dword_106920B8 = 0;
    dword_106920BC = 0;
    dword_106920C0 = 0;
    dword_106920AC = 18;
    atexit(sub_1046EC60);
  }
  dword_10602B4C = 0;
  dword_10602B44 = 12;
  dword_10602B40 = (int)&unk_10603DAC;
  return &dword_10602B40;
}
