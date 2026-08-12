int *sub_101FDBE0()
{
  if ( (dword_106C1384 & 1) == 0 )
  {
    dword_106C1384 |= 1u;
    dword_106C1368 = (int)"CPointCamera";
    dword_106C1370 = 0;
    dword_106C1374 = 0;
    dword_106C1378 = 0;
    dword_106C137C = 0;
    dword_106C1380 = 0;
    dword_106C136C = 12;
    atexit(sub_10473770);
  }
  dword_1063FF44 = (int)&dword_1060F348;
  if ( (dword_106C1384 & 2) == 0 )
  {
    dword_106C1384 |= 2u;
    dword_106402D0 = (int)sub_100390B0((char **)&dword_106C1368, "ChangeFOVThink");
    dword_106402D4 = 0;
    dword_106402D8 = 0;
    dword_106402DC = 2097153;
    dword_106402E0 = 0;
    dword_106402E4 = 0;
    dword_106402E8 = (int)sub_101FD930;
    dword_106402EC = 0;
    dword_106402F0 = 0;
    dword_106402F4 = 0;
    dword_106402F8 = 0;
    dword_106402FC = 0;
    dword_10640300 = 2;
    dword_10640304 = (int)"InputChangeFOV";
    dword_10640308 = 0;
    dword_1064030C = 0;
    dword_10640310 = 524289;
    dword_10640314 = (int)"ChangeFOV";
    dword_10640318 = 0;
    dword_1064031C = (int)sub_101FDA20;
    dword_10640320 = 0;
    dword_10640324 = 0;
    dword_10640328 = 0;
    dword_1064032C = 0;
    dword_10640330 = 0;
    dword_10640334 = 0;
    dword_10640338 = (int)"InputSetOnAndTurnOthersOff";
    dword_1064033C = 0;
    dword_10640340 = 0;
    dword_10640344 = 524289;
    dword_10640348 = (int)"SetOnAndTurnOthersOff";
    dword_1064034C = 0;
    dword_10640350 = (int)sub_101FDB00;
    dword_10640354 = 0;
    dword_10640358 = 0;
    dword_1064035C = 0;
    dword_10640360 = 0;
    dword_10640364 = 0;
    dword_10640368 = 0;
    dword_1064036C = (int)"InputSetOn";
    dword_10640370 = 0;
    dword_10640374 = 0;
    dword_10640378 = 524289;
    dword_1064037C = (int)"SetOn";
    dword_10640380 = 0;
    dword_10640384 = (int)sub_101FD470;
    dword_10640388 = 0;
    dword_1064038C = 0;
    dword_10640390 = 0;
    dword_10640394 = 0;
    dword_10640398 = 0;
    dword_1064039C = 0;
    dword_106403A0 = (int)"InputSetOff";
    dword_106403A4 = 0;
    dword_106403A8 = 0;
    dword_106403AC = 524289;
    dword_106403B0 = (int)"SetOff";
    dword_106403B4 = 0;
    dword_106403B8 = (int)sub_101FDA00;
    dword_106403BC = 0;
    dword_106403C0 = 0;
    dword_106403C4 = 0;
    dword_106403C8 = 0;
    dword_106403CC = 0;
  }
  dword_1063FF3C = 19;
  dword_1063FF38 = (int)&unk_1063FFF4;
  return &dword_1063FF38;
}
