int *sub_10202BA0()
{
  if ( (dword_106C19F8 & 1) == 0 )
  {
    dword_106C19F8 |= 1u;
    dword_106C19DC = (int)"CPointTemplate";
    dword_106C19E4 = 0;
    dword_106C19E8 = 0;
    dword_106C19EC = 0;
    dword_106C19F0 = 0;
    dword_106C19F4 = 0;
    dword_106C19E0 = 14;
    atexit(sub_10473830);
  }
  dword_106410A8 = (int)&dword_1060F348;
  if ( (dword_106C19F8 & 2) == 0 )
  {
    dword_106C19F8 |= 2u;
    if ( (dword_106C19B0 & 1) == 0 )
    {
      dword_106C19B0 |= 1u;
      dword_106C19AC = (int)&CUtlVectorDataOps<CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>,12>::`vftable';
    }
    dword_1064161C = 0;
    dword_10641620 = 0;
    dword_10641624 = 0;
    dword_10641628 = 0;
    dword_1064162C = 0;
    dword_10641614 = (int)&dword_106C19AC;
    dword_10641618 = 0;
    dword_10641630 = 11;
    dword_10641634 = (int)"m_hTemplates";
    dword_10641638 = 884;
    dword_1064163C = 0;
    word_10641640 = 1;
    word_10641642 = 2;
    dword_10641644 = 0;
    if ( (dword_106C19B8 & 1) == 0 )
    {
      dword_106C19B8 |= 1u;
      dword_106C19B4 = (int)&CUtlVectorDataOps<CUtlVector<template_t,CUtlMemory<template_t,int>>,10>::`vftable';
    }
    dword_10641650 = 0;
    dword_10641654 = 0;
    dword_10641658 = 0;
    dword_1064165C = 0;
    dword_10641660 = 0;
    word_10641674 = 1;
    word_10641676 = 8;
    dword_10641648 = (int)&dword_106C19B4;
    dword_1064164C = 0;
    dword_10641664 = 0;
    dword_10641668 = (int)"InputForceSpawn";
    dword_1064166C = 0;
    dword_10641670 = 0;
    dword_10641678 = (int)"ForceSpawn";
    dword_1064167C = 0;
    dword_10641680 = (int)sub_102028A0;
    dword_10641684 = 0;
    dword_10641688 = 0;
    dword_1064168C = 0;
    dword_10641690 = 0;
    dword_10641694 = 0;
    dword_10641698 = 11;
    dword_1064169C = (int)"m_pOutputOnSpawned";
    dword_106416A0 = 904;
    dword_106416A4 = 0;
    dword_106416A8 = 1441793;
    dword_106416AC = (int)"OnEntitySpawned";
    dword_106416B0 = (int)off_10614A2C;
    dword_106416B4 = 0;
    dword_106416B8 = 0;
    dword_106416BC = 0;
    dword_106416C0 = 0;
    dword_106416C4 = 0;
    dword_106416C8 = 0;
  }
  dword_106410A0 = 20;
  dword_1064109C = (int)&unk_106412BC;
  return &dword_1064109C;
}
