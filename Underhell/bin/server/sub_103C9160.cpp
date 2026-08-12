int sub_103C9160()
{
  if ( (dword_106EC590 & 1) == 0 )
  {
    dword_106EC590 |= 1u;
    sub_10122040((int)&unk_106EC460, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EC4AC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106EC4F8, (int)"m_flRadius", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106EC544, (int)"m_flScaleTime", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10478E90);
  }
  sub_10121D00(byte_106EC274, (int)&unk_106EC4AC, 3, (int)off_1067CEEC[0]);
  return 1;
}
