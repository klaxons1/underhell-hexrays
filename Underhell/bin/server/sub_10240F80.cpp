int *sub_10240F80()
{
  if ( (dword_106C523C & 1) == 0 )
  {
    dword_106C523C |= 1u;
    dword_106C5220 = (int)"CEnvSoundscapeTriggerable";
    dword_106C5228 = 0;
    dword_106C522C = 0;
    dword_106C5230 = 0;
    dword_106C5234 = 0;
    dword_106C5238 = 0;
    dword_106C5224 = 25;
    atexit(sub_10474120);
  }
  dword_1064D31C = (int)&dword_1064D2F8;
  dword_1064D314 = 1;
  dword_1064D310 = (int)&unk_106C51EC;
  return &dword_1064D310;
}
