int sub_1016B3C0()
{
  if ( (dword_10443ADC & 1) == 0 )
  {
    dword_10443ADC |= 1u;
    sub_1009AED0((int)&unk_10443A28, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10443A64, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10443AA0, (int)"m_nPlayer", 16, 4, 0, 0);
  }
  sub_1009AC10(dword_10443AF4, (int)&unk_10443A64, 2, (int)"DT_TEKillPlayerAttachments");
  return 1;
}
