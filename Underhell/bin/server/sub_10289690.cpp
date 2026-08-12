int sub_10289690()
{
  if ( (dword_106D5028 & 1) == 0 )
  {
    dword_106D5028 |= 1u;
    sub_10122040((int)&unk_106D4F90, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D4FDC,
      (int)"baseclass",
      0,
      (int)off_1065C644,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475890);
  }
  sub_10121D00(byte_106D517C, (int)&unk_106D4FDC, 1, (int)off_1065C66C[0]);
  return 1;
}
