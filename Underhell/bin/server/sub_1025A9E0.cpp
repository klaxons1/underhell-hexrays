int *sub_1025A9E0()
{
  if ( (dword_106C7BC8 & 1) == 0 )
  {
    dword_106C7BC8 |= 1u;
    dword_106C7BAC = (int)"CTriggerImpact";
    dword_106C7BB4 = 0;
    dword_106C7BB8 = 0;
    dword_106C7BBC = 0;
    dword_106C7BC0 = 0;
    dword_106C7BC4 = 0;
    dword_106C7BB0 = 14;
    atexit(sub_10474850);
  }
  dword_106516C0 = (int)&dword_10651564;
  if ( (dword_106C7BC8 & 2) == 0 )
  {
    dword_106C7BC8 |= 2u;
    dword_10652D88 = (int)off_10614A2C;
    dword_10652D8C = 0;
    dword_10652D90 = 0;
    dword_10652D94 = 0;
    dword_10652D98 = 0;
    dword_10652D9C = 0;
    dword_10652DA0 = 0;
    dword_10652DA4 = 0;
    dword_10652DA8 = (int)sub_100390B0((char **)&dword_106C7BAC, "Disable");
    dword_10652DAC = 0;
    dword_10652DB0 = 0;
    dword_10652DB4 = 2097153;
    dword_10652DB8 = 0;
    dword_10652DBC = 0;
    dword_10652DC0 = (int)sub_10255D50;
    dword_10652DC4 = 0;
    dword_10652DC8 = 0;
    dword_10652DCC = 0;
    dword_10652DD0 = 0;
    dword_10652DD4 = 0;
  }
  dword_106516B8 = 7;
  dword_106516B4 = (int)&unk_10652C6C;
  return &dword_106516B4;
}
