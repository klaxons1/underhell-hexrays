int *sub_10131150()
{
  if ( (dword_106AEFB4 & 1) == 0 )
  {
    dword_106AEFB4 |= 1u;
    dword_106AEF98 = (int)"CEnvEntityMaker";
    dword_106AEFA0 = 0;
    dword_106AEFA4 = 0;
    dword_106AEFA8 = 0;
    dword_106AEFAC = 0;
    dword_106AEFB0 = 0;
    dword_106AEF9C = 15;
    atexit(sub_10470D40);
  }
  dword_1061E4EC = (int)&dword_1060F348;
  if ( (dword_106AEFB4 & 2) == 0 )
  {
    dword_106AEFB4 |= 2u;
    dword_1061E760 = 0;
    dword_1061E764 = 0;
    dword_1061E768 = 0;
    dword_1061E76C = 0;
    dword_1061E770 = 0;
    dword_1061E774 = 0;
    word_1061E788 = 1;
    word_1061E78A = 22;
    dword_1061E794 = 0;
    dword_1061E798 = 0;
    dword_1061E79C = 0;
    dword_1061E7A0 = 0;
    dword_1061E7A4 = 0;
    dword_1061E7A8 = 0;
    dword_1061E75C = (int)off_10614A2C;
    dword_1061E790 = (int)off_10614A2C;
    word_1061E7BE = 8;
    dword_1061E7E0 = 2;
    word_1061E7BC = 1;
    word_1061E7F0 = 1;
    dword_1061E778 = 11;
    dword_1061E77C = (int)"m_pOutputOnFailedSpawn";
    dword_1061E780 = 896;
    dword_1061E784 = 0;
    dword_1061E78C = (int)"OnEntityFailedSpawn";
    dword_1061E7AC = 0;
    dword_1061E7B0 = (int)"InputForceSpawn";
    dword_1061E7B4 = 0;
    dword_1061E7B8 = 0;
    dword_1061E7C0 = (int)"ForceSpawn";
    dword_1061E7C4 = 0;
    dword_1061E7C8 = (int)sub_10130F10;
    dword_1061E7CC = 0;
    dword_1061E7D0 = 0;
    dword_1061E7D4 = 0;
    dword_1061E7D8 = 0;
    dword_1061E7DC = 0;
    dword_1061E7E4 = (int)"InputForceSpawnAtEntityOrigin";
    dword_1061E7E8 = 0;
    dword_1061E7EC = 0;
    word_1061E7F2 = 8;
    dword_1061E7F4 = (int)"ForceSpawnAtEntityOrigin";
    dword_1061E7F8 = 0;
    dword_1061E7FC = (int)sub_10130FC0;
    dword_1061E800 = 0;
    dword_1061E804 = 0;
    dword_1061E808 = 0;
    dword_1061E80C = 0;
    dword_1061E810 = 0;
    dword_1061E814 = 0;
    dword_1061E818 = (int)sub_100390B0((char **)&dword_106AEF98, "CheckSpawnThink");
    dword_1061E81C = 0;
    dword_1061E820 = 0;
    dword_1061E824 = 2097153;
    dword_1061E828 = 0;
    dword_1061E82C = 0;
    dword_1061E830 = (int)sub_10130910;
    dword_1061E834 = 0;
    dword_1061E838 = 0;
    dword_1061E83C = 0;
    dword_1061E840 = 0;
    dword_1061E844 = 0;
  }
  dword_1061E4E4 = 13;
  dword_1061E4E0 = (int)asc_1061E5A4;
  return &dword_1061E4E0;
}
