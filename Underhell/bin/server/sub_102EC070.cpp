int *sub_102EC070()
{
  if ( (dword_106E1C8C & 1) == 0 )
  {
    dword_106E1C8C |= 1u;
    dword_106E1C70 = (int)"CInfoDarknessLightSource";
    dword_106E1C78 = 0;
    dword_106E1C7C = 0;
    dword_106E1C80 = 0;
    dword_106E1C84 = 0;
    dword_106E1C88 = 0;
    dword_106E1C74 = 24;
    atexit(sub_10477580);
  }
  dword_106680F8 = (int)&dword_1060F348;
  if ( (dword_106E1C8C & 2) == 0 )
  {
    dword_106E1C8C |= 2u;
    dword_106682D4 = (int)sub_100390B0((char **)&dword_106E1C70, "DebugThink");
    dword_106682D8 = 0;
    dword_106682DC = 0;
    dword_106682E0 = 2097153;
    dword_106682E4 = 0;
    dword_106682E8 = 0;
    dword_106682EC = (int)sub_102EB100;
    dword_106682F0 = 0;
    dword_106682F4 = 0;
    dword_106682F8 = 0;
    dword_106682FC = 0;
    dword_10668300 = 0;
  }
  dword_106680F0 = 6;
  dword_106680EC = (int)&unk_106681CC;
  return &dword_106680EC;
}
