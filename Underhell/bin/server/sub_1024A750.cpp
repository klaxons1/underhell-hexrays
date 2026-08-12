int *sub_1024A750()
{
  if ( (dword_106C65B4 & 1) == 0 )
  {
    dword_106C65B4 |= 1u;
    dword_106C6598 = (int)"CTeamSpawnPoint";
    dword_106C65A0 = 0;
    dword_106C65A4 = 0;
    dword_106C65A8 = 0;
    dword_106C65AC = 0;
    dword_106C65B0 = 0;
    dword_106C659C = 15;
    atexit(sub_104743F0);
  }
  dword_1064F5E0 = (int)&dword_1060F348;
  if ( (dword_106C65B4 & 2) == 0 )
  {
    dword_106C65B4 |= 2u;
    dword_1064F7B0 = (int)off_10614A2C;
    dword_1064F7B4 = 0;
    dword_1064F7B8 = 0;
    dword_1064F7BC = 0;
    dword_1064F7C0 = 0;
    dword_1064F7C4 = 0;
    dword_1064F7C8 = 0;
  }
  dword_1064F5D8 = 4;
  dword_1064F5D4 = (int)&unk_1064F6FC;
  return &dword_1064F5D4;
}
