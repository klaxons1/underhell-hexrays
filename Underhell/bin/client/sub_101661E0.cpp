int sub_101661E0()
{
  if ( (dword_10441358 & 1) == 0 )
  {
    dword_10441358 |= 1u;
    sub_1009AED0((int)&unk_10441268, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0((int)&unk_104412A4, (int)"m_nPoints", 208, 4, 0, 0);
    sub_1009AC90((int)&unk_104412E0, (int)"m_vecPoints[0]", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AD80((int)&unk_1044131C, 16, 12, (int)"m_vecPoints", 0);
  }
  sub_1009AC10(&dword_10441434, (int)&unk_104412A4, 3, (int)"DT_TEBeamSpline");
  return 1;
}
