int *sub_100B1EB0()
{
  if ( (dword_1069527C & 1) == 0 )
  {
    dword_1069527C |= 1u;
    dword_10695260 = (int)"CAI_Squad";
    dword_10695268 = 0;
    dword_1069526C = 0;
    dword_10695270 = 0;
    dword_10695274 = 0;
    dword_10695278 = 0;
    dword_10695264 = 9;
    atexit(sub_1046F630);
  }
  dword_1060B8D4 = 0;
  if ( (dword_1069527C & 2) == 0 )
  {
    dword_1069527C |= 2u;
    if ( (dword_1069523C & 1) == 0 )
    {
      dword_1069523C |= 1u;
      dword_10695238 = (int)&CUtlVectorDataOps<CUtlVector<AISquadEnemyInfo_t,CUtlMemory<AISquadEnemyInfo_t,int>>,10>::`vftable';
    }
    flt_1060BBA0 = 0.0;
    dword_1060BB54 = (int)&dword_10695238;
    dword_1060BB58 = 0;
    dword_1060BB5C = 0;
    dword_1060BB60 = 0;
    dword_1060BB64 = 0;
    dword_1060BB68 = 0;
    dword_1060BB6C = 0;
    dword_1060BB70 = 16;
    dword_1060BB74 = (int)"m_flEnemyInfoCleanupTime";
    dword_1060BB78 = 132;
    dword_1060BB7C = 0;
    dword_1060BB80 = 131073;
    dword_1060BB84 = 0;
    dword_1060BB88 = 0;
    dword_1060BB8C = 0;
    dword_1060BB90 = 0;
    dword_1060BB94 = 4;
    dword_1060BB98 = 0;
    dword_1060BB9C = 0;
  }
  dword_1060B8CC = 6;
  dword_1060B8C8 = (int)&unk_1060BA6C;
  return &dword_1060B8C8;
}
