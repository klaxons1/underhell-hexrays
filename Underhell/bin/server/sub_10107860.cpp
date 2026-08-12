int sub_10107860()
{
  if ( (dword_1069A728 & 1) == 0 )
  {
    dword_1069A728 |= 1u;
    sub_10122040(&unk_1069A690, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_1069A6DC,
      "baseclass",
      0,
      off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10470300);
  }
  sub_10121D00(&unk_1069A6DC, 1, off_10613D14);
  return 1;
}
