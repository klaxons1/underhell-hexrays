int sub_10131630()
{
  if ( (dword_106AF0A4 & 1) == 0 )
  {
    dword_106AF0A4 |= 1u;
    sub_10122040((int)&unk_106AEFC0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106AF00C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106AF058, (int)"m_flSequenceScale", 1120, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10470D60);
  }
  sub_10121D00(byte_106AF0E0, (int)&unk_106AF00C, 2, (int)off_1061E8C4);
  return 1;
}
