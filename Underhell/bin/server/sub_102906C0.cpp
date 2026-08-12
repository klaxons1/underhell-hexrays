int sub_102906C0()
{
  if ( (dword_106D970C & 1) == 0 )
  {
    dword_106D970C |= 1u;
    sub_10122040((int)&unk_106D9628, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D9674,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D96C0, (int)"m_nPlayer", 12, 4, 5, 1, 0);
    atexit(sub_10476160);
  }
  sub_10121D00(byte_106D9724, (int)&unk_106D9674, 2, (int)off_1065CAB4);
  return 1;
}
