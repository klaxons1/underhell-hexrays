int *sub_10127B10()
{
  if ( (dword_1069DA54 & 1) == 0 )
  {
    dword_1069DA54 |= 1u;
    dword_1069DA38 = (int)"CEnvShooter";
    dword_1069DA40 = 0;
    dword_1069DA44 = 0;
    dword_1069DA48 = 0;
    dword_1069DA4C = 0;
    dword_1069DA50 = 0;
    dword_1069DA3C = 11;
    atexit(sub_104709F0);
  }
  dword_106198A8 = (int)&dword_10619884;
  dword_106198A0 = 4;
  dword_1061989C = (int)&unk_1061A40C;
  return &dword_1061989C;
}
