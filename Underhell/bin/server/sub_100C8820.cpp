int sub_100C8820()
{
  if ( (dword_106969B0 & 1) == 0 )
  {
    dword_106969B0 |= 1u;
    sub_10122040(&unk_10696918, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10234790(&unk_10696964, "m_flNextAttack", 1672, 4);
    atexit(sub_1046FA30);
  }
  sub_10121D00(&unk_10696964, 1, off_1060E154[0]);
  return 1;
}
