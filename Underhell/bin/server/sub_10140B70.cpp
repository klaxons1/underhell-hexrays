int sub_10140B70()
{
  if ( (dword_106B09A8 & 1) == 0 )
  {
    dword_106B09A8 |= 1u;
    sub_10122040((int)&unk_106B0748, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B0794,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106B07E0, (int)"m_flStartScale", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B082C, (int)"m_flScale", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B0878, (int)"m_flScaleTime", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106B08C4, (int)"m_nFlags", 812, 4, 8, 1, 0);
    sub_10122040((int)&unk_106B0910, (int)"m_nFlameModelIndex", 816, 4, 11, 0, 0);
    sub_10122040((int)&unk_106B095C, (int)"m_nFlameFromAboveModelIndex", 820, 4, 11, 0, 0);
    atexit(sub_10471170);
  }
  sub_10121D00(byte_106B0A04, (int)&unk_106B0794, 7, (int)off_10623694[0]);
  return 1;
}
