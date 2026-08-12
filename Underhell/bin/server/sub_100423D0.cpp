int *sub_100423D0()
{
  if ( (dword_10691C20 & 1) == 0 )
  {
    dword_10691C20 |= 1u;
    dword_10691C04 = (int)"CAI_BaseFlyingBot";
    dword_10691C0C = 0;
    dword_10691C10 = 0;
    dword_10691C14 = 0;
    dword_10691C18 = 0;
    dword_10691C1C = 0;
    dword_10691C08 = 17;
    atexit(sub_1046EB60);
  }
  dword_106019F4 = (int)&dword_105FE114;
  dword_106019EC = 6;
  dword_106019E8 = (int)&unk_10601A3C;
  return &dword_106019E8;
}
