int sub_10148250()
{
  if ( (dword_106B1660 & 1) == 0 )
  {
    dword_106B1660 |= 1u;
    sub_10122040((int)&unk_106B1498, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B14E4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106B1530, (int)"m_flFadeDist", 816, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B157C, (int)"m_flFadeStartDist", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B15C8, (int)"m_flTranslucencyLimit", 820, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106B1614, (int)"m_iBackgroundModelIndex", 828, 4, 11, 0, 0);
    atexit(sub_10471350);
  }
  sub_10121D00(byte_106B1698, (int)&unk_106B14E4, 5, (int)off_10625288);
  return 1;
}
