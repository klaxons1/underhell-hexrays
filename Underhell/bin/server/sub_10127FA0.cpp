int *sub_10127FA0()
{
  if ( (dword_1069DAE8 & 1) == 0 )
  {
    dword_1069DAE8 |= 1u;
    dword_1069DACC = (int)"CEnvFunnel";
    dword_1069DAD4 = 0;
    dword_1069DAD8 = 0;
    dword_1069DADC = 0;
    dword_1069DAE0 = 0;
    dword_1069DAE4 = 0;
    dword_1069DAD0 = 10;
    atexit(sub_10470A20);
  }
  dword_106198F0 = (int)&dword_1060F348;
  dword_106198E8 = 1;
  dword_106198E4 = (int)&unk_1069DA98;
  return &dword_106198E4;
}
