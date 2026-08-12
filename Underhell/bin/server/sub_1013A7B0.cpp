int *sub_1013A7B0()
{
  if ( (dword_106AFFF4 & 1) == 0 )
  {
    dword_106AFFF4 |= 1u;
    dword_106AFFD8 = (int)"CEnvMicrophone";
    dword_106AFFE0 = 0;
    dword_106AFFE4 = 0;
    dword_106AFFE8 = 0;
    dword_106AFFEC = 0;
    dword_106AFFF0 = 0;
    dword_106AFFDC = 14;
    atexit(sub_10470F90);
  }
  dword_10621468 = (int)&dword_1060F348;
  if ( (dword_106AFFF4 & 2) == 0 )
  {
    dword_106AFFF4 |= 2u;
    dword_10621854 = 0;
    dword_10621858 = 0;
    dword_1062185C = 0;
    dword_10621860 = 0;
    dword_10621864 = 0;
    dword_10621868 = 0;
    word_1062187C = 1;
    word_1062187E = 22;
    dword_10621850 = (int)off_10614A2C;
    dword_1062186C = 11;
    dword_10621870 = (int)"m_OnRoutedSound";
    dword_10621874 = 872;
    dword_10621878 = 0;
    dword_10621880 = (int)"OnRoutedSound";
    dword_10621884 = (int)off_10614A2C;
    dword_10621888 = 0;
    dword_1062188C = 0;
    dword_10621890 = 0;
    dword_10621894 = 0;
    dword_10621898 = 0;
    dword_1062189C = 0;
    dword_106218A0 = 11;
    dword_106218A4 = (int)"m_OnHeardSound";
    dword_106218A8 = 896;
    dword_106218AC = 0;
    dword_106218B0 = 1441793;
    dword_106218B4 = (int)"OnHeardSound";
    dword_106218B8 = (int)off_10614A2C;
    dword_106218BC = 0;
    dword_106218C0 = 0;
    dword_106218C4 = 0;
    dword_106218C8 = 0;
    dword_106218CC = 0;
    dword_106218D0 = 0;
  }
  dword_10621460 = 18;
  dword_1062145C = (int)&unk_1062152C;
  return &dword_1062145C;
}
