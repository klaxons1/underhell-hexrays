int *sub_1023EDA0()
{
  if ( (dword_106C515C & 1) == 0 )
  {
    dword_106C515C |= 1u;
    dword_106C5140 = (int)"CCopyRecipientFilter";
    dword_106C5148 = 0;
    dword_106C514C = 0;
    dword_106C5150 = 0;
    dword_106C5154 = 0;
    dword_106C5158 = 0;
    dword_106C5144 = 20;
    atexit(sub_104740A0);
  }
  dword_1064CA44 = 0;
  if ( (dword_106C515C & 2) == 0 )
  {
    dword_106C515C |= 2u;
    if ( (dword_106C511C & 1) == 0 )
    {
      dword_106C511C |= 1u;
      dword_106C5118 = (int)&CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int,int>>,5>::`vftable';
    }
    dword_1064CD10 = (int)&dword_106C5118;
    dword_1064CD14 = 0;
    dword_1064CD18 = 0;
    dword_1064CD1C = 0;
    dword_1064CD20 = 0;
    dword_1064CD24 = 0;
    dword_1064CD28 = 0;
  }
  dword_1064CA3C = 2;
  dword_1064CA38 = (int)&unk_1064CCC4;
  return &dword_1064CA38;
}
