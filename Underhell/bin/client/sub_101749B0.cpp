int sub_101749B0()
{
  if ( (dword_10444F88 & 1) == 0 )
  {
    dword_10444F88 |= 1u;
    sub_1009AED0((int)&unk_10444E98, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10444ED4, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10444F10, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10444F4C, (int)"m_nIndex", 28, 4, 0, 0);
  }
  sub_1009AC10(dword_10444FAC, (int)&unk_10444ED4, 3, (int)"DT_TEWorldDecal");
  return 1;
}
