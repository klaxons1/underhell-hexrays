int *sub_100B1DE0()
{
  if ( (dword_1069525C & 1) == 0 )
  {
    dword_1069525C |= 1u;
    dword_10695240 = (int)"AISquadEnemyInfo_t";
    dword_10695248 = 0;
    dword_1069524C = 0;
    dword_10695250 = 0;
    dword_10695254 = 0;
    dword_10695258 = 0;
    dword_10695244 = 18;
    atexit(sub_1046F620);
  }
  dword_1060B8BC = 0;
  if ( (dword_1069525C & 2) == 0 )
  {
    dword_1069525C |= 2u;
    if ( (dword_10695234 & 1) == 0 )
    {
      dword_10695234 |= 1u;
      dword_10695230 = (int)&CVarBitVecSaveRestoreOps<CBitVec<32>>::`vftable';
    }
    dword_1060BA18 = (int)&dword_10695230;
    dword_1060BA1C = 0;
    dword_1060BA20 = 0;
    dword_1060BA24 = 0;
    dword_1060BA28 = 0;
    dword_1060BA2C = 0;
    dword_1060BA30 = 0;
  }
  dword_1060B8B4 = 2;
  dword_1060B8B0 = (int)asc_1060B9CC;
  return &dword_1060B8B0;
}
