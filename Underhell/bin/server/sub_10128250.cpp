int *sub_10128250()
{
  if ( (dword_1069DC08 & 1) == 0 )
  {
    dword_1069DC08 |= 1u;
    dword_1069DBEC = (int)"CEnvWind";
    dword_1069DBF4 = 0;
    dword_1069DBF8 = 0;
    dword_1069DBFC = 0;
    dword_1069DC00 = 0;
    dword_1069DC04 = 0;
    dword_1069DBF0 = 8;
    atexit(sub_10470A60);
  }
  dword_10619954 = (int)&dword_1060F348;
  if ( (dword_1069DC08 & 2) == 0 )
  {
    dword_1069DC08 |= 2u;
    dword_1061AA80 = 0;
    dword_1061AA84 = 0;
    dword_1061AA88 = 0;
    dword_1061AA8C = 0;
    dword_1061AA90 = 0;
    dword_1061AA94 = 0;
    word_1061AAA8 = 1;
    dword_1061AA7C = (int)off_10614A2C;
    dword_1061AAB0 = (int)off_10614A2C;
    dword_1061AA98 = 11;
    dword_1061AA9C = (int)"m_EnvWindShared.m_OnGustEnd";
    dword_1061AAA0 = 888;
    dword_1061AAA4 = 0;
    word_1061AAAA = 22;
    dword_1061AAAC = (int)"OnGustEnd";
    dword_1061AAB4 = 0;
    dword_1061AAB8 = 0;
    dword_1061AABC = 0;
    dword_1061AAC0 = 0;
    dword_1061AAC4 = 0;
    dword_1061AAC8 = 0;
    dword_1061AACC = 0;
    dword_1061AAD0 = (int)sub_100390B0((char **)&dword_1069DBEC, "WindThink");
    dword_1061AAD4 = 0;
    dword_1061AAD8 = 0;
    dword_1061AADC = 2097153;
    dword_1061AAE0 = 0;
    dword_1061AAE4 = 0;
    dword_1061AAE8 = (int)sub_10124520;
    dword_1061AAEC = 0;
    dword_1061AAF0 = 0;
    dword_1061AAF4 = 0;
    dword_1061AAF8 = 0;
    dword_1061AAFC = 0;
  }
  dword_1061994C = 13;
  dword_10619948 = (int)&unk_1061A85C;
  return &dword_10619948;
}
