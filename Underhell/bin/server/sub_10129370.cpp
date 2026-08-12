int *sub_10129370()
{
  if ( (dword_1069DD08 & 1) == 0 )
  {
    dword_1069DD08 |= 1u;
    dword_1069DCEC = (int)"CGibShooter";
    dword_1069DCF4 = 0;
    dword_1069DCF8 = 0;
    dword_1069DCFC = 0;
    dword_1069DD00 = 0;
    dword_1069DD04 = 0;
    dword_1069DCF0 = 11;
    atexit(sub_104709E0);
  }
  dword_10619890 = (int)&dword_1060F348;
  if ( (dword_1069DD08 & 2) == 0 )
  {
    dword_1069DD08 |= 2u;
    dword_1061B770 = (int)sub_100390B0((char **)&dword_1069DCEC, "ShootThink");
    dword_1061B774 = 0;
    dword_1061B778 = 0;
    dword_1061B77C = 2097153;
    dword_1061B780 = 0;
    dword_1061B784 = 0;
    dword_1061B788 = (int)sub_10128F60;
    dword_1061B78C = 0;
    dword_1061B790 = 0;
    dword_1061B794 = 0;
    dword_1061B798 = 0;
    dword_1061B79C = 0;
  }
  dword_10619888 = 17;
  dword_10619884 = (int)&unk_1061B42C;
  return &dword_10619884;
}
