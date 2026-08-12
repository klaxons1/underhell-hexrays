int *sub_10185210()
{
  if ( (dword_106B6D5C & 1) == 0 )
  {
    dword_106B6D5C |= 1u;
    dword_106B6D40 = (int)"CTriggerBrush";
    dword_106B6D48 = 0;
    dword_106B6D4C = 0;
    dword_106B6D50 = 0;
    dword_106B6D54 = 0;
    dword_106B6D58 = 0;
    dword_106B6D44 = 13;
    atexit(sub_10472120);
  }
  dword_10630E6C = (int)&dword_1060F348;
  if ( (dword_106B6D5C & 2) == 0 )
  {
    dword_106B6D5C |= 2u;
    dword_10630FB8 = 0;
    dword_10630FBC = 0;
    dword_10630FC0 = 0;
    dword_10630FC4 = 0;
    dword_10630FC8 = 0;
    dword_10630FCC = 0;
    word_10630FE0 = 1;
    word_10630FE2 = 22;
    dword_10630FD0 = 11;
    dword_10630FEC = 0;
    dword_10630FF0 = 0;
    dword_10630FF4 = 0;
    dword_10630FF8 = 0;
    dword_10630FFC = 0;
    dword_10631000 = 0;
    dword_10631004 = 11;
    dword_10630FB4 = (int)off_10614A2C;
    dword_10630FE8 = (int)off_10614A2C;
    word_10631014 = 1;
    word_10631016 = 22;
    dword_1063101C = (int)off_10614A2C;
    dword_10630FD4 = (int)"m_OnEndTouch";
    dword_10630FD8 = 824;
    dword_10630FDC = 0;
    dword_10630FE4 = (int)"OnEndTouch";
    dword_10631008 = (int)"m_OnUse";
    dword_1063100C = 848;
    dword_10631010 = 0;
    dword_10631018 = (int)"OnUse";
    dword_10631020 = 0;
    dword_10631024 = 0;
    dword_10631028 = 0;
    dword_1063102C = 0;
    dword_10631030 = 0;
    dword_10631034 = 0;
    dword_10631038 = 0;
    dword_1063103C = (int)"InputDisable";
    dword_10631040 = 0;
    dword_10631044 = 0;
    word_10631048 = 1;
    word_1063104A = 8;
    dword_1063104C = (int)"Disable";
    dword_10631050 = 0;
    dword_10631054 = (int)sub_10184B70;
    dword_10631058 = 0;
    dword_1063105C = 0;
    dword_10631060 = 0;
    dword_10631064 = 0;
    dword_10631068 = 0;
    dword_1063106C = 0;
    dword_10631070 = (int)"InputEnable";
    dword_10631074 = 0;
    dword_10631078 = 0;
    dword_1063107C = 524289;
    dword_10631080 = (int)"Enable";
    dword_10631084 = 0;
    dword_10631088 = (int)sub_10184B60;
    dword_1063108C = 0;
    dword_10631090 = 0;
    dword_10631094 = 0;
    dword_10631098 = 0;
    dword_1063109C = 0;
  }
  dword_10630E64 = 7;
  dword_10630E60 = (int)&unk_10630F34;
  return &dword_10630E60;
}
