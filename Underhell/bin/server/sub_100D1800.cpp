int sub_100D1800()
{
  if ( (dword_10696EE4 & 1) == 0 )
  {
    dword_10696EE4 |= 1u;
    sub_10122040(&unk_10696D68, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10234790(&unk_10696DB4, "m_flNextPrimaryAttack", 1132, 4);
    sub_10234790(&unk_10696E00, "m_flNextSecondaryAttack", 1136, 4);
    sub_10122040(&unk_10696E4C, "m_nNextThinkTick", 188, 4, -1, 0, 0);
    sub_10234790(&unk_10696E98, "m_flTimeWeaponIdle", 1140, 4);
    atexit(sub_1046FB60);
  }
  sub_10121D00(&unk_10696DB4, 4, off_1060E864[0]);
  return 1;
}
