int sub_10272A00()
{
  if ( (dword_106CFA98 & 1) == 0 )
  {
    dword_106CFA98 |= 1u;
    sub_10122040((int)&unk_106CFA00, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106CFA4C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474BE0);
  }
  sub_10121D00(byte_106CFB74, (int)&unk_106CFA4C, 1, (int)off_106561A4);
  return 1;
}
