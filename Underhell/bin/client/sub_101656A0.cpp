int sub_101656A0()
{
  if ( (dword_10440AE0 & 1) == 0 )
  {
    dword_10440AE0 |= 1u;
    sub_1009AED0((int)&unk_104409F0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10440A2C, (int)"baseclass", 0, 0, (int)off_103E9500, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10440A68, (int)"m_nStartEntity", 76, 4, 0, 0);
    sub_1009AED0((int)&unk_10440AA4, (int)"m_nEndEntity", 80, 4, 0, 0);
  }
  sub_1009AC10(dword_10440B3C, (int)&unk_10440A2C, 3, (int)"DT_TEBeamEnts");
  return 1;
}
