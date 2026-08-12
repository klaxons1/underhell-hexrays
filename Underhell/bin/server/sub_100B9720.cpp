int *sub_100B9720()
{
  if ( (dword_106953F0 & 1) == 0 )
  {
    dword_106953F0 |= 1u;
    dword_106953D4 = (int)"CAI_MoveMonitor";
    dword_106953DC = 0;
    dword_106953E0 = 0;
    dword_106953E4 = 0;
    dword_106953E8 = 0;
    dword_106953EC = 0;
    dword_106953D8 = 15;
    atexit(sub_1046F6B0);
  }
  dword_1060C5A8 = 0;
  dword_1060C5A0 = 2;
  dword_1060C59C = (int)&unk_1060C6CC;
  return &dword_1060C59C;
}
