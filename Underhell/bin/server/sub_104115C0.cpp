int *sub_104115C0()
{
  if ( (dword_106F0FF8 & 1) == 0 )
  {
    dword_106F0FF8 |= 1u;
    dword_106F0FDC = (int)"CGrenadePathfollower";
    dword_106F0FE4 = 0;
    dword_106F0FE8 = 0;
    dword_106F0FEC = 0;
    dword_106F0FF0 = 0;
    dword_106F0FF4 = 0;
    dword_106F0FE0 = 20;
    atexit(sub_10479CA0);
  }
  dword_10688724 = (int)&dword_106121C8;
  if ( (dword_106F0FF8 & 2) == 0 )
  {
    dword_106F0FF8 |= 2u;
    dword_106888CC = (int)sub_100390B0((char **)&dword_106F0FDC, "AimThink");
    word_106888D8 = 1;
    word_106888DA = 32;
    dword_106888D0 = 0;
    dword_106888D4 = 0;
    dword_106888DC = 0;
    dword_106888E0 = 0;
    dword_106888E4 = (int)sub_10411390;
    dword_106888E8 = 0;
    dword_106888EC = 0;
    dword_106888F0 = 0;
    dword_106888F4 = 0;
    dword_106888F8 = 0;
    dword_106888FC = 0;
    dword_10688900 = (int)sub_100390B0((char **)&dword_106F0FDC, "GrenadeTouch");
    dword_10688904 = 0;
    dword_10688908 = 0;
    dword_1068890C = 2097153;
    dword_10688910 = 0;
    dword_10688914 = 0;
    dword_10688918 = (int)sub_10410B50;
    dword_1068891C = 0;
    dword_10688920 = 0;
    dword_10688924 = 0;
    dword_10688928 = 0;
    dword_1068892C = 0;
  }
  dword_1068871C = 7;
  dword_10688718 = (int)&unk_106887C4;
  return &dword_10688718;
}
