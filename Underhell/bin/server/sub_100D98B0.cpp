int sub_100D98B0()
{
  if ( (dword_10697A08 & 1) == 0 )
  {
    dword_10697A08 |= 1u;
    sub_10122040(&unk_10697970, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040(&unk_106979BC, "m_flAnimTime", 124, 4, 8, 66561, sub_100D7A70);
    atexit(sub_1046FE10);
  }
  sub_10121D00(&unk_106979BC, 1, off_1060F520[0]);
  return 1;
}
