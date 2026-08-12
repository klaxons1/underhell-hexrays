int sub_10192640()
{
  if ( (dword_10447438 & 1) == 0 )
  {
    dword_10447438 |= 1u;
    sub_1009AED0((int)&unk_104472D0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044730C, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10447348, (int)"m_bCountdownStarted", 1192, 1, 0, 0);
    sub_1009AED0((int)&unk_10447384, (int)"m_bDisabled", 1193, 1, 0, 0);
    sub_101160A0((int)&unk_104473C0, (int)"m_flStartTime", 1196, 4);
    sub_1009AC40((int)&unk_104473FC, (int)"m_flTimeRemaining", 1200, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1044743C, (int)&unk_1044730C, 5, (int)"DT_InfoTeleporterCountdown");
  return 1;
}
