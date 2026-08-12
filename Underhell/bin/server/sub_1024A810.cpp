int *sub_1024A810()
{
  if ( (dword_106C65D4 & 1) == 0 )
  {
    dword_106C65D4 |= 1u;
    dword_106C65B8 = (int)"CTeamVehicleSpawnPoint";
    dword_106C65C0 = 0;
    dword_106C65C4 = 0;
    dword_106C65C8 = 0;
    dword_106C65CC = 0;
    dword_106C65D0 = 0;
    dword_106C65BC = 22;
    atexit(sub_10474400);
  }
  dword_1064F5F8 = (int)&dword_1064F5D4;
  if ( (dword_106C65D4 & 2) == 0 )
  {
    dword_106C65D4 |= 2u;
    dword_1064F81C = (int)off_10614A2C;
    dword_1064F820 = 0;
    dword_1064F824 = 0;
    dword_1064F828 = 0;
    dword_1064F82C = 0;
    dword_1064F830 = 0;
    dword_1064F834 = 0;
  }
  dword_1064F5F0 = 1;
  dword_1064F5EC = (int)&unk_1064F804;
  return &dword_1064F5EC;
}
