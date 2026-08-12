int sub_101346B0()
{
  if ( (dword_106AFDC4 & 1) == 0 )
  {
    dword_106AFDC4 |= 1u;
    sub_10122040((int)&unk_106AFB18, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106AFB64,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106AFBB0, (int)"m_bUseCustomAutoExposureMin", 816, 1, 1, 1, 0);
    sub_10122040((int)&unk_106AFBFC, (int)"m_bUseCustomAutoExposureMax", 817, 1, 1, 1, 0);
    sub_10122040((int)&unk_106AFC48, (int)"m_bUseCustomBloomScale", 818, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106AFC94, (int)"m_flCustomAutoExposureMin", 820, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106AFCE0, (int)"m_flCustomAutoExposureMax", 824, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106AFD2C, (int)"m_flCustomBloomScale", 828, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106AFD78,
      (int)"m_flCustomBloomScaleMinimum",
      832,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    atexit(sub_10470EB0);
  }
  sub_10121D00(byte_106AFE48, (int)&unk_106AFB64, 8, (int)off_1061FAB8);
  return 1;
}
