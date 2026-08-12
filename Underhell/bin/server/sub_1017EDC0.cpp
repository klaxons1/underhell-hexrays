int *sub_1017EDC0()
{
  if ( (dword_106B6448 & 1) == 0 )
  {
    dword_106B6448 |= 1u;
    dword_106B642C = (int)"CTimerEntity";
    dword_106B6434 = 0;
    dword_106B6438 = 0;
    dword_106B643C = 0;
    dword_106B6440 = 0;
    dword_106B6444 = 0;
    dword_106B6430 = 12;
    atexit(sub_10471F40);
  }
  dword_1062CD58 = (int)&dword_1060F348;
  if ( (dword_106B6448 & 2) == 0 )
  {
    dword_106B6448 |= 2u;
    dword_1062D870 = 0;
    dword_1062D874 = 0;
    dword_1062D878 = 0;
    dword_1062D87C = 0;
    dword_1062D880 = 0;
    dword_1062D884 = 0;
    word_1062D898 = 1;
    word_1062D89A = 22;
    dword_1062D86C = (int)off_10614A2C;
    dword_1062D888 = 11;
    dword_1062D88C = (int)"m_OnTimerHigh";
    dword_1062D890 = 824;
    dword_1062D894 = 0;
    dword_1062D89C = (int)"OnTimerHigh";
    dword_1062D8A0 = (int)off_10614A2C;
    dword_1062D8A4 = 0;
    dword_1062D8A8 = 0;
    dword_1062D8AC = 0;
    dword_1062D8B0 = 0;
    dword_1062D8B4 = 0;
    dword_1062D8B8 = 0;
    dword_1062D8BC = 11;
    dword_1062D8C0 = (int)"m_OnTimerLow";
    dword_1062D8C4 = 848;
    dword_1062D8C8 = 0;
    dword_1062D8CC = 1441793;
    dword_1062D8D0 = (int)"OnTimerLow";
    dword_1062D8D4 = (int)off_10614A2C;
    dword_1062D8D8 = 0;
    dword_1062D8DC = 0;
    dword_1062D8E0 = 0;
    dword_1062D8E4 = 0;
    dword_1062D8E8 = 0;
    dword_1062D8EC = 0;
  }
  dword_1062CD50 = 17;
  dword_1062CD4C = (int)&unk_1062D57C;
  return &dword_1062CD4C;
}
