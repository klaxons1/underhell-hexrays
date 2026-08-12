int *sub_10083A90()
{
  if ( (dword_106935D4 & 1) == 0 )
  {
    dword_106935D4 |= 1u;
    dword_106935B8 = (int)"CAI_Navigator";
    dword_106935C0 = 0;
    dword_106935C4 = 0;
    dword_106935C8 = 0;
    dword_106935CC = 0;
    dword_106935D0 = 0;
    dword_106935BC = 13;
    atexit(sub_1046F330);
  }
  dword_1060886C = 0;
  dword_10608864 = 20;
  dword_10608860 = (int)&unk_10608B14;
  return &dword_10608860;
}
