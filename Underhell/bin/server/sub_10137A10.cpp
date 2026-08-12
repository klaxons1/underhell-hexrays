int *sub_10137A10()
{
  if ( (dword_106AFED4 & 1) == 0 )
  {
    dword_106AFED4 |= 1u;
    dword_106AFEB8 = (int)"CEnvFade";
    dword_106AFEC0 = 0;
    dword_106AFEC4 = 0;
    dword_106AFEC8 = 0;
    dword_106AFECC = 0;
    dword_106AFED0 = 0;
    dword_106AFEBC = 8;
    atexit(sub_10470F20);
  }
  dword_1062067C = (int)&dword_1060F348;
  if ( (dword_106AFED4 & 2) == 0 )
  {
    dword_106AFED4 |= 2u;
    dword_106207B8 = (int)off_10614A2C;
    dword_106207BC = 0;
    dword_106207C0 = 0;
    dword_106207C4 = 0;
    dword_106207C8 = 0;
    dword_106207CC = 0;
    dword_106207D0 = 0;
  }
  dword_10620674 = 4;
  dword_10620670 = (int)&unk_10620704;
  return &dword_10620670;
}
