int sub_101662D0()
{
  if ( (dword_104416A8 & 1) == 0 )
  {
    dword_104416A8 |= 1u;
    sub_1009AED0((int)&unk_10441450, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC90((int)&unk_1044148C, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104414C8, (int)"m_vecDirection", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10441504, (int)"r", 40, 4, 0, 0);
    sub_1009AED0((int)&unk_10441540, (int)"g", 44, 4, 0, 0);
    sub_1009AED0((int)&unk_1044157C, (int)"b", 48, 4, 0, 0);
    sub_1009AED0((int)&unk_104415B8, (int)"a", 52, 4, 0, 0);
    sub_1009AED0((int)&unk_104415F4, (int)"m_nSprayModel", 60, 4, 0, 0);
    sub_1009AED0((int)&unk_10441630, (int)"m_nDropModel", 56, 4, 0, 0);
    sub_1009AED0((int)&unk_1044166C, (int)"m_nSize", 64, 4, 0, 0);
  }
  sub_1009AC10(dword_104416F4, (int)&unk_1044148C, 9, (int)"DT_TEBloodSprite");
  return 1;
}
