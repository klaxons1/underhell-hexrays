int *sub_101434F0()
{
  if ( (dword_106B0D14 & 1) == 0 )
  {
    dword_106B0D14 |= 1u;
    dword_106B0CF8 = (int)"CFishPool";
    dword_106B0D00 = 0;
    dword_106B0D04 = 0;
    dword_106B0D08 = 0;
    dword_106B0D0C = 0;
    dword_106B0D10 = 0;
    dword_106B0CFC = 9;
    atexit(sub_10471200);
  }
  dword_10623954 = (int)&dword_1060F348;
  if ( (dword_106B0D14 & 2) == 0 )
  {
    dword_106B0D14 |= 2u;
    if ( (dword_106B0CD4 & 1) == 0 )
    {
      dword_106B0CD4 |= 1u;
      dword_106B0CD0 = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>,13>::`vftable';
    }
    dword_10623EC0 = (int)&dword_106B0CD0;
    dword_10623EC4 = 0;
    dword_10623EC8 = 0;
    dword_10623ECC = 0;
    dword_10623ED0 = 0;
    dword_10623ED4 = 0;
    dword_10623ED8 = 0;
    dword_10623EDC = 0;
    dword_10623EE0 = (int)sub_100390B0((char **)&dword_106B0CF8, "Update");
    dword_10623EE4 = 0;
    dword_10623EE8 = 0;
    dword_10623EEC = 2097153;
    dword_10623EF0 = 0;
    dword_10623EF4 = 0;
    dword_10623EF8 = (int)sub_10142DE0;
    dword_10623EFC = 0;
    dword_10623F00 = 0;
    dword_10623F04 = 0;
    dword_10623F08 = 0;
    dword_10623F0C = 0;
  }
  dword_1062394C = 7;
  dword_10623948 = (int)&unk_10623DA4;
  return &dword_10623948;
}
