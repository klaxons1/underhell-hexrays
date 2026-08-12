int *sub_102F1270()
{
  if ( (dword_106E2478 & 1) == 0 )
  {
    dword_106E2478 |= 1u;
    dword_106E245C = (int)"CWallHealth";
    dword_106E2464 = 0;
    dword_106E2468 = 0;
    dword_106E246C = 0;
    dword_106E2470 = 0;
    dword_106E2474 = 0;
    dword_106E2460 = 11;
    atexit(sub_10477660);
  }
  dword_10668F70 = (int)&dword_1064E490;
  if ( (dword_106E2478 & 2) == 0 )
  {
    dword_106E2478 |= 2u;
    dword_10669284 = (int)sub_100390B0((char **)&dword_106E245C, "Off");
    word_10669290 = 1;
    word_10669292 = 32;
    dword_10669288 = 0;
    dword_1066928C = 0;
    dword_10669294 = 0;
    dword_10669298 = 0;
    dword_1066929C = (int)sub_102F0110;
    dword_106692A0 = 0;
    dword_106692A4 = 0;
    dword_106692A8 = 0;
    dword_106692AC = 0;
    dword_106692B0 = 0;
    dword_106692B4 = 0;
    dword_106692B8 = (int)sub_100390B0((char **)&dword_106E245C, "Recharge");
    word_106692C4 = 1;
    word_106692C6 = 32;
    word_106692F8 = 1;
    dword_106692BC = 0;
    dword_106692C0 = 0;
    dword_106692C8 = 0;
    dword_106692CC = 0;
    dword_106692D0 = (int)sub_102F00C0;
    dword_106692D4 = 0;
    dword_106692D8 = 0;
    dword_106692DC = 0;
    dword_106692E0 = 0;
    dword_106692E4 = 0;
    dword_106692E8 = 11;
    dword_106692EC = (int)"m_OnPlayerUse";
    dword_106692F0 = 968;
    dword_106692F4 = 0;
    word_106692FA = 22;
    dword_106692FC = (int)"OnPlayerUse";
    dword_10669300 = (int)off_10614A2C;
    dword_10669304 = 0;
    dword_10669308 = 0;
    dword_1066930C = 0;
    dword_10669310 = 0;
    dword_10669314 = 0;
    dword_10669318 = 0;
    dword_1066931C = 11;
    dword_10669320 = (int)"m_OutRemainingHealth";
    dword_10669324 = 944;
    dword_10669328 = 0;
    dword_1066932C = 1441793;
    dword_10669330 = (int)"OutRemainingHealth";
    dword_10669334 = (int)off_10614A2C;
    dword_10669338 = 0;
    dword_1066933C = 0;
    dword_10669340 = 0;
    dword_10669344 = 0;
    dword_10669348 = 0;
    dword_1066934C = 0;
  }
  dword_10668F68 = 11;
  dword_10668F64 = (int)&unk_10669114;
  return &dword_10668F64;
}
