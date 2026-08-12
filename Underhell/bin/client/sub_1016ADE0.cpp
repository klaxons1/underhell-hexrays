int sub_1016ADE0()
{
  if ( (dword_10443824 & 1) == 0 )
  {
    dword_10443824 |= 1u;
    sub_1009AED0((int)&unk_10443680, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104436BC, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104436F8, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10443734, (int)"m_nModelIndex", 28, 4, 0, 0);
    sub_1009AC40((int)&unk_10443770, (int)"m_fScale", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104437AC, (int)"m_fLife", 36, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_104437E8, (int)"m_nBrightness", 40, 4, 0, 0);
  }
  sub_1009AC10(dword_10443854, (int)&unk_104436BC, 6, (int)"DT_TEGlowSprite");
  return 1;
}
