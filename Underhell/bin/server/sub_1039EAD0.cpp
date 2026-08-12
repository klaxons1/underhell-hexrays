int sub_1039EAD0()
{
  if ( (dword_106EAA20 & 1) == 0 )
  {
    dword_106EAA20 |= 1u;
    sub_10122040((int)&unk_106EA858, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EA8A4,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106EA8F0, (int)"m_bIsOpen", 3800, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106EA93C, (int)"m_flActiveTime", 3804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106EA988, (int)"m_bHackedByAlyx", 3829, 1, 1, 1, 0);
    sub_10122040((int)&unk_106EA9D4, (int)"m_bPowerDown", 3838, 1, 1, 1, 0);
    atexit(sub_104789D0);
  }
  sub_10121D00(byte_106EA7D8, (int)&unk_106EA8A4, 5, (int)off_106782D8);
  return 1;
}
