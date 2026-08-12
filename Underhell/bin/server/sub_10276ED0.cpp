int sub_10276ED0()
{
  if ( (dword_106D0048 & 1) == 0 )
  {
    dword_106D0048 |= 1u;
    sub_10122040((int)&unk_106CFFB0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106CFFFC,
      (int)"baseclass",
      0,
      (int)off_10660830,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474D80);
  }
  sub_10121D00(byte_106D00DC, (int)&unk_106CFFFC, 1, (int)off_10657458[0]);
  return 1;
}
