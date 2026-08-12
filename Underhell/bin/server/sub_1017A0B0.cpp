int *sub_1017A0B0()
{
  if ( (dword_106B634C & 1) == 0 )
  {
    dword_106B634C |= 1u;
    dword_106B6330 = (int)"CLogicMeasureMovement";
    dword_106B6338 = 0;
    dword_106B633C = 0;
    dword_106B6340 = 0;
    dword_106B6344 = 0;
    dword_106B6348 = 0;
    dword_106B6334 = 21;
    atexit(sub_10471EF0);
  }
  dword_1062C53C = (int)&dword_1060F348;
  if ( (dword_106B634C & 2) == 0 )
  {
    dword_106B634C |= 2u;
    dword_1062C920 = (int)sub_100390B0((char **)&dword_106B6330, "MeasureThink");
    dword_1062C924 = 0;
    dword_1062C928 = 0;
    dword_1062C92C = 2097153;
    dword_1062C930 = 0;
    dword_1062C934 = 0;
    dword_1062C938 = (int)sub_10179A10;
    dword_1062C93C = 0;
    dword_1062C940 = 0;
    dword_1062C944 = 0;
    dword_1062C948 = 0;
    dword_1062C94C = 0;
  }
  dword_1062C534 = 17;
  dword_1062C530 = (int)&unk_1062C5DC;
  return &dword_1062C530;
}
