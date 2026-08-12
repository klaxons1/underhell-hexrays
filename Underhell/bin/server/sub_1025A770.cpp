int *sub_1025A770()
{
  if ( (dword_106C7B88 & 1) == 0 )
  {
    dword_106C7B88 |= 1u;
    dword_106C7B6C = (int)"CPhysicsWind";
    dword_106C7B74 = 0;
    dword_106C7B78 = 0;
    dword_106C7B7C = 0;
    dword_106C7B80 = 0;
    dword_106C7B84 = 0;
    dword_106C7B70 = 12;
    atexit(sub_10474830);
  }
  dword_10651690 = 0;
  dword_10651688 = 2;
  dword_10651684 = (int)&unk_1065288C;
  return &dword_10651684;
}
