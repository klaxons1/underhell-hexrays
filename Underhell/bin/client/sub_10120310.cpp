int *sub_10120310()
{
  if ( (dword_104377C4 & 1) == 0 )
  {
    dword_104377C4 |= 1u;
    dword_104377A8 = (int)"CRandSimTimer";
    dword_104377B0 = 0;
    dword_104377B4 = 0;
    dword_104377B8 = 0;
    dword_104377BC = 0;
    dword_104377C0 = 0;
    dword_104377AC = 13;
    atexit(sub_102CB790);
  }
  dword_103E539C = (int)&dword_103E5360;
  dword_103E5394 = 2;
  dword_103E5390 = (int)&unk_103E54F4;
  return &dword_103E5390;
}
