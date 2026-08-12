int sub_103C9040()
{
  if ( (dword_106EC374 & 1) == 0 )
  {
    dword_106EC374 |= 1u;
    sub_10122040((int)&unk_106EC290, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EC2DC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106EC328, (int)"m_bFadeOut", 808, 1);
    atexit(sub_10478E30);
  }
  sub_10121D00(byte_106EC214, (int)&unk_106EC2DC, 2, (int)off_1067CEE4[0]);
  return 1;
}
