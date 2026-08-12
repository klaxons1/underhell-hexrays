int *sub_10212A90()
{
  if ( (dword_106C2880 & 1) == 0 )
  {
    dword_106C2880 |= 1u;
    dword_106C2864 = (int)"CDynamicProp";
    dword_106C286C = 0;
    dword_106C2870 = 0;
    dword_106C2874 = 0;
    dword_106C2878 = 0;
    dword_106C287C = 0;
    dword_106C2868 = 12;
    atexit(sub_10473AB0);
  }
  dword_10642FD0 = (int)&dword_10642FAC;
  if ( (dword_106C2880 & 2) == 0 )
  {
    dword_106C2880 |= 2u;
    dword_10644A24 = 0;
    dword_10644A28 = 0;
    dword_10644A2C = 0;
    dword_10644A30 = 0;
    dword_10644A34 = 0;
    dword_10644A38 = 0;
    word_10644A4C = 1;
    word_10644A4E = 22;
    dword_10644A20 = (int)off_10614A2C;
    dword_10644A54 = (int)off_10614A2C;
    dword_10644A88 = (int)off_10614A2C;
    dword_10644A3C = 11;
    dword_10644A40 = (int)"m_pOutputAnimOver";
    dword_10644A44 = 1472;
    dword_10644A48 = 0;
    dword_10644A50 = (int)"OnAnimationDone";
    dword_10644A58 = 0;
    dword_10644A5C = 0;
    dword_10644A60 = 0;
    dword_10644A64 = 0;
    dword_10644A68 = 0;
    dword_10644A6C = 0;
    dword_10644A70 = 11;
    dword_10644A74 = (int)"m_OnPlayerUse";
    dword_10644A78 = 1496;
    dword_10644A7C = 0;
    dword_10644A80 = 1441793;
    dword_10644A84 = (int)"OnPlayerUse";
    dword_10644A8C = 0;
    dword_10644A90 = 0;
    dword_10644A94 = 0;
    dword_10644A98 = 0;
    dword_10644A9C = 0;
    dword_10644AA0 = 0;
    dword_10644AA4 = 0;
    dword_10644AA8 = (int)sub_100390B0((char **)&dword_106C2864, "AnimThink");
    flt_10644B08 = 0.0;
    dword_10644AAC = 0;
    dword_10644AB0 = 0;
    dword_10644AB4 = 2097153;
    dword_10644AB8 = 0;
    dword_10644ABC = 0;
    dword_10644AC0 = (int)sub_102113C0;
    dword_10644AC4 = 0;
    dword_10644AC8 = 0;
    dword_10644ACC = 0;
    dword_10644AD0 = 0;
    dword_10644AD4 = 0;
    dword_10644AD8 = 10;
    dword_10644ADC = (int)"m_BoneFollowerManager";
    dword_10644AE0 = 1552;
    dword_10644AE4 = 0;
    dword_10644AE8 = 131073;
    dword_10644AEC = 0;
    dword_10644AF0 = 0;
    dword_10644AF4 = 0;
    dword_10644AF8 = (int)&dword_10637A9C;
    dword_10644AFC = 24;
    dword_10644B00 = 0;
    dword_10644B04 = 0;
  }
  dword_10642FC8 = 24;
  dword_10642FC4 = (int)&unk_1064462C;
  return &dword_10642FC4;
}
