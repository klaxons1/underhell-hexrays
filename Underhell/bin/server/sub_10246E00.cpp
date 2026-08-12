int *sub_10246E00()
{
  if ( (dword_106C5CEC & 1) == 0 )
  {
    dword_106C5CEC |= 1u;
    dword_106C5CD0 = (int)"CBaseDMStart";
    dword_106C5CD8 = 0;
    dword_106C5CDC = 0;
    dword_106C5CE0 = 0;
    dword_106C5CE4 = 0;
    dword_106C5CE8 = 0;
    dword_106C5CD4 = 12;
    atexit(sub_10474290);
  }
  dword_1064E484 = (int)&dword_1060F348;
  dword_1064E47C = 1;
  dword_1064E478 = (int)&unk_1064E5B4;
  return &dword_1064E478;
}
