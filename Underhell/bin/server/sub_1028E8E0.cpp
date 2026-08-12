int sub_1028E8E0()
{
  if ( (dword_106D80DC & 1) == 0 )
  {
    dword_106D80DC |= 1u;
    sub_10122040((int)&unk_106D7FF8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D8044,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(
      (int)&unk_106D8090,
      (int)"m_EffectData",
      12,
      (int)byte_1069D0D8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475EA0);
  }
  sub_10121D00(byte_106D80F4, (int)&unk_106D8044, 2, (int)off_1065C95C);
  return 1;
}
