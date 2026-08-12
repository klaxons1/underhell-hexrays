int *sub_10183410()
{
  if ( (dword_106B67DC & 1) == 0 )
  {
    dword_106B67DC |= 1u;
    dword_106B67C0 = (int)"CGamePlayerZone";
    dword_106B67C8 = 0;
    dword_106B67CC = 0;
    dword_106B67D0 = 0;
    dword_106B67D4 = 0;
    dword_106B67D8 = 0;
    dword_106B67C4 = 15;
    atexit(sub_10472080);
  }
  dword_1062FFD4 = (int)&dword_1062FF50;
  if ( (dword_106B67DC & 2) == 0 )
  {
    dword_106B67DC |= 2u;
    dword_106306D4 = 0;
    dword_106306D8 = 0;
    dword_106306DC = 0;
    dword_106306E0 = 0;
    dword_106306E4 = 0;
    dword_106306E8 = 0;
    word_106306FC = 1;
    word_106306FE = 22;
    dword_10630708 = 0;
    dword_1063070C = 0;
    dword_10630710 = 0;
    dword_10630714 = 0;
    dword_10630718 = 0;
    dword_1063071C = 0;
    word_10630730 = 1;
    word_10630732 = 22;
    dword_106306D0 = (int)off_10614A2C;
    dword_106306EC = 11;
    dword_106306F0 = (int)"m_OnPlayerOutZone";
    dword_106306F4 = 828;
    dword_106306F8 = 0;
    dword_10630700 = (int)"OnPlayerOutZone";
    dword_10630704 = (int)off_10614A2C;
    dword_10630720 = 11;
    dword_10630724 = (int)"m_PlayersInCount";
    dword_10630728 = 852;
    dword_1063072C = 0;
    dword_10630734 = (int)"PlayersInCount";
    dword_10630738 = (int)off_10614A2C;
    dword_1063073C = 0;
    dword_10630740 = 0;
    dword_10630744 = 0;
    dword_10630748 = 0;
    dword_1063074C = 0;
    dword_10630750 = 0;
    dword_10630754 = 11;
    dword_10630758 = (int)"m_PlayersOutCount";
    dword_1063075C = 876;
    dword_10630760 = 0;
    dword_10630764 = 1441793;
    dword_10630768 = (int)"PlayersOutCount";
    dword_1063076C = (int)off_10614A2C;
    dword_10630770 = 0;
    dword_10630774 = 0;
    dword_10630778 = 0;
    dword_1063077C = 0;
    dword_10630780 = 0;
    dword_10630784 = 0;
  }
  dword_1062FFCC = 5;
  dword_1062FFC8 = (int)&unk_10630684;
  return &dword_1062FFC8;
}
