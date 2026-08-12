int sub_100F3D30()
{
  if ( (dword_10699014 & 1) == 0 )
  {
    dword_10699014 |= 1u;
    sub_10122040(&unk_10698D68, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_10698DB4,
      "baseclass",
      0,
      off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_10698E00, (int)"m_flDamage", 2128, 4, 10, 8, 0.0, 256.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_10698E4C, (int)"m_DmgRadius", 2112, 4, 10, 8, 0.0, 1024.0, (int)sub_10121A20);
    sub_10122040(&unk_10698E98, "m_bIsLive", 2109, 1, 1, 1, 0);
    sub_10234730(&unk_10698EE4, "m_hThrower", 2136, 4, -1, sub_10234830);
    sub_10121E50((int)&unk_10698F30, (int)"m_vecVelocity", 592, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040(&unk_10698F7C, "m_fFlags", 256, 4, 9, 1, sub_101E33E0);
    sub_10234790(&unk_10698FC8, "m_flNextAttack", 2116, 4);
    atexit(sub_10470070);
  }
  sub_10121D00(&unk_10698DB4, 8, off_10612218);
  return 1;
}
