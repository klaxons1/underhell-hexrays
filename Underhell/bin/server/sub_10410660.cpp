int *sub_10410660()
{
  if ( (dword_106F0F40 & 1) == 0 )
  {
    dword_106F0F40 |= 1u;
    dword_106F0F24 = (int)"CGrenadeHomer";
    dword_106F0F2C = 0;
    dword_106F0F30 = 0;
    dword_106F0F34 = 0;
    dword_106F0F38 = 0;
    dword_106F0F3C = 0;
    dword_106F0F28 = 13;
    atexit(sub_10479C70);
  }
  dword_106882A8 = (int)&dword_106121C8;
  if ( (dword_106F0F40 & 2) == 0 )
  {
    dword_106F0F40 |= 2u;
    dword_106886B4 = (int)sub_100390B0((char **)&dword_106F0F24, "AimThink");
    word_106886C0 = 1;
    word_106886C2 = 32;
    dword_106886B8 = 0;
    dword_106886BC = 0;
    dword_106886C4 = 0;
    dword_106886C8 = 0;
    dword_106886CC = (int)sub_104100C0;
    dword_106886D0 = 0;
    dword_106886D4 = 0;
    dword_106886D8 = 0;
    dword_106886DC = 0;
    dword_106886E0 = 0;
    dword_106886E4 = 0;
    dword_106886E8 = (int)sub_100390B0((char **)&dword_106F0F24, "GrenadeHomerTouch");
    dword_106886EC = 0;
    dword_106886F0 = 0;
    dword_106886F4 = 2097153;
    dword_106886F8 = 0;
    dword_106886FC = 0;
    dword_10688700 = (int)sub_1040F320;
    dword_10688704 = 0;
    dword_10688708 = 0;
    dword_1068870C = 0;
    dword_10688710 = 0;
    dword_10688714 = 0;
  }
  dword_106882A0 = 19;
  dword_1068829C = (int)asc_1068833C;
  return &dword_1068829C;
}
