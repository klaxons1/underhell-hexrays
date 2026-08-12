int sub_100D2A10()
{
  if ( (dword_106971E0 & 1) == 0 )
  {
    dword_106971E0 |= 1u;
    sub_10122040(&unk_10696EE8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_10696F34,
      "baseclass",
      0,
      off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(&unk_10696F80, "LocalWeaponData", 0, &unk_10697244, sub_100D2950);
    sub_101221E0(&unk_10696FCC, "LocalActiveWeaponData", 0, &unk_1069722C, sub_100D2950);
    sub_10122040(&unk_10697018, "m_iViewModelIndex", 1148, 4, 11, 0, 0);
    sub_10122040(&unk_10697064, "m_iWorldModelIndex", 1152, 4, 11, 0, 0);
    sub_10122040(&unk_106970B0, "m_iState", 1184, 4, 8, 1, 0);
    sub_10234730(&unk_106970FC, "m_hOwner", 1120, 4, -1, sub_10234830);
    sub_10234760(&unk_10697148, "m_iClip1", 1200, 4, 8, sub_102346D0);
    sub_10234760(&unk_10697194, "m_iClip2", 1204, 4, 8, sub_102346D0);
    atexit(sub_1046FB40);
  }
  sub_10121D00(&unk_10696F34, 9, off_1060E868);
  return 1;
}
