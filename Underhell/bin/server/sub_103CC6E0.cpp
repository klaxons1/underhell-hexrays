int *sub_103CC6E0()
{
  if ( (dword_106EC794 & 1) == 0 )
  {
    dword_106EC794 |= 1u;
    dword_106EC778 = (int)"CVortigauntChargeToken";
    dword_106EC780 = 0;
    dword_106EC784 = 0;
    dword_106EC788 = 0;
    dword_106EC78C = 0;
    dword_106EC790 = 0;
    dword_106EC77C = 22;
    atexit(sub_10478EE0);
  }
  dword_1067CE70 = (int)&dword_1060F348;
  if ( (dword_106EC794 & 2) == 0 )
  {
    dword_106EC794 |= 2u;
    dword_1067DB1C = (int)sub_100390B0((char **)&dword_106EC778, "SeekThink");
    word_1067DB28 = 1;
    word_1067DB2A = 32;
    dword_1067DB20 = 0;
    dword_1067DB24 = 0;
    dword_1067DB2C = 0;
    dword_1067DB30 = 0;
    dword_1067DB34 = (int)sub_103CC150;
    dword_1067DB38 = 0;
    dword_1067DB3C = 0;
    dword_1067DB40 = 0;
    dword_1067DB44 = 0;
    dword_1067DB48 = 0;
    dword_1067DB4C = 0;
    dword_1067DB50 = (int)sub_100390B0((char **)&dword_106EC778, "SeekTouch");
    dword_1067DB54 = 0;
    dword_1067DB58 = 0;
    dword_1067DB5C = 2097153;
    dword_1067DB60 = 0;
    dword_1067DB64 = 0;
    dword_1067DB68 = (int)sub_103CA830;
    dword_1067DB6C = 0;
    dword_1067DB70 = 0;
    dword_1067DB74 = 0;
    dword_1067DB78 = 0;
    dword_1067DB7C = 0;
  }
  dword_1067CE68 = 5;
  dword_1067CE64 = (int)&unk_1067DA7C;
  return &dword_1067CE64;
}
