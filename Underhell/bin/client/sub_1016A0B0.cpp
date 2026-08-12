int sub_1016A0B0()
{
  if ( (dword_10443600 & 1) == 0 )
  {
    dword_10443600 |= 1u;
    sub_1009AED0((int)&unk_10443240, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044327C, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104432B8, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104432F4, (int)"m_vecAngles", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10443330, (int)"m_vecForce", 40, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044336C, (int)"m_vecForcePos", 52, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_104433A8, (int)"m_flWidth", 64, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104433E4, (int)"m_flHeight", 68, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10443420, (int)"m_flShardSize", 72, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1044345C, (int)"m_nSurfaceType", 80, 4, 0, 0);
    sub_1009AED0((int)&unk_10443498, (int)"m_uchFrontColor[0]", 84, 1, 0, 0);
    sub_1009AED0((int)&unk_104434D4, (int)"m_uchFrontColor[1]", 85, 1, 0, 0);
    sub_1009AED0((int)&unk_10443510, (int)"m_uchFrontColor[2]", 86, 1, 0, 0);
    sub_1009AED0((int)&unk_1044354C, (int)"m_uchBackColor[0]", 87, 1, 0, 0);
    sub_1009AED0((int)&unk_10443588, (int)"m_uchBackColor[1]", 88, 1, 0, 0);
    sub_1009AED0((int)&unk_104435C4, (int)"m_uchBackColor[2]", 89, 1, 0, 0);
  }
  sub_1009AC10(dword_10443664, (int)&unk_1044327C, 15, (int)"DT_TEShatterSurface");
  return 1;
}
