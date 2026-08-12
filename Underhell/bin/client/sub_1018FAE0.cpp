int sub_1018FAE0()
{
  if ( (dword_104468C4 & 1) == 0 )
  {
    dword_104468C4 |= 1u;
    sub_1009AED0((int)&unk_10446720, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044675C, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10446798, (int)"m_flScale", 1192, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_104467D4, (int)"m_nState", 1196, 4, 0, 0);
    sub_1009AC40((int)&unk_10446810, (int)"m_flDuration", 1200, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044684C, (int)"m_flStartTime", 1204, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10446888, (int)"m_spawnflags", 1208, 4, 0, 0);
  }
  sub_1009AC10(dword_104468C8, (int)&unk_1044675C, 6, (int)"DT_CitadelEnergyCore");
  return 1;
}
