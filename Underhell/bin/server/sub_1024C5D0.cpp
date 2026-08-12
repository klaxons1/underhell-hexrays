int sub_1024C5D0()
{
  if ( (dword_106C6BB8 & 1) == 0 )
  {
    dword_106C6BB8 |= 1u;
    sub_10122040((int)&unk_106C6A88, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C6AD4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106C6B20, (int)"m_Handle", 800, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106C6B6C, (int)"m_bSendHandle", 804, 1, -1, 0, 0);
    atexit(sub_104744B0);
  }
  sub_10121D00(byte_106C6BD0, (int)&unk_106C6AD4, 3, (int)off_1064FE8C);
  return 1;
}
