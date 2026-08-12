int sub_102437D0()
{
  if ( (dword_106C5C00 & 1) == 0 )
  {
    dword_106C5C00 |= 1u;
    sub_10122040((int)&unk_106C5AD0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C5B1C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106C5B68, (int)"m_bDisplayPerf", 800, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C5BB4, (int)"m_bMeasurePerf", 801, 1, 1, 1, 0);
    atexit(sub_10474250);
  }
  sub_10121D00(byte_106C5C3C, (int)&unk_106C5B1C, 3, (int)off_1064E2E4);
  return 1;
}
