int sub_100BD9F0()
{
  if ( (dword_10695F84 & 1) == 0 )
  {
    dword_10695F84 |= 1u;
    sub_10122040(&unk_10695EA0, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_10695EEC,
      "baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730(&unk_10695F38, "m_hLightingLandmark", 800, 4, -1, sub_10234830);
    atexit(sub_1046F8A0);
  }
  sub_10121D00(&unk_10695EEC, 2, off_1060D210[0]);
  return 1;
}
