int *sub_102EC520()
{
  if ( (dword_106E1F30 & 1) == 0 )
  {
    dword_106E1F30 |= 1u;
    dword_106E1F14 = (int)"CInfoTeleporterCountdown";
    dword_106E1F1C = 0;
    dword_106E1F20 = 0;
    dword_106E1F24 = 0;
    dword_106E1F28 = 0;
    dword_106E1F2C = 0;
    dword_106E1F18 = 24;
    atexit(sub_104775E0);
  }
  dword_10668310 = (int)&dword_1060F348;
  dword_10668308 = 8;
  dword_10668304 = (int)&unk_106683C4;
  return &dword_10668304;
}
