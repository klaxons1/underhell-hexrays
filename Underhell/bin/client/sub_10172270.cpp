int sub_10172270()
{
  if ( (dword_1044400C & 1) == 0 )
  {
    dword_1044400C |= 1u;
    sub_1009AED0((int)&unk_10443EE0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10443F1C, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10443F58, (int)"m_vecOrigin[0]", 16, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10443F94, (int)"m_vecOrigin[1]", 20, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10443FD0, (int)"m_vecOrigin[2]", 24, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10444010, (int)&unk_10443F1C, 4, (int)"DT_TEParticleSystem");
  return 1;
}
