int *sub_1011A200()
{
  if ( (dword_1069C460 & 1) == 0 )
  {
    dword_1069C460 |= 1u;
    dword_1069C444 = (int)"CCommentaryAuto";
    dword_1069C44C = 0;
    dword_1069C450 = 0;
    dword_1069C454 = 0;
    dword_1069C458 = 0;
    dword_1069C45C = 0;
    dword_1069C448 = 15;
    atexit(sub_10470760);
  }
  dword_10615864 = (int)&dword_1060F348;
  if ( (dword_1069C460 & 2) == 0 )
  {
    dword_1069C460 |= 2u;
    dword_10615DDC = 0;
    dword_10615DE0 = 0;
    dword_10615DE4 = 0;
    dword_10615DE8 = 0;
    dword_10615DEC = 0;
    dword_10615DF0 = 0;
    word_10615E04 = 1;
    word_10615E06 = 22;
    dword_10615DD8 = (int)off_10614A2C;
    dword_10615DF4 = 11;
    dword_10615DF8 = (int)"m_OnCommentaryMidGame";
    dword_10615DFC = 824;
    dword_10615E00 = 0;
    dword_10615E08 = (int)"OnCommentaryMidGame";
    dword_10615E0C = (int)off_10614A2C;
    dword_10615E10 = 0;
    dword_10615E14 = 0;
    dword_10615E18 = 0;
    dword_10615E1C = 0;
    dword_10615E20 = 0;
    dword_10615E24 = 0;
    dword_10615E28 = 11;
    dword_10615E2C = (int)"m_OnCommentaryMultiplayerSpawn";
    dword_10615E30 = 848;
    dword_10615E34 = 0;
    dword_10615E38 = 1441793;
    dword_10615E3C = (int)"OnCommentaryMultiplayerSpawn";
    dword_10615E40 = (int)off_10614A2C;
    dword_10615E44 = 0;
    dword_10615E48 = 0;
    dword_10615E4C = 0;
    dword_10615E50 = 0;
    dword_10615E54 = 0;
    dword_10615E58 = 0;
  }
  dword_1061585C = 4;
  dword_10615858 = (int)&unk_10615D8C;
  return &dword_10615858;
}
