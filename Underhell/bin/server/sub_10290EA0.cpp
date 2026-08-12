int sub_10290EA0()
{
  if ( (dword_106D9FEC & 1) == 0 )
  {
    dword_106D9FEC |= 1u;
    sub_10122040((int)&unk_106D9CA8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D9CF4,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D9D40, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121F00((int)&unk_106D9D8C, (int)"m_angRotation[0]", -24, 4, 13, 0, (int)sub_101219F0);
    sub_10121F00((int)&unk_106D9DD8, (int)"m_angRotation[1]", -28, 4, 13, 0, (int)sub_101219F0);
    sub_10121F00((int)&unk_106D9E24, (int)"m_angRotation[2]", -32, 4, 13, 0, (int)sub_101219F0);
    sub_10121E50((int)&unk_106D9E70, (int)"m_vecVelocity", 36, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D9EBC, (int)"m_nModelIndex", 48, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D9F08, (int)"m_nSkin", 52, 4, 10, 0, 0);
    sub_10122040((int)&unk_106D9F54, (int)"m_nFlags", 56, 4, 2, 1, 0);
    sub_10122040((int)&unk_106D9FA0, (int)"m_nEffects", 60, 4, 11, 1, 0);
    atexit(sub_10476280);
  }
  sub_10121D00(byte_106DA004, (int)&unk_106D9CF4, 10, (int)off_1065CB34);
  return 1;
}
