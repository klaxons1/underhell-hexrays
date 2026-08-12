int sub_101BCB50()
{
  if ( (dword_106BA420 & 1) == 0 )
  {
    dword_106BA420 |= 1u;
    sub_10122040((int)&unk_106BA2F0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106BA33C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106BA388, (int)"m_modelIndex", 800, 4, 11, 0, 0);
    sub_10122040((int)&unk_106BA3D4, (int)"m_solidIndex", 804, 4, 6, 1, 0);
    atexit(sub_10472F00);
  }
  sub_10121D00(byte_106BA4AC, (int)&unk_106BA33C, 3, (int)off_10637B20);
  return 1;
}
