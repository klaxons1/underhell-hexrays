int *sub_102AA220()
{
  if ( (dword_106DB8C8 & 1) == 0 )
  {
    dword_106DB8C8 |= 1u;
    dword_106DB8AC = (int)"CAI_PoliceGoal";
    dword_106DB8B4 = 0;
    dword_106DB8B8 = 0;
    dword_106DB8BC = 0;
    dword_106DB8C0 = 0;
    dword_106DB8C4 = 0;
    dword_106DB8B0 = 14;
    atexit(sub_104766F0);
  }
  dword_1065F864 = (int)&dword_1060F348;
  if ( (dword_106DB8C8 & 2) == 0 )
  {
    dword_106DB8C8 |= 2u;
    dword_1065FA1C = 0;
    dword_1065FA20 = 0;
    dword_1065FA24 = 0;
    dword_1065FA28 = 0;
    dword_1065FA2C = 0;
    dword_1065FA30 = 0;
    word_1065FA44 = 1;
    word_1065FA46 = 22;
    dword_1065FA50 = 0;
    dword_1065FA54 = 0;
    dword_1065FA58 = 0;
    dword_1065FA5C = 0;
    dword_1065FA60 = 0;
    dword_1065FA64 = 0;
    word_1065FA78 = 1;
    word_1065FA7A = 22;
    dword_1065FA84 = 0;
    dword_1065FA88 = 0;
    dword_1065FA8C = 0;
    dword_1065FA90 = 0;
    dword_1065FA94 = 0;
    dword_1065FA98 = 0;
    word_1065FAAC = 1;
    word_1065FAAE = 22;
    dword_1065FA18 = (int)off_10614A2C;
    dword_1065FA34 = 11;
    dword_1065FA38 = (int)"m_OnFirstWarning";
    dword_1065FA3C = 840;
    dword_1065FA40 = 0;
    dword_1065FA48 = (int)"OnFirstWarning";
    dword_1065FA4C = (int)off_10614A2C;
    dword_1065FA68 = 11;
    dword_1065FA6C = (int)"m_OnSecondWarning";
    dword_1065FA70 = 864;
    dword_1065FA74 = 0;
    dword_1065FA7C = (int)"OnSecondWarning";
    dword_1065FA80 = (int)off_10614A2C;
    dword_1065FA9C = 11;
    dword_1065FAA0 = (int)"m_OnLastWarning";
    dword_1065FAA4 = 888;
    dword_1065FAA8 = 0;
    dword_1065FAB0 = (int)"OnLastWarning";
    dword_1065FAB4 = (int)off_10614A2C;
    dword_1065FAB8 = 0;
    dword_1065FABC = 0;
    dword_1065FAC0 = 0;
    dword_1065FAC4 = 0;
    dword_1065FAC8 = 0;
    dword_1065FACC = 0;
    dword_1065FAD0 = 11;
    dword_1065FAD4 = (int)"m_OnSupressingTarget";
    dword_1065FAD8 = 912;
    dword_1065FADC = 0;
    dword_1065FAE0 = 1441793;
    dword_1065FAE4 = (int)"OnSupressingTarget";
    dword_1065FAE8 = (int)off_10614A2C;
    dword_1065FAEC = 0;
    dword_1065FAF0 = 0;
    dword_1065FAF4 = 0;
    dword_1065FAF8 = 0;
    dword_1065FAFC = 0;
    dword_1065FB00 = 0;
  }
  dword_1065F85C = 10;
  dword_1065F858 = (int)&unk_1065F8FC;
  return &dword_1065F858;
}
