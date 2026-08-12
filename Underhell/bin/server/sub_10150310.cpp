int sub_10150310()
{
  if ( (dword_106B2624 & 1) == 0 )
  {
    dword_106B2624 |= 1u;
    sub_10122040((int)&unk_106B2540, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B258C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106B25D8, (int)"m_fDisappearDist", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10471540);
  }
  sub_10121D00(byte_106B265C, (int)&unk_106B258C, 2, (int)off_10626BD0);
  return 1;
}
