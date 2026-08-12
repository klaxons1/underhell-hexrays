int sub_100D14F0()
{
  if ( (dword_10696D60 & 1) == 0 )
  {
    dword_10696D60 |= 1u;
    sub_10122040(&unk_10696C30, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040(&unk_10696C7C, "m_iPrimaryAmmoType", 1192, 4, 8, 0, 0);
    sub_10122040(&unk_10696CC8, "m_iSecondaryAmmoType", 1196, 4, 8, 0, 0);
    sub_10122040(&unk_10696D14, "m_nViewModelIndex", 1128, 4, 2, 1, 0);
    atexit(sub_1046FB10);
  }
  sub_10121D00(&unk_10696C7C, 3, off_1060E860[0]);
  return 1;
}
