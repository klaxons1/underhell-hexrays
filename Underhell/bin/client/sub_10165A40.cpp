int sub_10165A40()
{
  if ( (dword_10440D68 & 1) == 0 )
  {
    dword_10440D68 |= 1u;
    sub_1009AED0((int)&unk_10440C78, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10440CB4, (int)"baseclass", 0, 0, (int)off_103E9500, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10440CF0, (int)"m_nStartEntity", 76, 4, 0, 0);
    sub_1009AED0((int)&unk_10440D2C, (int)"m_nEndEntity", 80, 4, 0, 0);
  }
  sub_1009AC10(dword_10440DC4, (int)&unk_10440CB4, 3, (int)"DT_TEBeamLaser");
  return 1;
}
