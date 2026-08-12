int sub_10282D10()
{
  if ( (dword_106D2A40 & 1) == 0 )
  {
    dword_106D2A40 |= 1u;
    sub_10122040((int)&unk_106D27E0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D282C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D2878, (int)"m_flScale", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D28C4, (int)"m_flScaleTime", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106D2910, (int)"m_nFlags", 812, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D295C, (int)"m_nPlasmaModelIndex", 816, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D29A8, (int)"m_nPlasmaModelIndex2", 820, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D29F4, (int)"m_nGlowModelIndex", 824, 4, 11, 0, 0);
    atexit(sub_104755C0);
  }
  sub_10121D00(byte_106D2A78, (int)&unk_106D282C, 7, (int)off_1065A888);
  return 1;
}
