int *sub_10274530()
{
  if ( (dword_106CFE38 & 1) == 0 )
  {
    dword_106CFE38 |= 1u;
    dword_106CFE1C = (int)"CWC_UpdateIgnoreList";
    dword_106CFE24 = 0;
    dword_106CFE28 = 0;
    dword_106CFE2C = 0;
    dword_106CFE30 = 0;
    dword_106CFE34 = 0;
    dword_106CFE20 = 20;
    atexit(sub_10474CE0);
  }
  dword_10656330 = (int)&dword_1060F348;
  dword_10656328 = 16;
  dword_10656324 = (int)&unk_106563F4;
  return &dword_10656324;
}
