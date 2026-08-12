int *sub_10180FF0()
{
  if ( (dword_106B6608 & 1) == 0 )
  {
    dword_106B6608 |= 1u;
    dword_106B65EC = (int)"CLogicRelay";
    dword_106B65F4 = 0;
    dword_106B65F8 = 0;
    dword_106B65FC = 0;
    dword_106B6600 = 0;
    dword_106B6604 = 0;
    dword_106B65F0 = 11;
    atexit(sub_10472020);
  }
  dword_1062FCA0 = (int)&dword_1060F348;
  if ( (dword_106B6608 & 2) == 0 )
  {
    dword_106B6608 |= 2u;
    dword_1062FEEC = (int)off_10614A2C;
    dword_1062FEF0 = 0;
    dword_1062FEF4 = 0;
    dword_1062FEF8 = 0;
    dword_1062FEFC = 0;
    dword_1062FF00 = 0;
    dword_1062FF04 = 0;
    dword_1062FF08 = 11;
    dword_1062FF0C = (int)"m_OnSpawn";
    dword_1062FF10 = 824;
    dword_1062FF14 = 0;
    dword_1062FF18 = 1441793;
    dword_1062FF1C = (int)"OnSpawn";
    dword_1062FF20 = (int)off_10614A2C;
    dword_1062FF24 = 0;
    dword_1062FF28 = 0;
    dword_1062FF2C = 0;
    dword_1062FF30 = 0;
    dword_1062FF34 = 0;
    dword_1062FF38 = 0;
  }
  dword_1062FC98 = 10;
  dword_1062FC94 = (int)&unk_1062FD34;
  return &dword_1062FC94;
}
