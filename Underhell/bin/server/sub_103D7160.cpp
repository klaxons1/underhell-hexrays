int sub_103D7160()
{
  if ( (dword_106ED0D4 & 1) == 0 )
  {
    dword_106ED0D4 |= 1u;
    sub_10122040((int)&unk_106ECD90, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106ECDDC,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106ECE28, (int)"m_flScaleX", 1120, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ECE74, (int)"m_flScaleY", 1124, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ECEC0, (int)"m_flScaleZ", 1128, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ECF0C, (int)"m_flLerpTimeX", 1132, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ECF58, (int)"m_flLerpTimeY", 1136, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ECFA4, (int)"m_flLerpTimeZ", 1140, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ECFF0, (int)"m_flGoalTimeX", 1144, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ED03C, (int)"m_flGoalTimeY", 1148, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ED088, (int)"m_flGoalTimeZ", 1152, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10479030);
  }
  sub_10121D00(byte_106ED110, (int)&unk_106ECDDC, 10, (int)off_1067F46C[0]);
  return 1;
}
