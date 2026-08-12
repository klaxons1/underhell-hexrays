int sub_102E5610()
{
  if ( (dword_106E1558 & 1) == 0 )
  {
    dword_106E1558 |= 1u;
    sub_10122040((int)&unk_106E1098, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30((int)&unk_106E10E4, (int)"m_flSuitPower", 4, 4, 10, 17, 0.0, 100.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106E1130, (int)"m_bZooming", 8, 1, 1, 1, 0);
    sub_10122040((int)&unk_106E117C, (int)"m_bitsActiveDevices", 12, 4, 3, 1, 0);
    sub_10122040((int)&unk_106E11C8, (int)"m_iSquadMemberCount", 16, 4, -1, 0, 0);
    sub_10122040((int)&unk_106E1214, (int)"m_iSquadMedicCount", 20, 4, -1, 0, 0);
    sub_10234700((int)&unk_106E1260, (int)"m_fSquadInFollowMode", 24, 1);
    sub_10234700((int)&unk_106E12AC, (int)"m_bWeaponLowered", 25, 1);
    sub_10234730((int)&unk_106E12F8, (int)"m_hAutoAimTarget", 28, 4, -1, sub_10234830);
    sub_10121E50((int)&unk_106E1344, (int)"m_vecAutoAimPoint", 32, 12, 32, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10234730((int)&unk_106E1390, (int)"m_hLadder", 64, 4, -1, sub_10234830);
    sub_10234700((int)&unk_106E13DC, (int)"m_bDisplayReticle", 44, 1);
    sub_10234700((int)&unk_106E1428, (int)"m_bStickyAutoAim", 45, 1);
    sub_10234700((int)&unk_106E1474, (int)"m_bAutoAimTarget", 46, 1);
    sub_10121D30((int)&unk_106E14C0, (int)"m_flFlashBattery", 48, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106E150C, (int)"m_vecLocatorOrigin", 52, 12, 32, 4, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10477480);
  }
  sub_10121D00(byte_106E157C, (int)&unk_106E10E4, 15, (int)off_106674E4);
  return 1;
}
