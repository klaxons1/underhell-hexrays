int sub_10208AC0()
{
  if ( (dword_106C2558 & 1) == 0 )
  {
    dword_106C2558 |= 1u;
    sub_10122040((int)&unk_106C2390, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C23DC,
      (int)"baseclass",
      0,
      (int)off_10643010,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106C2428, (int)"m_iPhysicsMode", 1692, 4, 2, 1, 0);
    sub_10121D30((int)&unk_106C2474, (int)"m_fMass", 1696, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106C24C0, (int)"m_collisionMins", 1704, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C250C, (int)"m_collisionMaxs", 1716, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10473A30);
  }
  sub_10121D00(byte_106C1F5C, (int)&unk_106C23DC, 5, (int)off_1064311C[0]);
  return 1;
}
