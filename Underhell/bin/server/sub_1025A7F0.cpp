int *sub_1025A7F0()
{
  char *v0; // eax

  if ( (dword_106C7BA8 & 1) == 0 )
  {
    dword_106C7BA8 |= 1u;
    dword_106C7B8C = (int)"CTriggerWind";
    dword_106C7B94 = 0;
    dword_106C7B98 = 0;
    dword_106C7B9C = 0;
    dword_106C7BA0 = 0;
    dword_106C7BA4 = 0;
    dword_106C7B90 = 12;
    atexit(sub_10474840);
  }
  dword_106516A8 = (int)&dword_106516E4;
  if ( (dword_106C7BA8 & 2) == 0 )
  {
    dword_106C7BA8 |= 2u;
    v0 = sub_101D3250(8);
    flt_10652BCC = 0.0;
    dword_10652B80 = (int)v0;
    dword_10652B84 = 0;
    dword_10652B88 = 0;
    dword_10652B8C = 0;
    dword_10652B90 = 0;
    dword_10652B94 = 0;
    dword_10652B98 = 0;
    dword_10652B9C = 10;
    dword_10652BA0 = (int)"m_WindCallback";
    dword_10652BA4 = 860;
    dword_10652BA8 = 0;
    dword_10652BAC = 131073;
    dword_10652BB0 = 0;
    dword_10652BB4 = 0;
    dword_10652BB8 = 0;
    dword_10652BBC = (int)&dword_10651684;
    dword_10652BC0 = 12;
    dword_10652BC4 = 0;
    dword_10652BC8 = 0;
    dword_10652BD0 = 0;
    dword_10652BD4 = (int)sub_100390B0((char **)&dword_106C7B8C, "WindThink");
    dword_10652BD8 = 0;
    dword_10652BDC = 0;
    dword_10652BE0 = 2097153;
    dword_10652BE4 = 0;
    dword_10652BE8 = 0;
    dword_10652BEC = (int)sub_102547C0;
    dword_10652BF0 = 0;
    dword_10652BF4 = 0;
    dword_10652BF8 = 0;
    dword_10652BFC = 0;
    dword_10652C00 = 0;
    dword_10652C04 = 5;
    dword_10652C08 = (int)"InputSetSpeed";
    dword_10652C0C = 0;
    dword_10652C10 = 0;
    dword_10652C14 = 524289;
    dword_10652C18 = (int)"SetSpeed";
    dword_10652C1C = 0;
    dword_10652C20 = (int)sub_102549C0;
    dword_10652C24 = 0;
    dword_10652C28 = 0;
    dword_10652C2C = 0;
    dword_10652C30 = 0;
    dword_10652C34 = 0;
  }
  dword_106516A0 = 15;
  dword_1065169C = (int)&unk_1065292C;
  return &dword_1065169C;
}
