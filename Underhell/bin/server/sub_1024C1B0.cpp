int sub_1024C1B0()
{
  if ( (dword_106C6A30 & 1) == 0 )
  {
    dword_106C6A30 |= 1u;
    sub_10122040((int)&unk_106C6900, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C694C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_102348B0((int)&unk_106C6998, (int)"m_SoundName", 804);
    sub_102348B0((int)&unk_106C69E4, (int)"m_iszSpriteName", 852);
    atexit(sub_10474460);
  }
  sub_10121D00(byte_106C6A6C, (int)&unk_106C694C, 3, (int)off_1064F9EC[0]);
  return 1;
}
