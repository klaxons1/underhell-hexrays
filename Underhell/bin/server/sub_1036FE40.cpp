int *sub_1036FE40()
{
  if ( (dword_106E8478 & 1) == 0 )
  {
    dword_106E8478 |= 1u;
    dword_106E845C = (int)"CBaseHeadcrab";
    dword_106E8464 = 0;
    dword_106E8468 = 0;
    dword_106E846C = 0;
    dword_106E8470 = 0;
    dword_106E8474 = 0;
    dword_106E8460 = 13;
    atexit(sub_104782D0);
  }
  dword_106739D4 = (int)&dword_105FE114;
  if ( (dword_106E8478 & 2) == 0 )
  {
    dword_106E8478 |= 2u;
    dword_10674028 = (int)sub_100390B0((char **)&dword_106E845C, "EliminateRollAndPitch");
    word_10674034 = 1;
    word_10674036 = 32;
    dword_1067402C = 0;
    dword_10674030 = 0;
    dword_10674038 = 0;
    dword_1067403C = 0;
    dword_10674040 = (int)sub_1036A4C0;
    dword_10674044 = 0;
    dword_10674048 = 0;
    dword_1067404C = 0;
    dword_10674050 = 0;
    dword_10674054 = 0;
    dword_10674058 = 0;
    dword_1067405C = (int)sub_100390B0((char **)&dword_106E845C, "ThrowThink");
    word_1067406A = 32;
    dword_10674060 = 0;
    dword_10674064 = 0;
    word_10674068 = 1;
    dword_1067406C = 0;
    dword_10674070 = 0;
    dword_10674074 = (int)sub_1036AE00;
    dword_10674078 = 0;
    dword_1067407C = 0;
    dword_10674080 = 0;
    dword_10674084 = 0;
    dword_10674088 = 0;
    dword_1067408C = 0;
    dword_10674090 = (int)sub_100390B0((char **)&dword_106E845C, "LeapTouch");
    dword_10674094 = 0;
    dword_10674098 = 0;
    dword_1067409C = 2097153;
    dword_106740A0 = 0;
    dword_106740A4 = 0;
    dword_106740A8 = (int)sub_1036AF30;
    dword_106740AC = 0;
    dword_106740B0 = 0;
    dword_106740B4 = 0;
    dword_106740B8 = 0;
    dword_106740BC = 0;
  }
  dword_106739CC = 23;
  dword_106739C8 = (int)&unk_10673C14;
  return &dword_106739C8;
}
