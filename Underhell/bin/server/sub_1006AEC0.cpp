int *sub_1006AEC0()
{
  if ( (dword_10692EE4 & 1) == 0 )
  {
    dword_10692EE4 |= 1u;
    dword_10692EC8 = (int)"CAI_RadialLinkController";
    dword_10692ED0 = 0;
    dword_10692ED4 = 0;
    dword_10692ED8 = 0;
    dword_10692EDC = 0;
    dword_10692EE0 = 0;
    dword_10692ECC = 24;
    atexit(sub_1046F120);
  }
  dword_1060683C = (int)&dword_1060F348;
  if ( (dword_10692EE4 & 2) == 0 )
  {
    dword_10692EE4 |= 2u;
    dword_10606E14 = (int)sub_100390B0((char **)&dword_10692EC8, "PollMotionThink");
    dword_10606E18 = 0;
    dword_10606E1C = 0;
    dword_10606E20 = 2097153;
    dword_10606E24 = 0;
    dword_10606E28 = 0;
    dword_10606E2C = (int)sub_1006A320;
    dword_10606E30 = 0;
    dword_10606E34 = 0;
    dword_10606E38 = 0;
    dword_10606E3C = 0;
    dword_10606E40 = 0;
  }
  dword_10606834 = 4;
  dword_10606830 = (int)&unk_10606D74;
  return &dword_10606830;
}
