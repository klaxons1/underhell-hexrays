int sub_101733C0()
{
  if ( (dword_10444640 & 1) == 0 )
  {
    dword_10444640 |= 1u;
    sub_1009AED0((int)&unk_104444D8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10444514, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10444550, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044458C, (int)"m_angRotation", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_104445C8, (int)"m_flDistance", 40, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10444604, (int)"m_nIndex", 44, 4, 0, 0);
  }
  sub_1009AC10(dword_10444674, (int)&unk_10444514, 5, (int)"DT_TEProjectedDecal");
  return 1;
}
