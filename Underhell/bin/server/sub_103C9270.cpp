int sub_103C9270()
{
  if ( (dword_106EC714 & 1) == 0 )
  {
    dword_106EC714 |= 1u;
    sub_10122040((int)&unk_106EC598, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EC5E4,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234790((int)&unk_106EC630, (int)"m_flBlueEndFadeTime", 5856, 4);
    sub_10234700((int)&unk_106EC67C, (int)"m_bIsBlue", 5852, 1);
    sub_10234700((int)&unk_106EC6C8, (int)"m_bIsBlack", 5860, 1);
    atexit(sub_10478EB0);
  }
  sub_10121D00(byte_106EC180, (int)&unk_106EC5E4, 4, (int)off_1067CFF8[0]);
  return 1;
}
