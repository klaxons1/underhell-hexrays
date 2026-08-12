int *sub_10240BD0()
{
  if ( (dword_106C51C8 & 1) == 0 )
  {
    dword_106C51C8 |= 1u;
    dword_106C51AC = (int)"CEnvSoundscapeProxy";
    dword_106C51B4 = 0;
    dword_106C51B8 = 0;
    dword_106C51BC = 0;
    dword_106C51C0 = 0;
    dword_106C51C4 = 0;
    dword_106C51B0 = 19;
    atexit(sub_10474100);
  }
  dword_1064D2EC = (int)&dword_1064D2F8;
  dword_1064D2E4 = 1;
  dword_1064D2E0 = (int)&unk_1064D554;
  return &dword_1064D2E0;
}
