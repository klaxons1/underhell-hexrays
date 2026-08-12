int sub_102EC180()
{
  if ( (dword_106E1F10 & 1) == 0 )
  {
    dword_106E1F10 |= 1u;
    sub_10122040((int)&unk_106E1D48, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E1D94,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106E1DE0, (int)"m_bCountdownStarted", 800, 1, 1, 1, 0);
    sub_10122040((int)&unk_106E1E2C, (int)"m_bDisabled", 801, 1, 1, 1, 0);
    sub_10234790((int)&unk_106E1E78, (int)"m_flStartTime", 804, 4);
    sub_10121D30((int)&unk_106E1EC4, (int)"m_flTimeRemaining", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104775C0);
  }
  sub_10121D00(byte_106E1F4C, (int)&unk_106E1D94, 5, (int)off_10668388);
  return 1;
}
