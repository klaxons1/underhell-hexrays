int *sub_102198D0()
{
  if ( (dword_106C2C54 & 1) == 0 )
  {
    dword_106C2C54 |= 1u;
    dword_106C2C38 = (int)"CRagdollBoogie";
    dword_106C2C40 = 0;
    dword_106C2C44 = 0;
    dword_106C2C48 = 0;
    dword_106C2C4C = 0;
    dword_106C2C50 = 0;
    dword_106C2C3C = 14;
    atexit(sub_10473C40);
  }
  dword_10645E48 = (int)&dword_1060F348;
  if ( (dword_106C2C54 & 2) == 0 )
  {
    dword_106C2C54 |= 2u;
    dword_10645F84 = (int)sub_100390B0((char **)&dword_106C2C38, "BoogieThink");
    word_10645F90 = 1;
    word_10645F92 = 32;
    dword_10645F88 = 0;
    dword_10645F8C = 0;
    dword_10645F94 = 0;
    dword_10645F98 = 0;
    dword_10645F9C = (int)sub_102195C0;
    dword_10645FA0 = 0;
    dword_10645FA4 = 0;
    dword_10645FA8 = 0;
    dword_10645FAC = 0;
    dword_10645FB0 = 0;
    dword_10645FB4 = 0;
    dword_10645FB8 = (int)sub_100390B0((char **)&dword_106C2C38, "ZapThink");
    dword_10645FBC = 0;
    dword_10645FC0 = 0;
    dword_10645FC4 = 2097153;
    dword_10645FC8 = 0;
    dword_10645FCC = 0;
    dword_10645FD0 = (int)sub_10219210;
    dword_10645FD4 = 0;
    dword_10645FD8 = 0;
    dword_10645FDC = 0;
    dword_10645FE0 = 0;
    dword_10645FE4 = 0;
  }
  dword_10645E40 = 5;
  dword_10645E3C = (int)&unk_10645EE4;
  return &dword_10645E3C;
}
