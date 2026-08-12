int sub_10266BA0()
{
  if ( (dword_106CECDC & 1) == 0 )
  {
    dword_106CECDC |= 1u;
    sub_10122040((int)&unk_106CE7D0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106CE81C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106CE868, (int)"m_hPlayer", 1640, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106CE8B4, (int)"m_nSpeed", 1644, 4, 8, 0, 0);
    sub_10122040((int)&unk_106CE900, (int)"m_nRPM", 1648, 4, 13, 0, 0);
    sub_10121D30((int)&unk_106CE94C, (int)"m_flThrottle", 1652, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106CE998, (int)"m_nBoostTimeLeft", 1656, 4, 8, 0, 0);
    sub_10122040((int)&unk_106CE9E4, (int)"m_nHasBoost", 1660, 4, 1, 1, 0);
    sub_10122040((int)&unk_106CEA30, (int)"m_nScannerDisabledWeapons", 1691, 1, 1, 1, 0);
    sub_10122040((int)&unk_106CEA7C, (int)"m_nScannerDisabledVehicle", 1692, 1, 1, 1, 0);
    sub_10122040((int)&unk_106CEAC8, (int)"m_bEnterAnimOn", 1712, 1, 1, 1, 0);
    sub_10122040((int)&unk_106CEB14, (int)"m_bExitAnimOn", 1713, 1, 1, 1, 0);
    sub_10122040((int)&unk_106CEB60, (int)"m_bUnableToFire", 1688, 1, 1, 1, 0);
    sub_10121E50((int)&unk_106CEBAC, (int)"m_vecEyeExitEndpoint", 1664, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10234700((int)&unk_106CEBF8, (int)"m_bHasGun", 1689, 1);
    sub_10234700((int)&unk_106CEC44, (int)"m_bPlayerAtGun", 1690, 1);
    sub_10121E50((int)&unk_106CEC90, (int)"m_vecGunCrosshair", 1676, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10474A20);
  }
  sub_10121D00(byte_106CEDC8, (int)&unk_106CE81C, 16, (int)off_10653EB4[0]);
  return 1;
}
