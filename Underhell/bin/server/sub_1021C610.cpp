int *sub_1021C610()
{
  if ( (dword_106C3424 & 1) == 0 )
  {
    dword_106C3424 |= 1u;
    dword_106C3408 = (int)"CRopeKeyframe";
    dword_106C3410 = 0;
    dword_106C3414 = 0;
    dword_106C3418 = 0;
    dword_106C341C = 0;
    dword_106C3420 = 0;
    dword_106C340C = 13;
    atexit(sub_10473CA0);
  }
  dword_106460CC = (int)&dword_1060F348;
  dword_106460C4 = 23;
  dword_106460C0 = (int)&unk_10646164;
  return &dword_106460C0;
}
