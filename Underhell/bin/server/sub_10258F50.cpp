int *sub_10258F50()
{
  if ( (dword_106C7894 & 1) == 0 )
  {
    dword_106C7894 |= 1u;
    dword_106C7878 = (int)"CTriggerLook";
    dword_106C7880 = 0;
    dword_106C7884 = 0;
    dword_106C7888 = 0;
    dword_106C788C = 0;
    dword_106C7890 = 0;
    dword_106C787C = 12;
    atexit(sub_10474780);
  }
  dword_10651588 = (int)&dword_10651564;
  if ( (dword_106C7894 & 2) == 0 )
  {
    dword_106C7894 |= 2u;
    dword_106522B8 = 0;
    dword_106522BC = 0;
    dword_106522C0 = 0;
    dword_106522C4 = 0;
    dword_106522C8 = 0;
    dword_106522CC = 0;
    word_106522E0 = 1;
    dword_106522B4 = (int)off_10614A2C;
    dword_106522E8 = (int)off_10614A2C;
    dword_106522D0 = 11;
    dword_106522D4 = (int)"m_OnStopLooking";
    dword_106522D8 = 1172;
    dword_106522DC = 0;
    word_106522E2 = 22;
    dword_106522E4 = (int)"OnStopLooking";
    dword_106522EC = 0;
    dword_106522F0 = 0;
    dword_106522F4 = 0;
    dword_106522F8 = 0;
    dword_106522FC = 0;
    dword_10652300 = 0;
    dword_10652304 = 0;
    dword_10652308 = (int)sub_100390B0((char **)&dword_106C7878, "TimeoutThink");
    word_10652314 = 1;
    dword_10652324 = 0;
    dword_10652328 = 0;
    dword_1065232C = 0;
    dword_10652330 = 0;
    dword_10652334 = 0;
    word_10652316 = 32;
    word_1065234A = 14;
    dword_1065230C = 0;
    dword_10652310 = 0;
    dword_10652318 = 0;
    dword_1065231C = 0;
    dword_10652320 = (int)sub_10257100;
    dword_10652338 = 1;
    dword_1065233C = (int)"m_flFieldOfView";
    dword_10652340 = 1120;
    dword_10652344 = 0;
    word_10652348 = 1;
    dword_1065234C = (int)"FieldOfView";
    dword_10652350 = 0;
    dword_10652354 = 0;
    dword_10652358 = 0;
    dword_1065235C = 4;
    dword_10652360 = 0;
    dword_10652364 = 0;
    dword_10652368 = 0;
    dword_1065236C = 1;
    dword_10652370 = (int)"m_flLookTime";
    dword_10652374 = 1124;
    dword_10652378 = 0;
    dword_1065237C = 917505;
    dword_10652380 = (int)"LookTime";
    dword_10652384 = 0;
    dword_10652388 = 0;
    dword_1065238C = 0;
    dword_10652390 = 4;
    dword_10652394 = 0;
    dword_10652398 = 0;
    dword_1065239C = 0;
  }
  dword_10651580 = 11;
  dword_1065157C = (int)&unk_10652164;
  return &dword_1065157C;
}
