int sub_102089F0()
{
  if ( (dword_106C2388 & 1) == 0 )
  {
    dword_106C2388 |= 1u;
    sub_10122040((int)&unk_106C2258, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C22A4,
      (int)"baseclass",
      0,
      (int)off_1063B040,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106C22F0, (int)"m_iPhysicsMode", 1212, 4, 1, 1, 0);
    sub_10121D30((int)&unk_106C233C, (int)"m_fMass", 1216, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10473A00);
  }
  sub_10121D00(byte_106C1F2C, (int)&unk_106C22A4, 3, (int)off_10643118[0]);
  return 1;
}
