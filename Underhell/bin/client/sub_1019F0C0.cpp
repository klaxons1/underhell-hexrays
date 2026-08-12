int sub_1019F0C0()
{
  if ( (dword_104496C4 & 1) == 0 )
  {
    dword_104496C4 |= 1u;
    sub_1009AED0((int)&unk_10449520, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044955C, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_10116040((int)&unk_10449598, (int)"m_hPlayer", 1964, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_10116070((int)&unk_104495D4, (int)"m_bMagnetOn", 1988, 1);
    sub_10116070((int)&unk_10449610, (int)"m_bEnterAnimOn", 1972, 1);
    sub_10116070((int)&unk_1044964C, (int)"m_bExitAnimOn", 1973, 1);
    sub_1009AC90((int)&unk_10449688, (int)"m_vecEyeExitEndpoint", 1976, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_104496E8, (int)&unk_1044955C, 6, (int)"DT_PropCrane");
  return 1;
}
