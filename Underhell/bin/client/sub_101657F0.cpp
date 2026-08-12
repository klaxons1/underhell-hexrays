int sub_101657F0()
{
  if ( (dword_10440C0C & 1) == 0 )
  {
    dword_10440C0C |= 1u;
    sub_1009AED0((int)&unk_10440B58, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10440B94, (int)"baseclass", 0, 0, (int)off_103E9500, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10440BD0, (int)"m_iEntIndex", 76, 4, 0, 0);
  }
  sub_1009AC10(dword_10440C60, (int)&unk_10440B94, 2, (int)"DT_TEBeamFollow");
  return 1;
}
