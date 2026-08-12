int sub_1019EDF0()
{
  if ( (dword_104494E0 & 1) == 0 )
  {
    dword_104494E0 |= 1u;
    sub_1009AED0((int)&unk_10449378, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104493B4, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_10116040((int)&unk_104493F0, (int)"m_hPlayer", 1964, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_10116070((int)&unk_1044942C, (int)"m_bEnterAnimOn", 1972, 1);
    sub_10116070((int)&unk_10449468, (int)"m_bExitAnimOn", 1973, 1);
    sub_1009AC90((int)&unk_104494A4, (int)"m_vecEyeExitEndpoint", 1976, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10449504, (int)&unk_104493B4, 5, (int)"DT_PropCannon");
  return 1;
}
