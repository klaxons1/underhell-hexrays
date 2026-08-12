int sub_101231B0()
{
  if ( (dword_1069CA3C & 1) == 0 )
  {
    dword_1069CA3C |= 1u;
    sub_10122040((int)&unk_1069C790, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_1069C7DC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_1069C828, (int)"m_Flags", 801, 1, 4, 1, 0);
    sub_10122040((int)&unk_1069C874, (int)"m_LightStyle", 802, 1, 4, 1, 0);
    sub_10121D30((int)&unk_1069C8C0, (int)"m_Radius", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_1069C90C, (int)"m_Exponent", 808, 4, 8, 0, 0);
    sub_10121D30((int)&unk_1069C958, (int)"m_InnerAngle", 812, 4, 8, 0, 0.0, 360.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069C9A4, (int)"m_OuterAngle", 816, 4, 8, 0, 0.0, 360.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069C9F0, (int)"m_SpotRadius", 820, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10470860);
  }
  sub_10121D00(byte_1069CA78, (int)&unk_1069C7DC, 8, (int)off_10619568);
  return 1;
}
