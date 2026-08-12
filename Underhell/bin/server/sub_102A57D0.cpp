int *sub_102A57D0()
{
  if ( (dword_106DB7A8 & 1) == 0 )
  {
    dword_106DB7A8 |= 1u;
    dword_106DB78C = (int)"FailPosition_t";
    dword_106DB794 = 0;
    dword_106DB798 = 0;
    dword_106DB79C = 0;
    dword_106DB7A0 = 0;
    dword_106DB7A4 = 0;
    dword_106DB790 = 14;
    atexit(sub_104766C0);
  }
  dword_1065F014 = 0;
  dword_1065F00C = 2;
  dword_1065F008 = (int)&unk_1065F424;
  return &dword_1065F008;
}
