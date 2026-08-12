int *sub_1017F6B0()
{
  if ( (dword_106B64E8 & 1) == 0 )
  {
    dword_106B64E8 |= 1u;
    dword_106B64CC = (int)"CMultiSource";
    dword_106B64D4 = 0;
    dword_106B64D8 = 0;
    dword_106B64DC = 0;
    dword_106B64E0 = 0;
    dword_106B64E4 = 0;
    dword_106B64D0 = 12;
    atexit(sub_10471F90);
  }
  dword_1062CDD0 = (int)&dword_1060F348;
  if ( (dword_106B64E8 & 2) == 0 )
  {
    dword_106B64E8 |= 2u;
    dword_1062E1B8 = (int)sub_100390B0((char **)&dword_106B64CC, "Register");
    word_1062E1C4 = 1;
    dword_1062E1D4 = 0;
    dword_1062E1D8 = 0;
    dword_1062E1DC = 0;
    dword_1062E1E0 = 0;
    dword_1062E1E4 = 0;
    dword_1062E200 = (int)off_10614A2C;
    dword_1062E1BC = 0;
    dword_1062E1C0 = 0;
    word_1062E1C6 = 32;
    dword_1062E1C8 = 0;
    dword_1062E1CC = 0;
    dword_1062E1D0 = (int)sub_1017DDF0;
    dword_1062E1E8 = 11;
    dword_1062E1EC = (int)"m_OnTrigger";
    dword_1062E1F0 = 1056;
    dword_1062E1F4 = 0;
    dword_1062E1F8 = 1441793;
    dword_1062E1FC = (int)"OnTrigger";
    dword_1062E204 = 0;
    dword_1062E208 = 0;
    dword_1062E20C = 0;
    dword_1062E210 = 0;
    dword_1062E214 = 0;
    dword_1062E218 = 0;
  }
  dword_1062CDC8 = 6;
  dword_1062CDC4 = (int)&unk_1062E0E4;
  return &dword_1062CDC4;
}
