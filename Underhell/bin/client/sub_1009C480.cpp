int sub_1009C480()
{
  if ( (dword_1042D5EC & 1) == 0 )
  {
    dword_1042D5EC |= 1u;
    sub_1009AED0((int)&unk_1042D538, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC40((int)&unk_1042D574, (int)"m_flFadeStartDist", 1192, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042D5B0, (int)"m_flFadeEndDist", 1196, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1042D51C, (int)&unk_1042D574, 2, (int)"DT_DetailController");
  return 1;
}
