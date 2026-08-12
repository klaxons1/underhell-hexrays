int sub_1024CA40()
{
  if ( (dword_106C6E2C & 1) == 0 )
  {
    dword_106C6E2C |= 1u;
    sub_10122040((int)&unk_106C6D48, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C6D94,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0((int)&unk_106C6DE0, (int)"blah", 0, (int)byte_106C6C18, (int (__cdecl *)(int, int, int))sub_1024CA00);
    atexit(sub_104744F0);
  }
  sub_10121D00(byte_106C6C44, (int)&unk_106C6D94, 2, (int)off_1064FEE4[0]);
  return 1;
}
