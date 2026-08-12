int sub_1028ED60()
{
  if ( (dword_106D8600 & 1) == 0 )
  {
    dword_106D8600 |= 1u;
    sub_10122040((int)&unk_106D8308, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D8354,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D83A0, (int)"m_nModelIndex", 24, 4, 11, 0, 0);
    sub_10121D30((int)&unk_106D83EC, (int)"m_fScale", 28, 4, 9, 0, 0.0, 51.200001, (int)sub_10121A20);
    sub_10122040((int)&unk_106D8438, (int)"m_nFrameRate", 32, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D8484, (int)"m_nFlags", 36, 4, 8, 1, 0);
    sub_10121E50((int)&unk_106D84D0, (int)"m_vecNormal", 40, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D851C, (int)"m_chMaterialType", 52, 1, 8, 1, 0);
    sub_10122040((int)&unk_106D8568, (int)"m_nRadius", 56, 4, 32, 1, 0);
    sub_10122040((int)&unk_106D85B4, (int)"m_nMagnitude", 60, 4, 32, 1, 0);
    atexit(sub_10475F40);
  }
  sub_10121D00(byte_106D861C, (int)&unk_106D8354, 9, (int)off_1065C9A8);
  return 1;
}
