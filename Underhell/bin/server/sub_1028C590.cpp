int sub_1028C590()
{
  if ( (dword_106D6FC4 & 1) == 0 )
  {
    dword_106D6FC4 |= 1u;
    sub_10122040((int)&unk_106D6BE8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D6C34,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D6C80, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121F00((int)&unk_106D6CCC, (int)"m_angRotation[0]", -48, 4, 13, 0, (int)sub_101219F0);
    sub_10121F00((int)&unk_106D6D18, (int)"m_angRotation[1]", -52, 4, 13, 0, (int)sub_101219F0);
    sub_10121F00((int)&unk_106D6D64, (int)"m_angRotation[2]", -56, 4, 13, 0, (int)sub_101219F0);
    sub_10121E50((int)&unk_106D6DB0, (int)"m_vecSize", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D6DFC, (int)"m_vecVelocity", 36, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D6E48, (int)"m_nModelIndex", 64, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D6E94, (int)"m_nRandomization", 60, 4, 9, 1, 0);
    sub_10122040((int)&unk_106D6EE0, (int)"m_nCount", 68, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106D6F2C, (int)"m_fTime", 72, 4, 10, 0, 0.0, 102.4, (int)sub_10121A20);
    sub_10122040((int)&unk_106D6F78, (int)"m_nFlags", 76, 4, 8, 1, 0);
    atexit(sub_10475C70);
  }
  sub_10121D00(byte_106D6FDC, (int)&unk_106D6C34, 12, (int)off_1065C850);
  return 1;
}
