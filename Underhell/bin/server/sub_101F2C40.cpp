int *sub_101F2C40()
{
  if ( (dword_106BD000 & 1) == 0 )
  {
    dword_106BD000 |= 1u;
    dword_106BCFE4 = (int)"CMovementSpeedMod";
    dword_106BCFEC = 0;
    dword_106BCFF0 = 0;
    dword_106BCFF4 = 0;
    dword_106BCFF8 = 0;
    dword_106BCFFC = 0;
    dword_106BCFE8 = 17;
    atexit(sub_104735C0);
  }
  dword_1063C594 = (int)&dword_1060F348;
  dword_1063C58C = 1;
  dword_1063C588 = (int)&unk_1063CADC;
  return &dword_1063C588;
}
