int sub_10405590()
{
  if ( (dword_106F0560 & 1) == 0 )
  {
    dword_106F0560 |= 1u;
    sub_10122040((int)&unk_106F04C8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F0514,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104799E0);
  }
  sub_10121D00(byte_106F06F4, (int)&unk_106F0514, 1, (int)off_106869C4);
  return 1;
}
