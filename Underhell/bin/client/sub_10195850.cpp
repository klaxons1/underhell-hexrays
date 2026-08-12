int sub_10195850()
{
  if ( (dword_10447D08 & 1) == 0 )
  {
    dword_10447D08 |= 1u;
    sub_1009AED0((int)&unk_10447C18, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10447C54, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10447C90, (int)"m_vecVelocity", 232, 12, 0, (int)sub_100357C0);
    sub_1009AED0((int)&unk_10447CCC, (int)"m_bSprayOn", 1192, 1, 0, 0);
  }
  sub_1009AC10(dword_10447D0C, (int)&unk_10447C54, 3, (int)"DT_PlasmaBeamNode");
  return 1;
}
