int sub_1028F200()
{
  if ( (dword_106D8840 & 1) == 0 )
  {
    dword_106D8840 |= 1u;
    sub_10122040((int)&unk_106D8678, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D86C4,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D8710, (int)"m_nEntity", 12, 4, 11, 1, 0);
    sub_10122040((int)&unk_106D875C, (int)"m_nModelIndex", 16, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D87A8, (int)"m_nDensity", 20, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D87F4, (int)"m_nCurrent", 24, 4, 16, 0, 0);
    atexit(sub_10475F90);
  }
  sub_10121D00(byte_106D8858, (int)&unk_106D86C4, 5, (int)off_1065C9C8);
  return 1;
}
