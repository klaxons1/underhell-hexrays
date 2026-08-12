int *sub_102D6000()
{
  if ( (dword_106DE874 & 1) == 0 )
  {
    dword_106DE874 |= 1u;
    dword_106DE858 = (int)"CGrenadeFrag";
    dword_106DE860 = 0;
    dword_106DE864 = 0;
    dword_106DE868 = 0;
    dword_106DE86C = 0;
    dword_106DE870 = 0;
    dword_106DE85C = 12;
    atexit(sub_10476D80);
  }
  dword_106658B0 = (int)&dword_106121C8;
  if ( (dword_106DE874 & 2) == 0 )
  {
    dword_106DE874 |= 2u;
    dword_10665A48 = (int)sub_100390B0((char **)&dword_106DE858, "DelayThink");
    word_10665A54 = 1;
    dword_10665A4C = 0;
    dword_10665A50 = 0;
    word_10665A56 = 32;
    dword_10665A58 = 0;
    dword_10665A5C = 0;
    dword_10665A60 = (int)sub_102D5AE0;
    dword_10665A64 = 0;
    dword_10665A68 = 0;
    dword_10665A6C = 0;
    dword_10665A70 = 0;
    dword_10665A74 = 0;
    dword_10665A78 = 1;
    dword_10665A7C = (int)"InputSetTimer";
    dword_10665A80 = 0;
    dword_10665A84 = 0;
    dword_10665A88 = 524289;
    dword_10665A8C = (int)"SetTimer";
    dword_10665A90 = 0;
    dword_10665A94 = (int)sub_102D5E90;
    dword_10665A98 = 0;
    dword_10665A9C = 0;
    dword_10665AA0 = 0;
    dword_10665AA4 = 0;
    dword_10665AA8 = 0;
  }
  dword_106658A8 = 6;
  dword_106658A4 = (int)&unk_10665974;
  return &dword_106658A4;
}
