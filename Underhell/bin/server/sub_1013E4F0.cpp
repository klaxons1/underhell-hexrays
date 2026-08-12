int *sub_1013E4F0()
{
  if ( (dword_106B0304 & 1) == 0 )
  {
    dword_106B0304 |= 1u;
    dword_106B02E8 = (int)"CBaseFilter";
    dword_106B02F0 = 0;
    dword_106B02F4 = 0;
    dword_106B02F8 = 0;
    dword_106B02FC = 0;
    dword_106B0300 = 0;
    dword_106B02EC = 11;
    atexit(sub_10471010);
  }
  dword_10622308 = (int)&dword_1060F348;
  if ( (dword_106B0304 & 2) == 0 )
  {
    dword_106B0304 |= 2u;
    dword_106226FC = (int)off_10614A2C;
    dword_10622700 = 0;
    dword_10622704 = 0;
    dword_10622708 = 0;
    dword_1062270C = 0;
    dword_10622710 = 0;
    dword_10622714 = 0;
    dword_10622718 = 11;
    dword_1062271C = (int)"m_OnFail";
    dword_10622720 = 828;
    dword_10622724 = 0;
    dword_10622728 = 1441793;
    dword_1062272C = (int)"OnFail";
    dword_10622730 = (int)off_10614A2C;
    dword_10622734 = 0;
    dword_10622738 = 0;
    dword_1062273C = 0;
    dword_10622740 = 0;
    dword_10622744 = 0;
    dword_10622748 = 0;
  }
  dword_10622300 = 4;
  dword_106222FC = (int)&unk_1062267C;
  return &dword_106222FC;
}
