int sub_10409830()
{
  if ( (dword_106F07D0 & 1) == 0 )
  {
    dword_106F07D0 |= 1u;
    sub_10122040((int)&unk_106F0738, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F0784,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479A80);
  }
  sub_10121D00(byte_106F0808, (int)&unk_106F0784, 1, (int)off_10687434);
  return 1;
}
