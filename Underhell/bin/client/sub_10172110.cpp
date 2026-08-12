int sub_10172110()
{
  if ( (dword_10443E90 & 1) == 0 )
  {
    dword_10443E90 |= 1u;
    sub_1009AED0((int)&unk_10443D28, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10443D64, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10443DA0, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10443DDC, (int)"m_vecAngles", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_10443E18, (int)"m_flScale", 40, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10443E54, (int)"m_nType", 44, 4, 0, 0);
  }
  sub_1009AC10(dword_10443EC4, (int)&unk_10443D64, 5, (int)"DT_TEMuzzleFlash");
  return 1;
}
