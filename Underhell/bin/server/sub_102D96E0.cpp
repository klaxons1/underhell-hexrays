int sub_102D96E0()
{
  if ( (dword_106DFCEC & 1) == 0 )
  {
    dword_106DFCEC |= 1u;
    sub_10122040((int)&unk_106DFC08, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DFC54,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106DFCA0, (int)"m_nReferencePlayer", 1120, 4, 10, 1, 0);
    atexit(sub_10477210);
  }
  sub_10121D00(byte_106DFBF0, (int)&unk_106DFC54, 2, (int)off_10665CC8[0]);
  return 1;
}
