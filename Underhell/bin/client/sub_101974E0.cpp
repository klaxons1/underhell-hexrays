int sub_101974E0()
{
  if ( (dword_10448254 & 1) == 0 )
  {
    dword_10448254 |= 1u;
    sub_1009AED0((int)&unk_104481A0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104481DC, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10448218, (int)"m_flAltitude", 1192, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10448258, (int)&unk_104481DC, 2, (int)"DT_RotorWashEmitter");
  return 1;
}
