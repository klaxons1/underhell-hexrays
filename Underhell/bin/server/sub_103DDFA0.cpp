int sub_103DDFA0()
{
  if ( (dword_106EDB50 & 1) == 0 )
  {
    dword_106EDB50 |= 1u;
    sub_10122040((int)&unk_106ED560, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106ED5AC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106ED5F8, (int)"m_vecCameraView", 824, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106ED644, (int)"m_vecCameraViewAngles", 836, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106ED690, (int)"m_iBlendMode", 848, 4, 5, 0, 0);
    sub_10122040((int)&unk_106ED6DC, (int)"m_iNextBlendMode", 852, 4, 5, 0, 0);
    sub_10121D30((int)&unk_106ED728, (int)"m_flNextBlendTime", 856, 4, 10, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ED774, (int)"m_flBlendStartTime", 860, 4, 10, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106ED7C0, (int)"m_bActive", 868, 1);
    sub_10122040((int)&unk_106ED80C, (int)"m_iFOV", 884, 4, 9, 0, 0);
    sub_10122040((int)&unk_106ED858, (int)"m_iNextFOV", 872, 4, 9, 0, 0);
    sub_10122040((int)&unk_106ED8A4, (int)"m_iStartFOV", 864, 4, 9, 0, 0);
    sub_10121D30((int)&unk_106ED8F0, (int)"m_flNextFOVBlendTime", 876, 4, 10, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106ED93C, (int)"m_flFOVBlendStartTime", 880, 4, 10, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106ED988, (int)"m_bAlternateFOV", 888, 1);
    sub_10121D30((int)&unk_106ED9D4, (int)"m_flFadeAlpha", 904, 4, 10, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106EDA20, (int)"m_flFadeColor", 892, 4, 32, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122270((int)&unk_106EDA6C, 3, 4, (int)"m_flFadeColor", 0);
    sub_10121D30((int)&unk_106EDAB8, (int)"m_flFadeDuration", 908, 4, 10, 8, 0.0, 255.0, (int)sub_10121A20);
    sub_10234730((int)&unk_106EDB04, (int)"m_hCameraEntity", 912, 4, -1, sub_10234830);
    atexit(sub_10479170);
  }
  sub_10121D00(byte_106EDB90, (int)&unk_106ED5AC, 19, (int)off_106808B0[0]);
  return 1;
}
