int sub_10169B20()
{
  if ( (dword_106B51F0 & 1) == 0 )
  {
    dword_106B51F0 |= 1u;
    sub_10122040((int)&unk_106B5158, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B51A4,
      (int)"baseclass",
      0,
      (int)off_1060E7F0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10471C40);
  }
  sub_10121D00(byte_106B528C, (int)&unk_106B51A4, 1, (int)off_10629380);
  return 1;
}
