int *sub_10132E40()
{
  if ( (dword_106AF610 & 1) == 0 )
  {
    dword_106AF610 |= 1u;
    dword_106AF5F4 = (int)"CEnvProjectedTexture";
    dword_106AF5FC = 0;
    dword_106AF600 = 0;
    dword_106AF604 = 0;
    dword_106AF608 = 0;
    dword_106AF60C = 0;
    dword_106AF5F8 = 20;
    atexit(sub_10470DF0);
  }
  dword_1061EBC8 = (int)&dword_1060F348;
  if ( (dword_106AF610 & 2) == 0 )
  {
    dword_106AF610 |= 2u;
    dword_1061F158 = (int)sub_100390B0((char **)&dword_106AF5F4, "InitialThink");
    dword_1061F15C = 0;
    dword_1061F160 = 0;
    dword_1061F164 = 2097153;
    dword_1061F168 = 0;
    dword_1061F16C = 0;
    dword_1061F170 = (int)sub_101326D0;
    dword_1061F174 = 0;
    dword_1061F178 = 0;
    dword_1061F17C = 0;
    dword_1061F180 = 0;
    dword_1061F184 = 0;
  }
  dword_1061EBC0 = 25;
  dword_1061EBBC = (int)&unk_1061EC74;
  return &dword_1061EBBC;
}
