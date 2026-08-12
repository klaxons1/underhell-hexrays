int sub_102914C0()
{
  int v0; // eax

  if ( (dword_106DA1DC & 1) == 0 )
  {
    dword_106DA1DC |= 1u;
    sub_10122040((int)&unk_106DA060, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DA0AC,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DA0F8, (int)"m_vecOrigin", 16, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106DA144, (int)"m_nEntity", 28, 4, 11, 1, 0);
    v0 = sub_10421D60(17);
    sub_10122040((int)&unk_106DA190, (int)"m_nPlayer", 12, 4, v0, 1, 0);
    atexit(sub_104762D0);
  }
  sub_10121D00(byte_106DA1F4, (int)&unk_106DA0AC, 4, (int)off_1065CB5C);
  return 1;
}
