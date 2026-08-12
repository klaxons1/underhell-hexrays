int sub_10276290()
{
  if ( (dword_106CFF00 & 1) == 0 )
  {
    dword_106CFF00 |= 1u;
    sub_10122040((int)&unk_106CFE68, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106CFEB4,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474D30);
  }
  sub_10121D00(byte_106CFF84, (int)&unk_106CFEB4, 1, (int)off_10657174);
  return 1;
}
