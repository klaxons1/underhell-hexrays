int *sub_10285820()
{
  if ( (dword_106D4004 & 1) == 0 )
  {
    dword_106D4004 |= 1u;
    dword_106D3FE8 = (int)"RocketTrail";
    dword_106D3FF0 = 0;
    dword_106D3FF4 = 0;
    dword_106D3FF8 = 0;
    dword_106D3FFC = 0;
    dword_106D4000 = 0;
    dword_106D3FEC = 11;
    atexit(sub_10475720);
  }
  dword_1065A98C = (int)&dword_1060F348;
  dword_1065A984 = 15;
  dword_1065A980 = (int)&unk_1065AF74;
  return &dword_1065A980;
}
