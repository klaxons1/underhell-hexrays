int sub_10168D30()
{
  if ( (dword_106B5100 & 1) == 0 )
  {
    dword_106B5100 |= 1u;
    sub_10122040((int)&unk_106B5068, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B50B4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10471C00);
  }
  sub_10121D00(byte_106B513C, (int)&unk_106B50B4, 1, (int)off_10629110);
  return 1;
}
