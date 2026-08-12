int sub_102BB460()
{
  if ( (dword_106DD760 & 1) == 0 )
  {
    dword_106DD760 |= 1u;
    sub_10122040((int)&unk_106DD630, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DD67C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(
      (int)&unk_106DD6C8,
      (int)"m_Shared",
      1124,
      (int)&unk_106DDDC4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106DD714, (int)"m_bLanded", 1120, 1);
    atexit(sub_10476A20);
  }
  sub_10121D00(byte_106DD878, (int)&unk_106DD67C, 3, (int)off_106615C4[0]);
  return 1;
}
