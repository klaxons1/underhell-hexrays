int *sub_1011BA10()
{
  if ( (dword_104375C8 & 1) == 0 )
  {
    dword_104375C8 |= 1u;
    dword_104375AC = (int)"SaveRestoreBlockHeader_t";
    dword_104375B4 = 0;
    dword_104375B8 = 0;
    dword_104375BC = 0;
    dword_104375C0 = 0;
    dword_104375C4 = 0;
    dword_104375B0 = 24;
    atexit(sub_102CB680);
  }
  dword_103E4660 = 0;
  dword_103E4658 = 3;
  dword_103E4654 = (int)&unk_103E4AB4;
  return &dword_103E4654;
}
