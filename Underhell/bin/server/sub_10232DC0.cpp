int *sub_10232DC0()
{
  if ( (dword_106C467C & 1) == 0 )
  {
    dword_106C467C |= 1u;
    dword_106C4660 = (int)"CAI_ScriptedSchedule";
    dword_106C4668 = 0;
    dword_106C466C = 0;
    dword_106C4670 = 0;
    dword_106C4674 = 0;
    dword_106C4678 = 0;
    dword_106C4664 = 20;
    atexit(sub_10473E00);
  }
  dword_10648E74 = (int)&dword_1060F348;
  if ( (dword_106C467C & 2) == 0 )
  {
    dword_106C467C |= 2u;
    dword_10649210 = (int)sub_100390B0((char **)&dword_106C4660, "ScriptThink");
    word_1064921C = 1;
    dword_1064922C = 0;
    dword_10649230 = 0;
    dword_10649234 = 0;
    dword_10649238 = 0;
    dword_1064923C = 0;
    word_10649252 = 8;
    dword_10649214 = 0;
    dword_10649218 = 0;
    word_1064921E = 32;
    dword_10649220 = 0;
    dword_10649224 = 0;
    dword_10649228 = (int)sub_10231780;
    dword_10649240 = 0;
    dword_10649244 = (int)"InputStartSchedule";
    dword_10649248 = 0;
    dword_1064924C = 0;
    word_10649250 = 1;
    dword_10649254 = (int)"StartSchedule";
    dword_10649258 = 0;
    dword_1064925C = (int)sub_102318C0;
    dword_10649260 = 0;
    dword_10649264 = 0;
    dword_10649268 = 0;
    dword_1064926C = 0;
    dword_10649270 = 0;
    dword_10649274 = 0;
    dword_10649278 = (int)"InputStopSchedule";
    dword_1064927C = 0;
    dword_10649280 = 0;
    dword_10649284 = 524289;
    dword_10649288 = (int)"StopSchedule";
    dword_1064928C = 0;
    dword_10649290 = (int)sub_10231480;
    dword_10649294 = 0;
    dword_10649298 = 0;
    dword_1064929C = 0;
    dword_106492A0 = 0;
    dword_106492A4 = 0;
  }
  dword_10648E6C = 13;
  dword_10648E68 = (int)asc_10649004;
  return &dword_10648E68;
}
