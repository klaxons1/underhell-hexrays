int *sub_101411A0()
{
  if ( (dword_106B09C8 & 1) == 0 )
  {
    dword_106B09C8 |= 1u;
    dword_106B09AC = (int)"CBaseFire";
    dword_106B09B4 = 0;
    dword_106B09B8 = 0;
    dword_106B09BC = 0;
    dword_106B09C0 = 0;
    dword_106B09C4 = 0;
    dword_106B09B0 = 9;
    atexit(sub_10471190);
  }
  dword_10623620 = (int)&dword_1060F348;
  dword_10623618 = 4;
  dword_10623614 = (int)&unk_106236EC;
  return &dword_10623614;
}
